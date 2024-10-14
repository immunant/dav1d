#!/usr/bin/env -S uv run

# /// script
# requires-python = ">=3.12"
# dependencies = [
#     "plumbum",
# ]
# ///
from dataclasses import dataclass
import json
from pathlib import Path
import shlex
import sys
from typing import Iterable
from plumbum import local


@dataclass
class Compartment:
    pkey: int
    name: str
    srcs: list[Path]
    main: Path


def extra_args(*args: str | Path) -> Iterable[str | Path]:
    return (x for arg in args for x in ["--extra-arg", arg])


def define_args(**defines: str | int | bool) -> Iterable[str]:
    return (f"-D{key}={str(value)}" for key, value in defines.items())


def include_args(*includes: str | Path) -> Iterable[str]:
    return (x for include in includes for x in ["-I", include])


def wno_args(*warnings: str) -> Iterable[str]:
    return (f"-Wno-{warning}" for warning in warnings)


def main():
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
    gdb = local["gdb"]
    cc = local["cc"]
    patch = local["patch"]

    ia2_path_arg = f"-Dia2_path={str(ia2_dir)}"

    build_dir.mkdir(exist_ok=True)
    with local.cwd(build_dir):
        meson["setup", cwd, "--reconfigure", ia2_path_arg]()
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

    llvm_libdir = Path(llvm_config["--libdir"]().strip())
    assert llvm_libdir.is_dir()

    pkeys = {
        # 0 is the untrusted/shared compartment
        "src": (2, "lib.c"),
        "tools": (1, "dav1d.c"),  # main compartment has to be 1
        # "tests": (1, "seek_stress.c"),
    }

    cc_text = cc_db.read_text()
    cmds = json.loads(cc_text)
    srcs = [Path(cmd["file"]).relative_to(cwd) for cmd in cmds]

    compartments: dict[int, Compartment] = {}
    for src_path in srcs:
        name = src_path.parts[0]
        if name not in pkeys:
            continue
        pkey, main_file = pkeys[name]
        if pkey not in compartments:
            compartments[pkey] = Compartment(
                pkey=pkey,
                name=name,
                srcs=[],
                main=Path(name) / main_file,
            )
        compartment = compartments[pkey]
        compartment.srcs.append(src_path)

    for compartment in compartments.values():
        assert compartment.main in compartment.srcs

        for main in (cwd / compartment.main, ia2_cwd / compartment.main):
            text = main.read_text()
            is_binary = "int main" in text
            ia2_lines = [
                "#ifdef IA2_ENABLE",
                "#include <ia2.h>",
                f"INIT_RUNTIME({len(compartments)}); // This is the number of pkeys needed."
                if is_binary
                else "",
                f"#define IA2_COMPARTMENT {compartment.pkey}",
                "#include <ia2_compartment_init.inc>",
                "#endif",
            ]
            ia2_header = "\n".join(line for line in ia2_lines if line)
            if not text.startswith(ia2_header):
                main.write_text(ia2_header + "\n\n" + text)

    rewrite = ia2_rewriter[
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
            llvm_libdir / "clang/18/include",
            # *define_args(IA2_ENABLE=1, PKEY=compartment.pkey),
            # *include_args(ia2_include),
            # "-std=gnu99",  # need this for ia2 include
            # "-Wno-error=missing-prototypes",  # ia2 include needs this
            *wno_args(
                "missing-prototypes",
                "undef",
                "strict-prototypes",
                "unknown-warning-option",
                "macro-redefined",
            ),
        ),
        *[
            cwd / src
            for compartment in compartments.values()
            for src in compartment.srcs
        ],
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

    with local.cwd(ia2_cwd):
        # patch[
        #     "--forward",
        #     "--reject-file",
        #     "-",
        #     "--input",
        #     cwd / "ia2_fn.diff",
        #     "--strip",
        #     "1",
        # ](retcode=None)
        cc[
            "-shared",
            "-fPIC",
            "-Wl,-z,now",
            "callgate_wrapper.c",
            "-I",
            ia2_include,
            "-o",
            "build/src/libcallgates.so",
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
                "struct __va_list_tag *",
                "va_list",
            ),
            (
                Path("tools/dav1d.c"),
                ".sa_handler = IA2_FN(signal_handler),",
                ".sa_handler = signal_handler,",
            ),
        )
        for path, old, new in replacements:
            old_text = path.read_text()
            new_text = old_text.replace(old, new)
            assert (
                old_text != new_text
            ), f"failed to replace `{old}` with `{new}` in `{str(path)}`"
            path.write_text(new_text)

    ia2_build_dir.mkdir(exist_ok=True)
    with local.cwd(ia2_build_dir):
        meson["setup", ia2_cwd, "--reconfigure", ia2_path_arg, "-Dia2_enable=true"]()
        retcode, stdout, stderr = ninja["tools/dav1d"].run(
            # retcode=None,
            stdout=sys.stdout,
            stderr=sys.stderr,
        )
        # Path("ninja.out").write_text(stdout)
        # Path("ninja.err").write_text(stderr)
        assert retcode == 0
        canonicalize_compile_command_paths()


if __name__ == "__main__":
    main()
