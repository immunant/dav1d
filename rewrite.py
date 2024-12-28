#!/usr/bin/env -S uv run

# /// script
# requires-python = ">=3.12"
# dependencies = [
#     "plumbum",
#     "typer",
#     "meson",
# ]
# ///
from enum import Enum
import typer
from typer import Option
from dataclasses import dataclass
import json
from pathlib import Path
import shlex
import shutil
import sys
from typing import Annotated, Any, Generator, Iterable, Sequence
from plumbum import local
from plumbum.machines import LocalCommand
from mesonbuild.machinefile import parse_machine_files


def extra_args(*args: str | Path) -> Iterable[str | Path]:
    return (x for arg in args for x in ["--extra-arg", arg])


@dataclass
class LddPath:
    name: Path
    path: Path


def parse_ldd(ldd_output: str) -> Generator[LddPath, None, None]:
    for line in ldd_output.strip().split("\n"):
        parts = line.strip().split(" => ", 1)
        if len(parts) != 2:
            continue
        name, rest = parts
        if rest == "not found":
            raise FileNotFoundError(name)
        path, rest = rest.rsplit(" (")
        yield LddPath(name=Path(name), path=Path(path))


def filter_srcs(srcs: Sequence[Path]) -> Generator[Path, Any, Any]:
    for src in srcs:
        if src.name.endswith("_tmpl.c"):
            continue
        if src.suffix == ".h":
            tmpl_path = src.parent / (src.name.removesuffix(".h") + "_tmpl.c")
            if tmpl_path.exists():
                continue
        if src.name in {"msac.h", "msac.c"}:
            continue
        yield src


def find_clang_include_dir(llvm_config: LocalCommand) -> Path:
    llvm_libdir = Path(llvm_config["--libdir"]().strip())
    llvm_libdir_clang = llvm_libdir / "clang"

    for clang_dir in llvm_libdir_clang.iterdir():
        clang_include_dir = clang_dir / "include"
        if clang_include_dir.is_dir():
            return clang_include_dir
    raise FileNotFoundError(
        f'"$({llvm_config} --libdir)/clang/*/include" does not exist'
    )


class TargetArch(str, Enum):
    X86_64 = "x86_64"
    AArch64 = "aarch64"


class CMakeBuildType(str, Enum):
    Debug = "Debug"
    Release = "Release"
    RelWithDebInfo = "RelWithDebInfo"
    MinSizeRel = "MinSizeRel"


class MesonBuildType(str, Enum):
    Plain = "plain"
    Debug = "debug"
    DebugOptimized = "debugoptimized"
    Release = "release"
    MinSize = "minsize"


def main(
    permissive_mode: Annotated[bool, Option(help="IA2 permissive mode")] = False,
    target_arch: Annotated[TargetArch, Option(help="target arch")] = TargetArch.X86_64,
    enable_dav1d_get_picture_post_condition: Annotated[
        bool, Option(help="enable the dav1d_get_picture post condition function")
    ] = False,
    ia2_cmake_build_type: Annotated[
        CMakeBuildType, Option(help="IA2's CMAKE_BUILD_TYPE")
    ] = CMakeBuildType.Debug,
    dav1d_meson_build_type: Annotated[
        MesonBuildType, Option(help="dav1d's meson buildtype")
    ] = MesonBuildType.Debug,
    ia2_debug_log: Annotated[bool, Option(help="IA2_DEBUG_LOG")] = True,
):
    llvm_target = {
        TargetArch.X86_64: "x86_64-unknown-linux-gnu",
        TargetArch.AArch64: "aarch64-unknown-linux-gnu",
    }[target_arch]
    cross_target = {
        TargetArch.X86_64: None,
        TargetArch.AArch64: "aarch64-linux-clang",
    }[target_arch]
    qemu_target = {
        TargetArch.X86_64: "x86_64-linux-gnu",
        TargetArch.AArch64: "aarch64-linux-gnu",
    }[target_arch]
    ia2_target_arch = {
        TargetArch.X86_64: "x86",
        TargetArch.AArch64: "aarch64",
    }[target_arch]

    build_dir_name = f"build/{target_arch.value}"

    original_dir = Path.cwd()
    original_build_dir = original_dir / build_dir_name
    ia2_dir = original_dir / "../ia2"
    ia2_build_dir = ia2_dir / build_dir_name
    rewritten_dir = original_dir / ".." / f"{original_dir.name}-ia2"
    rewritten_build_dir = rewritten_dir / build_dir_name
    cc_db = original_build_dir / "compile_commands.json"

    meson = local["meson"]
    ninja = local["ninja"]
    git = local["git"]
    llvm_config = local["llvm-config"]
    gdb = local["gdb"]
    clang = local["clang"]
    ldd = local["ldd"]
    cmake = local["cmake"]
    lit = local["lit"]

    canonicalize_compile_command_paths = local[
        ia2_dir / "tools/rewriter/canonicalize_compile_command_paths.py"
    ]

    llvm_cmake_dir = Path(llvm_config["--cmakedir"]().strip())

    ia2_build_dir.mkdir(exist_ok=True, parents=True)
    with local.cwd(ia2_build_dir):
        cmake[
            ia2_dir,
            "-G",
            "Ninja",
            f"-DClang_DIR={str(llvm_cmake_dir / ".." / "clang")}",
            f"-DLLVM_DIR={str(llvm_cmake_dir)}",
            f"-DLLVM_EXTERNAL_LIT={str(lit.executable)}",
            "-DCMAKE_C_COMPILER=clang",
            "-DCMAKE_CXX_COMPILER=clang++",
            *{
                TargetArch.X86_64: [],
                TargetArch.AArch64: [
                    f"-DCMAKE_TOOLCHAIN_FILE={str(ia2_dir / "cmake/aarch64-toolchain.cmake")}"
                ],
            }[target_arch],
            f"-DCMAKE_BUILD_TYPE={ia2_cmake_build_type.value}",
            f"-DIA2_DEBUG_LOG={ia2_debug_log}",
        ]()
        ninja["rewriter"]()
        ninja["pad-tls"]()
        ninja["partition-alloc-padding"]()
        ninja["libia2"]()

    ia2_rewriter = local[ia2_build_dir / "tools/rewriter/ia2-rewriter"]
    pad_tls = local[ia2_build_dir / "tools/pad-tls/pad-tls"]

    ia2_path_args = [
        f"-Dia2_path={str(ia2_dir)}",
        f"-Dia2_build_path={str(ia2_build_dir)}",
    ]

    cross_args = []
    if cross_target is not None:
        cross_file = original_dir / "package" / "crossfiles" / f"{cross_target}.meson"
        cross = parse_machine_files(
            filenames=[str(cross_file)], sourcedir=str(original_dir)
        )
        print(cross)
        cross_args = ["--cross-file", cross_file]
        qemu_ld_prefix = Path("/usr") / qemu_target
        qemu_ld_prefix.iterdir()  # check it exists
        local.env["QEMU_LD_PREFIX"] = qemu_ld_prefix

    original_build_dir.mkdir(exist_ok=True, parents=True)
    with local.cwd(original_build_dir):
        meson["setup", original_dir, "--reconfigure", *ia2_path_args, *cross_args]()
        ninja["include/vcs_version.h"]()
        canonicalize_compile_command_paths()

    if not rewritten_dir.is_dir():
        git["clone", original_dir, rewritten_dir]()

    with local.cwd(rewritten_dir):
        git["switch", "ia2"]()
        stashed = git["stash", "push"]().strip() != "No local changes to save"
        git["pull", "--rebase"]()
        if stashed:
            git["stash", "pop"]()

    clang_include_dir = find_clang_include_dir(llvm_config)

    cc_text = cc_db.read_text()
    cmds = json.loads(cc_text)
    srcs = filter_srcs(Path(cmd["file"]).relative_to(original_dir) for cmd in cmds)

    srcs_to_rewrite = [
        original_dir / src
        for src in srcs
        if src.parts[0] in {"src", "tools"} and src.suffix == ".c"
    ]
    rewrite = ia2_rewriter[
        "--arch",
        ia2_target_arch,
        "--output-prefix",
        rewritten_dir / "callgate_wrapper",
        "--root-directory",
        original_dir,
        "--output-directory",
        rewritten_dir,
        f"--enable-dav1d_get_picture-post-condition={enable_dav1d_get_picture_post_condition}",
        "-p",
        cc_db.parent,
        *extra_args(
            "-isystem",
            "include-fixed",
            "-isystem",
            clang_include_dir,
        ),
        *srcs_to_rewrite,
    ]

    print(f"> {shlex.join(rewrite.formulate())}")
    retcode, stdout, stderr = rewrite.run(
        # retcode=None,
        stdout=sys.stdout,
        stderr=sys.stderr,
    )
    # Path("rewrite.out").write_text(stdout)
    # Path("rewrite.err").write_text(stderr)
    if retcode != 0:
        gdb["--args", *rewrite.formulate()]()

    rpath = rewritten_build_dir / "src"
    rpath.mkdir(exist_ok=True)
    with local.cwd(rewritten_dir):
        clang[
            "-target",
            llvm_target,
            "-shared",
            "-fPIC",
            "-Wl,-z,now",
            rewritten_dir / "callgate_wrapper.c",
            "-I",
            ia2_dir / "runtime/libia2/include/",
            "-o",
            rpath / "libcallgates.so",
        ]()

        # skip all other changes, they don't work and we don't need them
        # keep all changes to `include/` and `tools/`, only revert some changes in `src/`
        src = Path("src")
        src_files_to_keep = (
            "data.c",
            "data.h",
            "lib.c",
            "log.c",
            "obu.c",
            "picture.c",
            "ref.c",
            "ref.h",
        )
        git["add", *(src / file for file in src_files_to_keep)]()
        git["checkout", "--", src / "*"]()

        replacements = (
            (
                src / "lib.c",
                'dlsym(RTLD_DEFAULT, "__pthread_get_minstack");',
                '(struct IA2_fnptr__ZTSFmPK14pthread_attr_tE) { .ptr = dlsym(RTLD_DEFAULT, "__pthread_get_minstack") };',
            ),
            (
                src / "data.c",
                "validate_input_or_ret(free_callback != NULL, DAV1D_ERR(EINVAL));",
                "validate_input_or_ret(IA2_ADDR(free_callback) != NULL, DAV1D_ERR(EINVAL));",
            ),
            (
                src / "lib.c",
                "validate_input_or_ret(s->allocator.alloc_picture_callback != NULL,",
                "validate_input_or_ret(IA2_ADDR(s->allocator.alloc_picture_callback) != NULL,",
            ),
            (
                src / "lib.c",
                "validate_input_or_ret(s->allocator.release_picture_callback != NULL,",
                "validate_input_or_ret(IA2_ADDR(s->allocator.release_picture_callback) != NULL,",
            ),
            (
                Path("callgate_wrapper.h"),
                {
                    TargetArch.X86_64: "struct __va_list_tag *",
                    TargetArch.AArch64: "struct __va_list",
                }[target_arch],
                "va_list",
            ),
        )
        for path, old, new in replacements:
            old_text = path.read_text()
            new_text = old_text.replace(old, new)
            assert (
                old_text != new_text
            ), f"failed to replace `{old}` with `{new}` in `{str(path)}`"
            path.write_text(new_text)

    shutil.copy(
        ia2_build_dir / "runtime/partition-alloc/libpartition-alloc.so",
        rpath,
    )

    with local.cwd(rewritten_build_dir):
        meson[
            "setup",
            rewritten_dir,
            "--reconfigure",
            *ia2_path_args,
            *cross_args,
            "-Dia2_enable=true",
            f"-Dia2_permissive_mode={permissive_mode}",
            f"--buildtype={dav1d_meson_build_type.value}",
        ]()
        retcode, stdout, stderr = ninja["tools/dav1d"].run(
            # retcode=None,
            stdout=sys.stdout,
            stderr=sys.stderr,
        )
        # Path("ninja.out").write_text(stdout)
        # Path("ninja.err").write_text(stderr)
        assert retcode == 0
        canonicalize_compile_command_paths()

    dav1d = rewritten_build_dir / "tools/dav1d"
    pad_tls[dav1d]()

    for ldd in parse_ldd(ldd[dav1d]()):
        padded = rpath / ldd.name
        if padded.exists() and ldd.path.samefile(padded):
            continue
        shutil.copy(ldd.path, padded)
        pad_tls["--allow-no-tls", padded]()


if __name__ == "__main__":
    typer.run(main)
