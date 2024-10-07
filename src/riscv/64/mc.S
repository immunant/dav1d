/******************************************************************************
 * Copyright © 2018, VideoLAN and dav1d authors
 * Copyright © 2024, Niklas Haas
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *****************************************************************************/

#include "src/riscv/asm.S"

.macro avg va, vb, vm
    vadd.vv \va, \va, \vb
.endm

.macro w_avg va, vb, vm
    vwmul.vx v24, \va, a6
    vwmacc.vx v24, a7, \vb
    vnclip.wi \va, v24, 8
.endm

.macro mask va, vb, vm
    vwmul.vv v24, \va, \vm
    vrsub.vx \vm, \vm, a7
    vwmacc.vv v24, \vb, \vm
    vnclip.wi \va, v24, 10
.endm

.macro bidir_fn type, shift
function \type\()_8bpc_rvv, export=1, ext="v,zba,zbb"
.ifc \type, w_avg
    li a7, 16
    sub a7, a7, a6
.endif
.ifc \type, mask
    li a7, 64
.endif
    li t0, 4
    csrw vxrm, zero
    beq t0, a4, 4f
    csrr t0, vlenb
    ctz t1, a4
    ctz t0, t0
    li t2, 1
    sub t0, t1, t0
    li t4, -3
    bgt t0, t2, 2f
    max t0, t0, t4
    andi t1, t0, 0x7
    addi t0, t1, 1 # may overflow into E16 bit
    ori t0, t0, MA | TA | E16
    ori t1, t1, MA | TA | E8
1:
    addi a5, a5, -4
.rept 2
    vsetvl zero, a4, t0
    sh1add t3, a4, a2
    vle16.v v0, (a2)
    sh1add a2, a4, t3
    vle16.v v4, (t3)
    sh1add t3, a4, a3
    vle16.v v8, (a3)
    sh1add a3, a4, t3
    vle16.v v12, (t3)
.ifc \type, mask
    add t3, a4, a6
    vle8.v v24, (a6)
    add a6, a4, t3
    vle8.v v26, (t3)
    vzext.vf2 v16, v24
    vzext.vf2 v20, v26
.endif
    \type v0, v8, v16
    \type v4, v12, v20
    vmax.vx v8, v0, zero
    vmax.vx v12, v4, zero
    vsetvl zero, zero, t1
    vnclipu.wi v0, v8,  \shift
    vnclipu.wi v2, v12, \shift
    add t3, a1, a0
    vse8.v v0, (a0)
    add a0, a1, t3
    vse8.v v2, (t3)
.endr
    bnez a5, 1b
    ret
2:
    mv t0, a0
    neg t4, a4
    add a0, a1, a0
    addi a5, a5, -1
20:
    vsetvli t2, a4, e16, m4, ta, ma
    sh1add t4, t2, t4
    sh1add t3, t2, a2
    vle16.v v0, (a2)
    sh1add a2, t2, t3
    vle16.v v4, (t3)
    sh1add t3, t2, a3
    vle16.v v8, (a3)
    sh1add a3, t2, t3
    vle16.v v12, (t3)
.ifc \type, mask
    add t3, t2, a6
    vle8.v v24, (a6)
    add a6, t2, t3
    vle8.v v26, (t3)
    vzext.vf2 v16, v24
    vzext.vf2 v20, v26
.endif
    \type v0, v8, v16
    \type v4, v12, v20
    vmax.vx v8, v0, zero
    vmax.vx v12, v4, zero
    vsetvli zero, zero, e8, m2, ta, ma
    vnclipu.wi v0, v8,  \shift
    vnclipu.wi v2, v12, \shift
    add t3, t2, t0
    vse8.v v0, (t0)
    add t0, t2, t3
    vse8.v v2, (t3)
    bnez t4, 20b
    bnez a5, 2b
    ret
4:
    slli t0, a5, 2
    vsetvli t1, t0, e16, m4, ta, ma
    vle16.v v0, (a2)
    sh1add a2, t1, a2
    vle16.v v4, (a3)
    sh1add a3, t1, a3
.ifc \type, mask
    vle8.v v16, (a6)
    add a6, t1, a6
    vzext.vf2 v8, v16
.endif
    \type v0, v4, v8
    vmax.vx v8, v0, zero
    vsetvli zero, zero, e8, m2, ta, ma
    vnclipu.wi v0, v8, \shift
    vsetvli t1, a5, e32, m2, ta, ma
    vsse32.v v0, (a0), a1
    ctz t0, t1
    sub a5, a5, t1
    sll t0, a1, t0
    add a0, t0, a0
    bnez a5, 4b
    ret
endfunc
.endm

bidir_fn avg,   5
bidir_fn w_avg, 0
bidir_fn mask,  0
