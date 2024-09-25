# /// script
# requires-python = ">=3.12"
# dependencies = [
# ]
# ///
from dataclasses import dataclass
import json
from pathlib import Path
import subprocess


@dataclass
class Compartment:
    pkey: int
    name: str
    srcs: list[Path]
    main: Path


def main():
    cc_db = Path("build/compile_commands.json")
    cwd = Path.cwd()
    ia2_dir = cwd / "../ia2"
    llvm_libdir = Path(
        subprocess.check_output(["llvm-config", "--libdir"]).decode().strip()
    )
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

        #     for src in compartment.srcs:
        #         src_text = src.read_text()
        #         is_main_binary = src == compartment.main and "int main" in src_text
        #         ia2_lines = [
        #             "#include <ia2.h>",
        #             f"INIT_RUNTIME({len(compartments)}); // This is the number of pkeys needed."
        #             if is_main_binary
        #             else "",
        #             f"#define IA2_COMPARTMENT {compartment.pkey}",
        #             "#include <ia2_compartment_init.inc>",
        #         ]
        #         ia2_header = "\n".join(line for line in ia2_lines if line)
        #         if not src_text.startswith(ia2_header):
        #             src.write_text(ia2_header + "\n\n" + src_text)

        text = compartment.main.read_text()
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
            compartment.main.write_text(ia2_header + "\n\n" + text)

        output_dir = cwd / "ia2"
        rewriter_cmd = [
            ia2_dir / "build/tools/rewriter/ia2-rewriter",
            "--output-prefix",
            output_dir / "callgate_wrapper",
            "--root-directory",
            cwd,
            "--output-directory",
            output_dir,
            "-p",
            cwd / "build",
            "--extra-arg",
            "-isystem",
            "--extra-arg",
            "include-fixed",
            "--extra-arg",
            "-isystem",
            "--extra-arg",
            llvm_libdir / "clang/18/include",
            "--extra-arg",
            f"-DPKEY={compartment.pkey}",
            "--extra-arg",
            f"-I{str(ia2_dir / "runtime/libia2/include/")}",
            "--extra-arg",
            "-Wno-error=missing-prototypes",  # ia2 include needs this
            "--extra-arg",
            "-std=gnu11",  # need this for ia2 include
            "--extra-arg",
            "-Wno-missing-prototypes",
            "--extra-arg",
            "-Wno-undef",
            "--extra-arg",
            "-Wno-strict-prototypes",
            "--extra-arg",
            "-Wno-unknown-warning-option",
            "--extra-arg",
            "-Wno-macro-redefined",
            *[cwd / src for src in compartment.srcs],
        ]
        print(f"> {" ".join(str(arg) for arg in rewriter_cmd)}")
        process = subprocess.run(rewriter_cmd)
        if process.returncode != 0:
            # continue
            subprocess.run(["gdb", "--args", *rewriter_cmd])

    # for src_path in srcs:
    #     if "tmpl" in src_path.name:
    #         continue
    #     # if str(src_path) not in {"src/lib.c", "tools/dav1d.c"}:
    #     #     continue

    #     compartment = compartments[src_path.parts[0]]
    #     src_text = src_path.read_text()
    #     is_binary = "int main" in src_text
    #     ia2_lines = [
    #         "#include <ia2.h>",
    #         f"INIT_RUNTIME({len(compartments)}); // This is the number of pkeys needed."
    #         if is_binary
    #         else "",
    #         f"#define IA2_COMPARTMENT {compartment}",
    #         "#include <ia2_compartment_init.inc>",
    #     ]
    #     # print(f"\n\n\t{str(src_path)}:")
    #     ia2_header = "\n".join(line for line in ia2_lines if line)
    #     if not src_text.startswith(ia2_header):
    #         src_path.write_text(ia2_header + "\n\n" + src_text)

    #     rewriter_cmd = [
    #         ia2_dir / "build/tools/rewriter/ia2-rewriter",
    #         "--output-prefix",
    #         cwd / "build/dav1d_call_gates",
    #         "--root-directory",
    #         cwd,
    #         "--output-directory",
    #         cwd / "ia2",
    #         "-p",
    #         cwd / "build",
    #         "--extra-arg",
    #         "-isystem",
    #         "--extra-arg",
    #         "include-fixed",
    #         "--extra-arg",
    #         "-isystem",
    #         "--extra-arg",
    #         llvm_libdir / "clang/18/include",
    #         "--extra-arg",
    #         f"-DPKEY={compartment}",
    #         "--extra-arg",
    #         f"-I{str(ia2_dir / "runtime/libia2/include/")}",
    #         "--extra-arg",
    #         "-Wno-error=missing-prototypes",  # ia2 include needs this
    #         "--extra-arg",
    #         "-std=gnu11",  # need this for ia2 include
    #         "--extra-arg",
    #         "-Wno-missing-prototypes",
    #         "--extra-arg",
    #         "-Wno-undef",
    #         "--extra-arg",
    #         "-Wno-strict-prototypes",
    #         "--extra-arg",
    #         "-Wno-unknown-warning-option",
    #         "--extra-arg",
    #         "-Wno-macro-redefined",
    #         cwd / src_path,
    #     ]
    #     print(f"> {" ".join(str(arg) for arg in rewriter_cmd)}")
    #     process = subprocess.run(rewriter_cmd)
    #     if process.returncode != 0:
    #         # continue
    #         subprocess.run(["gdb", "--args", *rewriter_cmd])
    #     # print(f"{compartment}: {str(src_path)}: {lines}")


if __name__ == "__main__":
    main()
