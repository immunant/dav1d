#!/usr/bin/env -S uv run

# /// script
# requires-python = ">=3.12"
# dependencies = [
#     "plumbum",
#     "typer",
#     "meson",
# ]
# ///
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


def main(
    permissive_mode: Annotated[bool, Option(help="IA2 permissive mode")] = False,
    target: Annotated[str, Option(help="target triple")] = "x86_64-linux-gnu",
    cross: Annotated[
        str | None,
        Option(help="meson cross file target in packages/crossfiles/*.meson"),
    ] = None,
):
    target_arch = target.split("-")[0]

    cwd = Path.cwd()
    build_dir = cwd / "build"
    ia2_dir = cwd / "../ia2"
    ia2_include = ia2_dir / "runtime/libia2/include/"
    ia2_cwd = cwd / ".." / f"{cwd.name}-ia2"
    ia2_build_dir = ia2_cwd / "build"
    cc_db = build_dir / "compile_commands.json"

    meson = local["meson"]
    ninja = local["ninja"]
    canonicalize_compile_command_paths = local[
        ia2_dir / "tools/rewriter/canonicalize_compile_command_paths.py"
    ]
    git = local["git"]
    llvm_config = local["llvm-config"]
    ia2_rewriter = local[ia2_dir / "build/tools/rewriter/ia2-rewriter"]
    pad_tls = local[ia2_dir / "build/tools/pad-tls/pad-tls"]
    gdb = local["gdb"]
    clang = local["clang"]
    ldd = local["ldd"]

    with local.cwd(ia2_dir / "build"):
        ninja["rewriter"]()
        ninja["pad-tls"]()
        ninja["partition-alloc-padding"]()
        ninja["libia2"]()

    ia2_path_arg = f"-Dia2_path={str(ia2_dir)}"

    cross_args = []
    if cross is not None:
        cross_file = cwd / "package" / "crossfiles" / f"{cross}.meson"
        cross = parse_machine_files(filenames=[str(cross_file)], sourcedir=str(cwd))
        print(cross)
        cross_args = ["--cross-file", cross_file]
        qemu_ld_prefix = Path("/usr") / target
        qemu_ld_prefix.iterdir()  # check it exists
        local.env["QEMU_LD_PREFIX"] = qemu_ld_prefix

    shutil.rmtree(build_dir)
    build_dir.mkdir()
    with local.cwd(build_dir):
        meson["setup", cwd, "--reconfigure", ia2_path_arg, *cross_args]()
        ninja["include/vcs_version.h"]()
        canonicalize_compile_command_paths()

    if not ia2_cwd.is_dir():
        git["clone", cwd, ia2_cwd]()

    with local.cwd(ia2_cwd):
        git["switch", "ia2"]()
        stashed = git["stash", "push"]().strip() != "No local changes to save"
        git["pull", "--rebase"]()
        if stashed:
            git["stash", "pop"]()

    clang_include_dir = find_clang_include_dir(llvm_config)

    cc_text = cc_db.read_text()
    cmds = json.loads(cc_text)
    srcs = filter_srcs(Path(cmd["file"]).relative_to(cwd) for cmd in cmds)

    srcs_to_rewrite = [
        cwd / src
        for src in srcs
        if src.parts[0] in {"src", "tools"} and src.suffix == ".c"
    ]
    rewrite = ia2_rewriter[
        "--arch",
        target_arch,
        "--output-prefix",
        ia2_cwd / "callgate_wrapper",
        "--root-directory",
        cwd,
        "--output-directory",
        ia2_cwd,
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

    rpath = ia2_build_dir / "src"

    with local.cwd(ia2_cwd):
        clang[
            "-target",
            target,
            "-shared",
            "-fPIC",
            "-Wl,-z,now",
            ia2_cwd / "callgate_wrapper.c",
            "-I",
            ia2_include,
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
                    "x86_64": "struct __va_list_tag *",
                    "aarch64": "struct __va_list",
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

    shutil.rmtree(ia2_build_dir)
    ia2_build_dir.mkdir()
    with local.cwd(ia2_build_dir):
        meson[
            "setup",
            ia2_cwd,
            "--reconfigure",
            ia2_path_arg,
            *cross_args,
            "-Dia2_enable=true",
            f"-Dia2_permissive_mode={permissive_mode}",
            "--buildtype=debug",
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

    dav1d = ia2_build_dir / "tools/dav1d"
    pad_tls[dav1d]()

    for ldd in parse_ldd(ldd[dav1d]()):
        padded = rpath / ldd.name
        if padded.exists() and ldd.path.samefile(padded):
            continue
        shutil.copy(ldd.path, padded)
        pad_tls["--allow-no-tls", padded]()


if __name__ == "__main__":
    typer.run(main)
