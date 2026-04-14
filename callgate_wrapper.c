#include <ia2.h>
#include <scrub_registers.h>
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivP9Dav1dDataE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivP9Dav1dDataE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP11DemuxerPrivP9Dav1dDataE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivP9Dav1dDataE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP11DemuxerPrivP9Dav1dDataE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivPKcPjS3_S3_E_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivPKcPjS3_S3_E_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP11DemuxerPrivPKcPjS3_S3_E_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r8\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivPKcPjS3_S3_E_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP11DemuxerPrivPKcPjS3_S3_E_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivmE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivmE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP11DemuxerPrivmE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivmE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP11DemuxerPrivmE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP12Dav1dPicturePvE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP12Dav1dPicturePvE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP12Dav1dPicturePvE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFiP12Dav1dPicturePvE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP12Dav1dPicturePvE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFiP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP9MuxerPrivP12Dav1dPictureE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP9MuxerPrivP12Dav1dPictureE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP9MuxerPrivP12Dav1dPictureE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFiP9MuxerPrivP12Dav1dPictureE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP9MuxerPrivP12Dav1dPictureE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcPK22Dav1dPictureParametersPKjE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcPK22Dav1dPictureParametersPKjE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcPK22Dav1dPictureParametersPKjE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcPK22Dav1dPictureParametersPKjE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcPK22Dav1dPictureParametersPKjE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiPKhE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFiPKhE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFiPKhE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFiPKhE_pkey_1, .-__ia2_indirect_callgate__ZTSPFiPKhE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFjP11MsacContextPtmE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFjP11MsacContextPtmE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFjP11MsacContextPtmE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFjP11MsacContextPtmE_pkey_1, .-__ia2_indirect_callgate__ZTSPFjP11MsacContextPtmE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFmPK14pthread_attr_tE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFmPK14pthread_attr_tE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFmPK14pthread_attr_tE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFmPK14pthread_attr_tE_pkey_1, .-__ia2_indirect_callgate__ZTSPFmPK14pthread_attr_tE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP11DemuxerPrivE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP11DemuxerPrivE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP11DemuxerPrivE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP11DemuxerPrivE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP11DemuxerPrivE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP12Dav1dPicturePvE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP12Dav1dPicturePvE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP12Dav1dPicturePvE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP12Dav1dPicturePvE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP12Dav1dPicturePvE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSize9EdgeFlagsPK8Av1BlockE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSize9EdgeFlagsPK8Av1BlockE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSize9EdgeFlagsPK8Av1BlockE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSize9EdgeFlagsPK8Av1BlockE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSize9EdgeFlagsPK8Av1BlockE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r8\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiiE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 56(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
    "popq %r8\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiiiiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiiiiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiiiiE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r8\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiiiiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiiiiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP17Dav1dFrameContextiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP17Dav1dFrameContextiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP17Dav1dFrameContextiE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP17Dav1dFrameContextiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP17Dav1dFrameContextiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP21refmvs_temporal_blocklPKP12refmvs_blockPKhiiiiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP21refmvs_temporal_blocklPKP12refmvs_blockPKhiiiiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP21refmvs_temporal_blocklPKP12refmvs_blockPKhiiiiE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy stack arguments from the caller's stack to the compartment */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r12\n"
    "movq %fs:(%r12), %rax\n"
    "pushq 72(%rax)\n"
    "pushq 64(%rax)\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 56(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
    "popq %r8\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $24, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP21refmvs_temporal_blocklPKP12refmvs_blockPKhiiiiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP21refmvs_temporal_blocklPKP12refmvs_blockPKhiiiiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP9MuxerPrivE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvP9MuxerPrivE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP9MuxerPrivE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP9MuxerPrivE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvP9MuxerPrivE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPK12refmvs_frameiiiiiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvPK12refmvs_frameiiiiiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPK12refmvs_frameiiiiiE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 56(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
    "popq %r8\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvPK12refmvs_frameiiiiiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvPK12refmvs_frameiiiiiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPKhPvE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvPKhPvE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPKhPvE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvPKhPvE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvPKhPvE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPP12refmvs_blockPKS_iiiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvPP12refmvs_blockPKS_iiiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPP12refmvs_blockPKS_iiiE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r8\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvPP12refmvs_blockPKS_iiiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvPP12refmvs_blockPKS_iiiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPhPKhiiiiE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvPhPKhiiiiE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPhPKhiiiiE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 56(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
    "popq %r8\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvPhPKhiiiiE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvPhPKhiiiiE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPvPKcP13__va_list_tagE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvPvPKcP13__va_list_tagE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPvPKcP13__va_list_tagE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvPvPKcP13__va_list_tagE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvPvPKcP13__va_list_tagE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPviE_pkey_1\n"
    ".type __ia2_indirect_callgate__ZTSPFvPviE_pkey_1, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPviE_pkey_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvPviE_pkey_1, .-__ia2_indirect_callgate__ZTSPFvPviE_pkey_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivP9Dav1dDataE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivP9Dav1dDataE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP11DemuxerPrivP9Dav1dDataE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivP9Dav1dDataE_pkey_2, .-__ia2_indirect_callgate__ZTSPFiP11DemuxerPrivP9Dav1dDataE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivPKcPjS3_S3_E_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivPKcPjS3_S3_E_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP11DemuxerPrivPKcPjS3_S3_E_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r8\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivPKcPjS3_S3_E_pkey_2, .-__ia2_indirect_callgate__ZTSPFiP11DemuxerPrivPKcPjS3_S3_E_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivmE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivmE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP11DemuxerPrivmE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivmE_pkey_2, .-__ia2_indirect_callgate__ZTSPFiP11DemuxerPrivmE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP12Dav1dPicturePvE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFiP12Dav1dPicturePvE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP12Dav1dPicturePvE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFiP12Dav1dPicturePvE_pkey_2, .-__ia2_indirect_callgate__ZTSPFiP12Dav1dPicturePvE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFiP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFiP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_2, .-__ia2_indirect_callgate__ZTSPFiP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP9MuxerPrivP12Dav1dPictureE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFiP9MuxerPrivP12Dav1dPictureE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP9MuxerPrivP12Dav1dPictureE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFiP9MuxerPrivP12Dav1dPictureE_pkey_2, .-__ia2_indirect_callgate__ZTSPFiP9MuxerPrivP12Dav1dPictureE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcE_pkey_2, .-__ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcPK22Dav1dPictureParametersPKjE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcPK22Dav1dPictureParametersPKjE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcPK22Dav1dPictureParametersPKjE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcPK22Dav1dPictureParametersPKjE_pkey_2, .-__ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcPK22Dav1dPictureParametersPKjE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFiPKhE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFiPKhE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFiPKhE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFiPKhE_pkey_2, .-__ia2_indirect_callgate__ZTSPFiPKhE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFjP11MsacContextPtmE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFjP11MsacContextPtmE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFjP11MsacContextPtmE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFjP11MsacContextPtmE_pkey_2, .-__ia2_indirect_callgate__ZTSPFjP11MsacContextPtmE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int) -> int: */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFmPK14pthread_attr_tE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFmPK14pthread_attr_tE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFmPK14pthread_attr_tE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFmPK14pthread_attr_tE_pkey_2, .-__ia2_indirect_callgate__ZTSPFmPK14pthread_attr_tE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP11DemuxerPrivE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFvP11DemuxerPrivE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP11DemuxerPrivE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP11DemuxerPrivE_pkey_2, .-__ia2_indirect_callgate__ZTSPFvP11DemuxerPrivE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP12Dav1dPicturePvE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFvP12Dav1dPicturePvE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP12Dav1dPicturePvE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP12Dav1dPicturePvE_pkey_2, .-__ia2_indirect_callgate__ZTSPFvP12Dav1dPicturePvE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSize9EdgeFlagsPK8Av1BlockE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSize9EdgeFlagsPK8Av1BlockE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSize9EdgeFlagsPK8Av1BlockE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSize9EdgeFlagsPK8Av1BlockE_pkey_2, .-__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSize9EdgeFlagsPK8Av1BlockE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_2, .-__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextE_pkey_2, .-__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r8\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiE_pkey_2, .-__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiiE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiiE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiiE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 56(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
    "popq %r8\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiiE_pkey_2, .-__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiiE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiE_pkey_2, .-__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiiiiE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiiiiE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiiiiE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r8\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiiiiE_pkey_2, .-__ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiiiiE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP17Dav1dFrameContextiE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFvP17Dav1dFrameContextiE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP17Dav1dFrameContextiE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP17Dav1dFrameContextiE_pkey_2, .-__ia2_indirect_callgate__ZTSPFvP17Dav1dFrameContextiE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP21refmvs_temporal_blocklPKP12refmvs_blockPKhiiiiE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFvP21refmvs_temporal_blocklPKP12refmvs_blockPKhiiiiE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP21refmvs_temporal_blocklPKP12refmvs_blockPKhiiiiE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy stack arguments from the caller's stack to the compartment */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r12\n"
    "movq %fs:(%r12), %rax\n"
    "pushq 72(%rax)\n"
    "pushq 64(%rax)\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 56(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
    "popq %r8\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $24, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP21refmvs_temporal_blocklPKP12refmvs_blockPKhiiiiE_pkey_2, .-__ia2_indirect_callgate__ZTSPFvP21refmvs_temporal_blocklPKP12refmvs_blockPKhiiiiE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvP9MuxerPrivE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFvP9MuxerPrivE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFvP9MuxerPrivE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvP9MuxerPrivE_pkey_2, .-__ia2_indirect_callgate__ZTSPFvP9MuxerPrivE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPK12refmvs_frameiiiiiE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFvPK12refmvs_frameiiiiiE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPK12refmvs_frameiiiiiE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 56(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
    "popq %r8\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvPK12refmvs_frameiiiiiE_pkey_2, .-__ia2_indirect_callgate__ZTSPFvPK12refmvs_frameiiiiiE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPKhPvE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFvPKhPvE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPKhPvE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvPKhPvE_pkey_2, .-__ia2_indirect_callgate__ZTSPFvPKhPvE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPP12refmvs_blockPKS_iiiE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFvPP12refmvs_blockPKS_iiiE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPP12refmvs_blockPKS_iiiE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r8\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvPP12refmvs_blockPKS_iiiE_pkey_2, .-__ia2_indirect_callgate__ZTSPFvPP12refmvs_blockPKS_iiiE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int, int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPhPKhiiiiE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFvPhPKhiiiiE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPhPKhiiiiE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    "movq %r8, %rcx\n"
    "movq %r9, %r8\n"
    "movq 56(%rax), %r9\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    "pushq %r9\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %r9\n"
    "popq %r8\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvPhPKhiiiiE_pkey_2, .-__ia2_indirect_callgate__ZTSPFvPhPKhiiiiE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPvPKcP13__va_list_tagE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFvPvPKcP13__va_list_tagE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPvPKcP13__va_list_tagE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    "movq %rcx, %rdx\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvPvPKcP13__va_list_tagE_pkey_2, .-__ia2_indirect_callgate__ZTSPFvPvPKcP13__va_list_tagE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for indirect call(int, int): */
    ".text\n"
    ".global __ia2_indirect_callgate__ZTSPFvPviE_pkey_2\n"
    ".type __ia2_indirect_callgate__ZTSPFvPviE_pkey_2, @function\n"
    "__ia2_indirect_callgate__ZTSPFvPviE_pkey_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Copy arguments into the correct registers */
    "movq %rdi, %r12\n"
    "movq %rsi, %rdi\n"
    "movq %rdx, %rsi\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %r12\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r12\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffffc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call *%r12\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __ia2_indirect_callgate__ZTSPFvPviE_pkey_2, .-__ia2_indirect_callgate__ZTSPFvPviE_pkey_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for __getdelim(int, int, int, int) -> int: */
    ".text\n"
    ".global __wrap___getdelim_from_2\n"
    ".type __wrap___getdelim_from_2, @function\n"
    "__wrap___getdelim_from_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Keep union PKRU so pthread_once can touch caller-owned once_control. */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call __getdelim\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap___getdelim_from_2, .-__wrap___getdelim_from_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for __overflow(int, int) -> int: */
    ".text\n"
    ".global __wrap___overflow_from_2\n"
    ".type __wrap___overflow_from_2, @function\n"
    "__wrap___overflow_from_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Keep union PKRU so pthread_once can access caller-owned once_control. */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call __overflow\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap___overflow_from_2, .-__wrap___overflow_from_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for __sched_cpucount(int, int) -> int: */
    ".text\n"
    ".global __wrap___sched_cpucount\n"
    ".type __wrap___sched_cpucount, @function\n"
    "__wrap___sched_cpucount:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call __sched_cpucount\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap___sched_cpucount, .-__wrap___sched_cpucount\n"
    ".previous\n"
);
asm(
    /* Wrapper for __sysconf(int) -> int: */
    ".text\n"
    ".global __wrap___sysconf\n"
    ".type __wrap___sysconf, @function\n"
    "__wrap___sysconf:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call __sysconf\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap___sysconf, .-__wrap___sysconf\n"
    ".previous\n"
);
asm(
    /* Wrapper for __uflow(int) -> int: */
    ".text\n"
    ".global __wrap___uflow_from_2\n"
    ".type __wrap___uflow_from_2, @function\n"
    "__wrap___uflow_from_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call __uflow\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap___uflow_from_2, .-__wrap___uflow_from_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_apply_grain(int, int, int) -> int: */
    ".text\n"
    ".global __wrap_dav1d_apply_grain\n"
    ".type __wrap_dav1d_apply_grain, @function\n"
    "__wrap_dav1d_apply_grain:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_apply_grain\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_apply_grain, .-__wrap_dav1d_apply_grain\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_close(int): */
    ".text\n"
    ".global __wrap_dav1d_close\n"
    ".type __wrap_dav1d_close, @function\n"
    "__wrap_dav1d_close:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_close\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_close, .-__wrap_dav1d_close\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_data_create(int, int) -> int: */
    ".text\n"
    ".global __wrap_dav1d_data_create\n"
    ".type __wrap_dav1d_data_create, @function\n"
    "__wrap_dav1d_data_create:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_data_create\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_data_create, .-__wrap_dav1d_data_create\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_data_props_unref(int): */
    ".text\n"
    ".global __wrap_dav1d_data_props_unref\n"
    ".type __wrap_dav1d_data_props_unref, @function\n"
    "__wrap_dav1d_data_props_unref:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_data_props_unref\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_data_props_unref, .-__wrap_dav1d_data_props_unref\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_data_unref(int): */
    ".text\n"
    ".global __wrap_dav1d_data_unref\n"
    ".type __wrap_dav1d_data_unref, @function\n"
    "__wrap_dav1d_data_unref:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_data_unref\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_data_unref, .-__wrap_dav1d_data_unref\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_data_wrap(int, int, int, int, int) -> int: */
    ".text\n"
    ".global __wrap_dav1d_data_wrap\n"
    ".type __wrap_dav1d_data_wrap, @function\n"
    "__wrap_dav1d_data_wrap:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    "pushq %r8\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %r8\n"
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_data_wrap\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_data_wrap, .-__wrap_dav1d_data_wrap\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_data_wrap_user_data(int, int, int, int) -> int: */
    ".text\n"
    ".global __wrap_dav1d_data_wrap_user_data\n"
    ".type __wrap_dav1d_data_wrap_user_data, @function\n"
    "__wrap_dav1d_data_wrap_user_data:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_data_wrap_user_data\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_data_wrap_user_data, .-__wrap_dav1d_data_wrap_user_data\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_default_settings(int): */
    ".text\n"
    ".global __wrap_dav1d_default_settings\n"
    ".type __wrap_dav1d_default_settings, @function\n"
    "__wrap_dav1d_default_settings:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_default_settings\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_default_settings, .-__wrap_dav1d_default_settings\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_flush(int): */
    ".text\n"
    ".global __wrap_dav1d_flush\n"
    ".type __wrap_dav1d_flush, @function\n"
    "__wrap_dav1d_flush:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_flush\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_flush, .-__wrap_dav1d_flush\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_get_cpu_flags_x86() -> int: */
    ".text\n"
    ".global __wrap_dav1d_get_cpu_flags_x86\n"
    ".type __wrap_dav1d_get_cpu_flags_x86, @function\n"
    "__wrap_dav1d_get_cpu_flags_x86:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_get_cpu_flags_x86\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_get_cpu_flags_x86, .-__wrap_dav1d_get_cpu_flags_x86\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_get_decode_error_data_props(int, int) -> int: */
    ".text\n"
    ".global __wrap_dav1d_get_decode_error_data_props\n"
    ".type __wrap_dav1d_get_decode_error_data_props, @function\n"
    "__wrap_dav1d_get_decode_error_data_props:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_get_decode_error_data_props\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_get_decode_error_data_props, .-__wrap_dav1d_get_decode_error_data_props\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_get_event_flags(int, int) -> int: */
    ".text\n"
    ".global __wrap_dav1d_get_event_flags\n"
    ".type __wrap_dav1d_get_event_flags, @function\n"
    "__wrap_dav1d_get_event_flags:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_get_event_flags\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_get_event_flags, .-__wrap_dav1d_get_event_flags\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_get_frame_delay(int) -> int: */
    ".text\n"
    ".global __wrap_dav1d_get_frame_delay\n"
    ".type __wrap_dav1d_get_frame_delay, @function\n"
    "__wrap_dav1d_get_frame_delay:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_get_frame_delay\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_get_frame_delay, .-__wrap_dav1d_get_frame_delay\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_get_picture(int, int) -> int: */
    ".text\n"
    ".global __wrap_dav1d_get_picture\n"
    ".type __wrap_dav1d_get_picture, @function\n"
    "__wrap_dav1d_get_picture:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_get_picture\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_get_picture, .-__wrap_dav1d_get_picture\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_init_cpu(): */
    ".text\n"
    ".global __wrap_dav1d_init_cpu\n"
    ".type __wrap_dav1d_init_cpu, @function\n"
    "__wrap_dav1d_init_cpu:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_init_cpu\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_init_cpu, .-__wrap_dav1d_init_cpu\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_num_logical_processors(int) -> int: */
    ".text\n"
    ".global __wrap_dav1d_num_logical_processors\n"
    ".type __wrap_dav1d_num_logical_processors, @function\n"
    "__wrap_dav1d_num_logical_processors:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_num_logical_processors\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_num_logical_processors, .-__wrap_dav1d_num_logical_processors\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_open(int, int) -> int: */
    ".text\n"
    ".global __wrap_dav1d_open\n"
    ".type __wrap_dav1d_open, @function\n"
    "__wrap_dav1d_open:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_open\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_open, .-__wrap_dav1d_open\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_parse_sequence_header(int, int, int) -> int: */
    ".text\n"
    ".global __wrap_dav1d_parse_sequence_header\n"
    ".type __wrap_dav1d_parse_sequence_header, @function\n"
    "__wrap_dav1d_parse_sequence_header:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_parse_sequence_header\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_parse_sequence_header, .-__wrap_dav1d_parse_sequence_header\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_picture_unref(int): */
    ".text\n"
    ".global __wrap_dav1d_picture_unref\n"
    ".type __wrap_dav1d_picture_unref, @function\n"
    "__wrap_dav1d_picture_unref:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_picture_unref\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_picture_unref, .-__wrap_dav1d_picture_unref\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_send_data(int, int) -> int: */
    ".text\n"
    ".global __wrap_dav1d_send_data\n"
    ".type __wrap_dav1d_send_data, @function\n"
    "__wrap_dav1d_send_data:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_send_data\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_send_data, .-__wrap_dav1d_send_data\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_set_cpu_flags_mask(int): */
    ".text\n"
    ".global __wrap_dav1d_set_cpu_flags_mask\n"
    ".type __wrap_dav1d_set_cpu_flags_mask, @function\n"
    "__wrap_dav1d_set_cpu_flags_mask:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_set_cpu_flags_mask\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_set_cpu_flags_mask, .-__wrap_dav1d_set_cpu_flags_mask\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_version() -> int: */
    ".text\n"
    ".global __wrap_dav1d_version\n"
    ".type __wrap_dav1d_version, @function\n"
    "__wrap_dav1d_version:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_version\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_version, .-__wrap_dav1d_version\n"
    ".previous\n"
);
asm(
    /* Wrapper for dav1d_version_api() -> int: */
    ".text\n"
    ".global __wrap_dav1d_version_api\n"
    ".type __wrap_dav1d_version_api, @function\n"
    "__wrap_dav1d_version_api:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dav1d_version_api\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dav1d_version_api, .-__wrap_dav1d_version_api\n"
    ".previous\n"
);
asm(
    /* Wrapper for dl_iterate_phdr(int, int) -> int: */
    ".text\n"
    ".global __wrap_dl_iterate_phdr_from_2\n"
    ".type __wrap_dl_iterate_phdr_from_2, @function\n"
    "__wrap_dl_iterate_phdr_from_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dl_iterate_phdr\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dl_iterate_phdr_from_2, .-__wrap_dl_iterate_phdr_from_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for dladdr1(int, int, int, int) -> int: */
    ".text\n"
    ".global __wrap_dladdr1_from_2\n"
    ".type __wrap_dladdr1_from_2, @function\n"
    "__wrap_dladdr1_from_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dladdr1\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dladdr1_from_2, .-__wrap_dladdr1_from_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for dladdr(int, int) -> int: */
    ".text\n"
    ".global __wrap_dladdr_from_2\n"
    ".type __wrap_dladdr_from_2, @function\n"
    "__wrap_dladdr_from_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dladdr\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dladdr_from_2, .-__wrap_dladdr_from_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for dlclose(int) -> int: */
    ".text\n"
    ".global __wrap_dlclose_from_2\n"
    ".type __wrap_dlclose_from_2, @function\n"
    "__wrap_dlclose_from_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dlclose\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dlclose_from_2, .-__wrap_dlclose_from_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for dlerror() -> int: */
    ".text\n"
    ".global __wrap_dlerror_from_2\n"
    ".type __wrap_dlerror_from_2, @function\n"
    "__wrap_dlerror_from_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dlerror\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dlerror_from_2, .-__wrap_dlerror_from_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for dlinfo(int, int, int) -> int: */
    ".text\n"
    ".global __wrap_dlinfo_from_2\n"
    ".type __wrap_dlinfo_from_2, @function\n"
    "__wrap_dlinfo_from_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dlinfo\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dlinfo_from_2, .-__wrap_dlinfo_from_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for dlmopen(int, int, int) -> int: */
    ".text\n"
    ".global __wrap_dlmopen_from_2\n"
    ".type __wrap_dlmopen_from_2, @function\n"
    "__wrap_dlmopen_from_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dlmopen\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dlmopen_from_2, .-__wrap_dlmopen_from_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for dlopen(int, int) -> int: */
    ".text\n"
    ".global __wrap_dlopen_from_2\n"
    ".type __wrap_dlopen_from_2, @function\n"
    "__wrap_dlopen_from_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dlopen\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dlopen_from_2, .-__wrap_dlopen_from_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for dlsym(int, int) -> int: */
    ".text\n"
    ".global __wrap_dlsym_from_2\n"
    ".type __wrap_dlsym_from_2, @function\n"
    "__wrap_dlsym_from_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dlsym\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dlsym_from_2, .-__wrap_dlsym_from_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for dlvsym(int, int, int) -> int: */
    ".text\n"
    ".global __wrap_dlvsym_from_2\n"
    ".type __wrap_dlvsym_from_2, @function\n"
    "__wrap_dlvsym_from_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call dlvsym\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_dlvsym_from_2, .-__wrap_dlvsym_from_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for getc(int) -> int: */
    ".text\n"
    ".global __wrap_getc_from_2\n"
    ".type __wrap_getc_from_2, @function\n"
    "__wrap_getc_from_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call getc\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_getc_from_2, .-__wrap_getc_from_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for pkey_mprotect(int, int, int, int) -> int: */
    ".text\n"
    ".global __wrap_pkey_mprotect_from_2\n"
    ".type __wrap_pkey_mprotect_from_2, @function\n"
    "__wrap_pkey_mprotect_from_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call pkey_mprotect\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_pkey_mprotect_from_2, .-__wrap_pkey_mprotect_from_2\n"
    ".previous\n"
);
asm(
    /* Wrapper for pthread_attr_destroy(int) -> int: */
    ".text\n"
    ".global __wrap_pthread_attr_destroy\n"
    ".type __wrap_pthread_attr_destroy, @function\n"
    "__wrap_pthread_attr_destroy:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call pthread_attr_destroy\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_pthread_attr_destroy, .-__wrap_pthread_attr_destroy\n"
    ".previous\n"
);
asm(
    /* Wrapper for pthread_attr_init(int) -> int: */
    ".text\n"
    ".global __wrap_pthread_attr_init\n"
    ".type __wrap_pthread_attr_init, @function\n"
    "__wrap_pthread_attr_init:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call pthread_attr_init\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_pthread_attr_init, .-__wrap_pthread_attr_init\n"
    ".previous\n"
);
asm(
    /* Wrapper for pthread_attr_setstacksize(int, int) -> int: */
    ".text\n"
    ".global __wrap_pthread_attr_setstacksize\n"
    ".type __wrap_pthread_attr_setstacksize, @function\n"
    "__wrap_pthread_attr_setstacksize:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Keep union PKRU so libc can write caller-owned pthread_attr_t. */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call pthread_attr_setstacksize\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_pthread_attr_setstacksize, .-__wrap_pthread_attr_setstacksize\n"
    ".previous\n"
);
asm(
    /* Wrapper for pthread_cond_broadcast(int) -> int: */
    ".text\n"
    ".global __wrap_pthread_cond_broadcast\n"
    ".type __wrap_pthread_cond_broadcast, @function\n"
    "__wrap_pthread_cond_broadcast:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call pthread_cond_broadcast\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_pthread_cond_broadcast, .-__wrap_pthread_cond_broadcast\n"
    ".previous\n"
);
asm(
    /* Wrapper for pthread_cond_destroy(int) -> int: */
    ".text\n"
    ".global __wrap_pthread_cond_destroy\n"
    ".type __wrap_pthread_cond_destroy, @function\n"
    "__wrap_pthread_cond_destroy:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call pthread_cond_destroy\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_pthread_cond_destroy, .-__wrap_pthread_cond_destroy\n"
    ".previous\n"
);
asm(
    /* Wrapper for pthread_cond_init(int, int) -> int: */
    ".text\n"
    ".global __wrap_pthread_cond_init\n"
    ".type __wrap_pthread_cond_init, @function\n"
    "__wrap_pthread_cond_init:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call pthread_cond_init\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_pthread_cond_init, .-__wrap_pthread_cond_init\n"
    ".previous\n"
);
asm(
    /* Wrapper for pthread_cond_signal(int) -> int: */
    ".text\n"
    ".global __wrap_pthread_cond_signal\n"
    ".type __wrap_pthread_cond_signal, @function\n"
    "__wrap_pthread_cond_signal:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call pthread_cond_signal\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_pthread_cond_signal, .-__wrap_pthread_cond_signal\n"
    ".previous\n"
);
asm(
    /* Wrapper for pthread_cond_wait(int, int) -> int: */
    ".text\n"
    ".global __wrap_pthread_cond_wait\n"
    ".type __wrap_pthread_cond_wait, @function\n"
    "__wrap_pthread_cond_wait:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call pthread_cond_wait\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_pthread_cond_wait, .-__wrap_pthread_cond_wait\n"
    ".previous\n"
);
asm(
    /* Wrapper for pthread_create(int, int, int, int) -> int: */
    ".text\n"
    ".global __wrap_pthread_create\n"
    ".type __wrap_pthread_create, @function\n"
    "__wrap_pthread_create:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    "pushq %rcx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rcx\n"
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call pthread_create\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_pthread_create, .-__wrap_pthread_create\n"
    ".previous\n"
);
asm(
    /* Wrapper for pthread_getaffinity_np(int, int, int) -> int: */
    ".text\n"
    ".global __wrap_pthread_getaffinity_np\n"
    ".type __wrap_pthread_getaffinity_np, @function\n"
    "__wrap_pthread_getaffinity_np:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    "pushq %rdx\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdx\n"
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call pthread_getaffinity_np\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_pthread_getaffinity_np, .-__wrap_pthread_getaffinity_np\n"
    ".previous\n"
);
asm(
    /* Wrapper for pthread_join(int, int) -> int: */
    ".text\n"
    ".global __wrap_pthread_join\n"
    ".type __wrap_pthread_join, @function\n"
    "__wrap_pthread_join:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call pthread_join\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_pthread_join, .-__wrap_pthread_join\n"
    ".previous\n"
);
asm(
    /* Wrapper for pthread_mutex_destroy(int) -> int: */
    ".text\n"
    ".global __wrap_pthread_mutex_destroy\n"
    ".type __wrap_pthread_mutex_destroy, @function\n"
    "__wrap_pthread_mutex_destroy:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call pthread_mutex_destroy\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_pthread_mutex_destroy, .-__wrap_pthread_mutex_destroy\n"
    ".previous\n"
);
asm(
    /* Wrapper for pthread_mutex_init(int, int) -> int: */
    ".text\n"
    ".global __wrap_pthread_mutex_init\n"
    ".type __wrap_pthread_mutex_init, @function\n"
    "__wrap_pthread_mutex_init:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call pthread_mutex_init\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_pthread_mutex_init, .-__wrap_pthread_mutex_init\n"
    ".previous\n"
);
asm(
    /* Wrapper for pthread_mutex_lock(int) -> int: */
    ".text\n"
    ".global __wrap_pthread_mutex_lock\n"
    ".type __wrap_pthread_mutex_lock, @function\n"
    "__wrap_pthread_mutex_lock:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call pthread_mutex_lock\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_pthread_mutex_lock, .-__wrap_pthread_mutex_lock\n"
    ".previous\n"
);
asm(
    /* Wrapper for pthread_mutex_unlock(int) -> int: */
    ".text\n"
    ".global __wrap_pthread_mutex_unlock\n"
    ".type __wrap_pthread_mutex_unlock, @function\n"
    "__wrap_pthread_mutex_unlock:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call pthread_mutex_unlock\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_pthread_mutex_unlock, .-__wrap_pthread_mutex_unlock\n"
    ".previous\n"
);
asm(
    /* Wrapper for pthread_once(int, int) -> int: */
    ".text\n"
    ".global __wrap_pthread_once\n"
    ".type __wrap_pthread_once, @function\n"
    "__wrap_pthread_once:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Keep union PKRU so pthread_once can access caller-owned once_control. */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call pthread_once\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_pthread_once, .-__wrap_pthread_once\n"
    ".previous\n"
);
asm(
    /* Wrapper for pthread_self() -> int: */
    ".text\n"
    ".global __wrap_pthread_self\n"
    ".type __wrap_pthread_self, @function\n"
    "__wrap_pthread_self:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call pthread_self\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_pthread_self, .-__wrap_pthread_self\n"
    ".previous\n"
);
asm(
    /* Wrapper for putc(int, int) -> int: */
    ".text\n"
    ".global __wrap_putc_from_2\n"
    ".type __wrap_putc_from_2, @function\n"
    "__wrap_putc_from_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xffffffffffffffcc) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rdi\n"
    "pushq %rsi\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rsi\n"
    "popq %rdi\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call putc\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Preserve essential regs on stack */
    "pushq %rax\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Restore preserved regs */
    "popq %rax\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_putc_from_2, .-__wrap_putc_from_2\n"
    ".previous\n"
);
asm(
    ".text\n"
    ".global __wrap_ia2_compartment_destructor_1\n"
    ".type __wrap_ia2_compartment_destructor_1, @function\n"
    "__wrap_ia2_compartment_destructor_1:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "rdpkru\n"
    "movl %eax, %r13d\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "subq $8, %rsp\n"
    "call ia2_compartment_destructor_1\n"
    "addq $8, %rsp\n"
    "movl %r13d, %eax\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "wrpkru\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    "ret\n"
    ".size __wrap_ia2_compartment_destructor_1, .-__wrap_ia2_compartment_destructor_1\n"
    ".previous\n"
);
asm(
    /* Wrapper for ia2_compartment_destructor_2(): */
    ".text\n"
    ".global __wrap_ia2_compartment_destructor_2\n"
    ".type __wrap_ia2_compartment_destructor_2, @function\n"
    "__wrap_ia2_compartment_destructor_2:\n"
    "pushq %rbp\n"
    "movq %rsp, %rbp\n"
    "pushq %rbx\n"
    "pushq %r12\n"
    "pushq %r13\n"
    "pushq %r14\n"
    "pushq %r15\n"
    ASSERT_PKRU(0xfffffffffffffff0) "\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    "subq $8, %rsp\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Set PKRU to the compartment's value */
    "movq %rcx, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffcc, %eax\n"
    "wrpkru\n"
    "movq %r10, %rcx\n"
    "movq %r11, %rdx\n"
    /* Call wrapped function */
    "call ia2_compartment_destructor_2\n"
    /* Set PKRU to the intermediate value to move arguments */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xffffffc0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    /* Free stack space used for stack args */
    "addq $8, %rsp\n"
    /* Compute location to save old stack pointer (using r11) */
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n"
    /* Write the old stack pointer to memory */
    "movq %rsp, %fs:(%r11)\n"
    /* Compute location to load new stack pointer (using r11) */
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n"
    /* Read the new stack pointer from memory */
    "movq %fs:(%r11), %rsp\n"
    /* Scrub non-essential regs */
    "call __libia2_scrub_registers\n"
    /* Set PKRU to the caller's value */
    "movq %rax, %r10\n"
    "movq %rdx, %r11\n"
    "xorl %ecx, %ecx\n"
    "xorl %edx, %edx\n"
    "movl $0xfffffff0, %eax\n"
    "wrpkru\n"
    "movq %r10, %rax\n"
    "movq %r11, %rdx\n"
    "popq %r15\n"
    "popq %r14\n"
    "popq %r13\n"
    "popq %r12\n"
    "popq %rbx\n"
    "popq %rbp\n"
    /* Return to the caller */
    "ret\n"
    ".size __wrap_ia2_compartment_destructor_2, .-__wrap_ia2_compartment_destructor_2\n"
    ".previous\n"
);
