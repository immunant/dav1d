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
from typing import Sequence
from plumbum import local


@dataclass
class Compartment:
    pkey: int
    name: str
    srcs: list[Path]
    main: Path


def extra_args(*args: list[str | Path]) -> Sequence[str | Path]:
    return (b for a in args for b in ["--extra-arg", a])


def main():
    cwd = Path.cwd()
    build_dir = cwd / "build"
    ia2_dir = cwd / "../ia2"
    ia2_cwd = cwd / ".." / f"{cwd.name}-ia2"
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

    build_dir.mkdir(exist_ok=True)
    with local.cwd(build_dir):
        meson["setup", cwd, "--reconfigure"]()
        ninja()
        canonicalize_compile_command_paths()

    if not ia2_cwd.is_dir():
        git["clone", cwd, ia2_cwd]()

    with local.cwd(ia2_cwd):
        git["stash", "push"]()
        git["pull", "--rebase"]()
        git["stash", "pop"]()

    llvm_libdir = Path(llvm_config["--libdir"]().strip())
    assert llvm_libdir.is_dir()

    pkeys = {
        "src": (0, "lib.c"),
        "tools": (1, "dav1d.c"),
        # "tests": (2, "seek_stress.c"),
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
                "#include <ia2.h>",
                f"INIT_RUNTIME({len(compartments)}); // This is the number of pkeys needed."
                if is_binary
                else "",
                f"#define IA2_COMPARTMENT {compartment.pkey}",
                "#include <ia2_compartment_init.inc>",
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
                f"-DPKEY={compartment.pkey}",
                f"-I{str(ia2_dir / "runtime/libia2/include/")}",
                "-Wno-error=missing-prototypes",  # ia2 include needs this
                "-std=gnu99",  # need this for ia2 include
                "-Wno-missing-prototypes",
                "-Wno-undef",
                "-Wno-strict-prototypes",
                "-Wno-unknown-warning-option",
                "-Wno-macro-redefined",
            ),
            *[cwd / src for src in compartment.srcs],
        ]

        print(f"> {shlex.join(rewrite.formulate())}")
        retcode, _stdout, _stderr = rewrite.run(
            retcode=None, stdout=sys.stdout, stderr=sys.stderr
        )
        if retcode != 0:
            gdb["--args", *rewrite.formulate()]()


if __name__ == "__main__":
    main()
