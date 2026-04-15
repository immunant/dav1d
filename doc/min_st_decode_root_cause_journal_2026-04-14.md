# Single-Thread Decode Root Cause Journal (Minimum-Fix Track)

Date: 2026-04-14
Repository: `/home/davidanekstein/immunant/dav1d-min-st-20260414`
Target: strict IA2 single-thread decode success with minimum necessary changes.

## Obstacle 1: Rewriter bootstrap fails before any build/test

### Symptom
Running:

```bash
./rewrite.py --llvm-config /usr/bin/llvm-config-18
```

failed with:

```text
ProcessExecutionError: Unexpected exit code: 128
Command line: | /usr/bin/git switch ia2
Stderr:       | fatal: invalid reference: ia2
```

### Root cause
`rewrite.py` assumes every source checkout has a local branch/ref named `ia2` and forcibly executes:

- `git switch ia2`
- `git pull --rebase`

This is not a decode/runtime bug. It is a tooling precondition bug. In this run, source branch is `exp/min-st-rootcause-20260414` tracking `origin/ia2`; there is no local `ia2` ref in this clone.

### Alternatives considered
1. Create a local `ia2` branch just to satisfy script.
- Rejected: hides the script bug; brittle and non-reproducible across clones.

2. Add command-line option to choose branch.
- Rejected for now: larger behavior change than needed for minimum-fix pass.

3. Remove forced branch-switch/pull and keep rewritten clone aligned to current source checkout.
- Chosen: smallest robust change; preserves current source state and avoids accidental branch drift.

### Change applied
Removed the forced `git switch ia2` / stash / pull block and replaced with a comment documenting intent.

### Why this is the minimum necessary fix
Without this, no rewrite/build/test is possible from non-`ia2` local branches. The change only removes an invalid assumption and does not modify decode behavior.

## Obstacle 2: `--version` crashes before decode due wrong dynamic loader in IA2 runtime path

### Symptom
After obstacle #1, rewrite/build completed (`EXIT:0`), but runtime failed immediately:

- `./tools/dav1d --version` -> `rc=139`
- `./tools/dav1d ... --threads 1` -> `rc=139`

GDB startup trace (no decode frames reached):

```text
Program received signal SIGSEGV, Segmentation fault.
0x00007ffff7fc3cb1 in ?? ()
#0  0x00007ffff7fc3cb1 in ?? ()
#1  0x00007ffff78f6952 in ?? ()
#2  0x00007ffff7ff2b43 in ?? () from .../ia2/build/x86_64/runtime/libia2/ld-linux-x86-64.so.2
```

### Root cause
`rewrite.py` copies dependencies from `ldd` output into the local runtime bundle (`build/.../src`).

`ldd` includes an interpreter line shaped like:

```text
/path/to/custom/ld-linux-x86-64.so.2 => /lib64/ld-linux-x86-64.so.2 (...)
```

The script treated this like a normal dependency and copied host `/lib64/ld-linux...` over IA2 runtime loader path.

Evidence:

- interpreter embedded in binary points to IA2 runtime loader path.
- checksum of that runtime loader matched host loader, not IA2 sysroot loader.

### Alternatives considered
1. Manually copy IA2 sysroot loader each time before running.
- Rejected: operational workaround, not root-cause fix.

2. Keep dependency copy behavior but special-case file name `ld-linux-*`.
- Rejected: brittle; shape differs by architecture/path formatting.

3. Parse `ldd` robustly and skip absolute-name lhs entries (interpreter case), and resync runtime loader from IA2 sysroot after IA2 build.
- Chosen: minimal robust behavior, architecture-agnostic, self-heals stale overwritten runtime loader.

### Change applied
- `parse_ldd()` now ignores entries where lhs name is absolute (`Path(name).is_absolute()`).
- After IA2 build (`ninja libia2`), script copies:
  - `external/glibc/sysroot/lib/ld-linux-*.so.*` -> `runtime/libia2/ld-linux-*.so.*` (if sysroot loader exists).

### Why this is the minimum necessary fix
The crash happened before decoder logic. Correcting loader provenance is prerequisite to any meaningful single-thread decode diagnosis.

## Obstacle 3: Decode crash in IVF demux read path (`fread`/`memmove`) under single-thread mode

### Symptom
After loader fix:

- `./tools/dav1d --version` succeeds (`rc=0`).
- `./tools/dav1d -i test.ivf ... --threads 1` still segfaults (`rc=139`).

GDB stack:

```text
#0 __memmove_evex_unaligned_erms
#1 __GI__IO_file_xsgetn
#2 __GI__IO_fread (buf=0x304400004000, size=520, count=1, ...)
#3 ivf_read at tools/input/ivf.c:160
#4 __ia2_ivf_read
#5 __ia2_indirect_callgate_..._pkey_1
```

Faulting store uses `rdi=0x304400004020` while executing in libc path.

### Root cause
`ivf_read()` allocated frame payload via `dav1d_data_create()` and then passed that pointer to `fread()`.

In IA2 split-compartment execution, libc read/write path can execute under compartment-1 permissions while the destination pointer is decoder-owned/private memory. That creates a cross-compartment write violation in `fread`'s internal memmove path.

### Alternatives considered
1. Broaden wrapper PKRU policy around stdio/memmove calls.
- Rejected: broad policy expansion for one data-flow issue; larger blast radius.

2. Retag broader allocator regions as shared.
- Rejected: weak isolation, not explicit ownership contract.

3. Move demux payload buffers to explicit shared allocator and keep ownership explicit through `dav1d_data_wrap` free callback.
- Chosen: smallest targeted data-placement fix; aligns with explicit shared-memory contract model.

### Change applied
For IVF demux only (minimum first step):
- `tools/input/ivf.c`
  - allocate frame payload via `shared_malloc(sz)`
  - on success, transfer ownership via `dav1d_data_wrap(..., ivf_shared_data_free, NULL)`
  - free path uses `shared_free`

### Why this is the minimum necessary fix
The failing pointer originates from IVF demux input path in this run. Fixing this path first tests whether the violation is specifically payload-placement (root cause) without introducing broader policy changes.

## Obstacle 4: `pthread_once` reads once-control from non-shared location

### Symptom
After IVF shared-buffer fix, decode progressed further but crashed in:

```text
___pthread_once (once_control=...<initted>, init_routine=...<init_internal>)
#1 __wrap_pthread_once
```

Faulting instruction:

```asm
mov (%rdi), %eax
```

where `rdi` points at `src/lib.c` static `initted`.

### Root cause
`initted` (`pthread_once_t`) lived in libdav1d compartment storage. `pthread_once` implementation in libc executes under compartment-1 permissions in this path and touches `once_control`; access violates PKRU constraints when `once_control` is not explicitly shared.

### Alternatives considered
1. Change wrapper PKRU policy for entire `pthread_once` call path to union permissions.
- Rejected here: broader policy adjustment than needed for this concrete object-placement failure.

2. Retag larger data sections as shared.
- Rejected: coarse-grained, unnecessary sharing.

3. Move this once-control object to explicit shared section via `IA2_SHARED_DATA`.
- Chosen: smallest targeted placement fix for this fault site.

### Change applied
- `src/lib.c`: `static pthread_once_t initted IA2_SHARED_DATA = PTHREAD_ONCE_INIT;`

### Why this is the minimum necessary fix
It fixes exactly the failing object access in the observed backtrace without broadening wrapper/runtime policy.

## Obstacle 5: `pthread_once` callback (`init_internal`) executes under pkey1 and faults on libdav1d globals

### Symptom
After moving `initted` to shared data, crash moved to callback body:

```text
#0 dav1d_init_cpu at src/cpu.c:70
#1 init_internal at src/lib.c:58
#2 __pthread_once_slow(... init_internal ...)
#3 ___pthread_once
#4 __wrap_pthread_once
```

Faulting write:

```asm
mov %eax, ... <dav1d_cpu_flags>
```

### Root cause
`__wrap_pthread_once` sets pkey1 (`0xfffffff0`) for the actual `call pthread_once`. libc then invokes `init_internal` callback while still in pkey1 context, but callback writes libdav1d (compartment-2) globals.

### Alternatives considered
1. Rework callback plumbing to always trampoline through an IA2 function wrapper for `pthread_once` callbacks.
- Rejected for now: larger ABI/tooling change than needed for minimum-fix path.

2. Broadly switch many pthread wrappers to union-call PKRU.
- Rejected: too broad for this targeted objective.

3. Target only `__wrap_pthread_once` call-phase PKRU to union (`0xffffffc0`), keeping existing transition policy.
- Chosen: smallest change that matches failing mechanism.

### Change approach
Apply a deterministic post-generation patch in `rewrite.py` to rewrite the `__wrap_pthread_once` call-phase immediate from `0xfffffff0` to `0xffffffc0`.

### Why this is minimum necessary
This changes only the failing call site policy and avoids broad wrapper-policy expansion.

## Obstacle 6: `pthread_attr_t` allocated on comp2 stack, then mutated by libc in comp1

### Symptom
After applying targeted `pthread_once` call-phase policy, decode advanced and failed in:

```text
#0 __memset_evex_unaligned_erms
#1 __GI___pthread_attr_init (attr=0x7ffff6dfffa0)
#2 __wrap_pthread_attr_init
```

### Root cause
`dav1d_open()` used stack-local `pthread_attr_t thread_attr;` in compartment 2 and passed `&thread_attr` to `pthread_attr_init`. libc mutates this object while wrapper executes in compartment-1 context, causing PKRU violation.

### Alternatives considered
1. Broaden pthread wrapper call policy.
- Rejected: wrapper-policy change alone does not establish explicit shared ownership for caller-mutated object.

2. Retag stack pages/shared stack strategy.
- Rejected: coarse and unsafe; stack sharing is not the intended mechanism.

3. Move `pthread_attr_t` to shared allocator lifetime in `dav1d_open`.
- Chosen: direct object-placement fix with explicit ownership (`shared_malloc` / `shared_free`).

### Change applied
- `src/lib.c`
  - added `shared_malloc` / `shared_free` declarations
  - replaced stack `pthread_attr_t` with shared-allocated `pthread_attr_t *thread_attr`
  - updated `pthread_attr_init`, `get_stack_size_internal`, `pthread_attr_setstacksize`, `pthread_create`
  - added matched `pthread_attr_destroy(thread_attr)` + `shared_free(thread_attr)` on success and error paths

### Why this is minimum necessary
This addresses the exact object that libc was mutating at the fault point, without broadening memory-domain policy globally.

## Obstacle 7: `pthread_once` policy fix present in source but absent in built `libcallgates.so`

### Symptom
After adding the targeted `__wrap_pthread_once` policy patch (`0xfffffff0 -> 0xffffffc0` for the call phase), decode still crashed at:

```text
#0 dav1d_init_cpu
#1 init_internal
#2 __pthread_once_slow
#3 ___pthread_once
#4 __wrap_pthread_once
```

Disassembly of built wrapper showed the call-phase PKRU immediate was still `0xfffffff0`.

### Root cause
`rewrite.py` compiled `libcallgates.so` before applying post-generation text edits to `callgate_wrapper.c`. Runtime therefore used stale wrapper code.

### Alternatives considered
1. Remove post-generation patch and modify IA2 rewriter output directly.
- Rejected for minimum-fix track: larger scope and couples this run to rewriter internals.

2. Rebuild wrapper manually after each run.
- Rejected: non-reproducible operator step.

3. Make `rewrite.py` build `libcallgates.so` after all wrapper edits.
- Chosen: smallest deterministic script fix.

### Change applied
Moved wrapper build timing effectively to post-edit stage (compile after replacements and `pthread_once` block patch).

### Why this is minimum necessary
No policy change was taking effect at runtime without this; this is a pure artifact-ordering fix.

## Obstacle 8: `get_stack_size_internal()` calls `dlsym` from compartment-2 into rtld internals

### Symptom
After obstacle #7, crash moved to:

```text
#0 __GI__dl_catch_exception
#1 _dl_catch_error
#2 _dlerror_run
#3 dlsym_implementation
#4 ___dlsym
#5 get_stack_size_internal (src/lib.c:107)
#6 dav1d_open
```

### Root cause
`get_stack_size_internal()` performs:

```c
dlsym(RTLD_DEFAULT, "__pthread_get_minstack")
```

from libdav1d compartment-2 execution. `dlsym`/rtld internals touch loader state protected for compartment 1, causing cross-compartment access fault.

### Alternatives considered
1. Add full `dlsym` wrapper/callgate handling for this path.
- Rejected for minimum-fix track: broader runtime policy/tooling work.

2. Pre-resolve `__pthread_get_minstack` in compartment 1 and pass pointer across.
- Rejected: larger plumbing and lifetime complexity.

3. Disable this glibc minstack workaround in IA2 mode and keep fallback return `0`.
- Chosen: smallest targeted change; leaves non-IA2 behavior unchanged.

### Change applied
In `src/lib.c`:

```c
#if defined(__linux__) && HAVE_DLSYM && defined(__GLIBC__) && !IA2_ENABLE
```

so IA2 builds skip this `dlsym` path.

### Why this is minimum necessary
It removes only the failing rtld interaction while preserving existing fallback semantics.

## Obstacle 9: mempool mutex object allocated in compartment-2 private heap

### Symptom
After obstacle #8, crash moved to:

```text
#0 __memset_evex_unaligned_erms
#1 ___pthread_mutex_init (mutex=0x...)
#2 __wrap_pthread_mutex_init
```

at `dav1d_mem_pool_init` during `pthread_mutex_init(&pool->lock, ...)`.

### Root cause
`Dav1dMemPool` was allocated via `dav1d_malloc` (compartment-2 heap). libc `pthread_mutex_init` in comp1 writes into `pool->lock`, causing a cross-compartment write violation.

### Alternatives considered
1. Broaden `pthread_mutex_init` wrapper policy.
- Rejected: policy broadening without explicit shared ownership.

2. Move only mutex field to a special shared location.
- Rejected: structural complexity for dynamic pool objects.

3. Allocate whole `Dav1dMemPool` in shared memory and free accordingly.
- Chosen: direct object-placement fix matching failing access.

### Change applied
In `src/mem.c`:
- `Dav1dMemPool *pool = shared_malloc(sizeof(Dav1dMemPool));`
- free paths switched to `shared_free(pool)` (init-failure and destroy).
- declared `shared_malloc/shared_free` in file scope.

### Why this is minimum necessary
It fixes exactly the object that libc mutates at the fault site.

## Obstacle 10: `mem.c` fix not propagated to rewritten tree

### Symptom
After applying obstacle #9 in source, rewritten build still crashed in same `pthread_mutex_init` site. Rewritten `src/mem.c` still showed old `dav1d_malloc` code.

### Root cause
`rewrite.py` intentionally reverts most `src/*` edits and only keeps an allow-list. `mem.c` was not in `src_files_to_keep`, so the fix was discarded.

### Alternatives considered
1. Remove bulk `src/*` revert entirely.
- Rejected: high risk of reintroducing unrelated broken rewrites.

2. Post-process `mem.c` in rewritten clone each run.
- Rejected: brittle duplicate transform logic.

3. Add `mem.c` to keep-list.
- Chosen: smallest reproducible propagation fix.

### Change applied
`rewrite.py` keep-list updated to include `"mem.c"`.

### Why this is minimum necessary
Without this, the root-cause fix in obstacle #9 never reaches runtime.

## Result: strict IA2 single-thread decode now succeeds

### Validation commands

```bash
BIN=/home/davidanekstein/immunant/dav1d-min-st-20260414-ia2/build/x86_64/tools/dav1d
IVF=/home/davidanekstein/immunant/test.ivf

"$BIN" --version
"$BIN" -i "$IVF" -o /dev/null --muxer null --threads 1
```

### Outcome
- `--version`: `rc=0`
- single-thread decode: `rc=0`
- runtime output includes:

```text
Decoded 2/2 frames (100.0%)
```

### Minimum set of additional fixes from this pass
1. Build `libcallgates.so` only after wrapper edits in `rewrite.py`.
2. Disable `dlsym(__pthread_get_minstack)` workaround in IA2 mode (`!IA2_ENABLE` gate).
3. Allocate/free `Dav1dMemPool` via shared allocator in `src/mem.c`.
4. Preserve `src/mem.c` in `rewrite.py` keep-list so fix is propagated.
