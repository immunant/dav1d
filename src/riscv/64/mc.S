/******************************************************************************
 * Copyright © 2018, VideoLAN and dav1d authors
 * Copyright © 2024, Bogdan Gligorijevic
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


function warp_8x8_8bpc_rvv, export=1, ext="v"
    csrw vxrm, zero

    vsetivli zero, 8, e16, m1, ta, ma
    addi sp, sp, -2*15*8
    mv t5, sp
    li t0, 3
    mul t0, a3, t0
    sub a2, a2, t0
    addi a2, a2, -3

    li t0, 64
    addi a3, a3, -8
    li t1, 15
    la t2, dav1d_mc_warp_filter

    lh t6, (a4)
    lh t4, 2(a4)
    vid.v v30
    vwmul.vx v28, v30, t6
1:
    addi t1, t1, -1


    vsetvli zero, zero, e32, m2, ta, ma
    vadd.vx v4, v28, a5
    add a5, a5, t4
    vssra.vi v2, v4, 10
    vadd.vx v2, v2, t0
    vsll.vi v24, v2, 3
    vsetvli zero, zero, e8, mf2, ta, ma

    vluxseg8ei32.v v2, (t2), v24

    vsetvli zero, zero, e16, m1, ta, ma
.irp i, 2, 3, 4, 5, 6, 7, 8, 9
    vle8.v v10, (a2)
    addi a2, a2, 1

    vsext.vf2 v14, v\i
    vzext.vf2 v16, v10

.if \i == 2
    vwmulsu.vv v12, v14, v16
.else
    vwmaccsu.vv v12, v14, v16
.endif
.endr
    vnclip.wi v10, v12, 3

    add a2, a2, a3
    vse16.v v10, (t5)
    addi t5, t5, 16

    bnez t1, 1b

    mv t5, sp
    li t1, 8

    lh t6, 4(a4)
    lh t4, 6(a4)
    vwmul.vx v28, v30, t6
2:
    addi t1, t1, -1

    vsetvli zero, zero, e32, m2, ta, ma
    vadd.vx v4, v28, a6

    add a6, a6, t4
    vssra.vi v2, v4, 10
    vadd.vx v2, v2, t0
    vsll.vi v24, v2, 3
    vsetvli zero, zero, e8, mf2, ta, ma

    vluxseg8ei32.v v2, (t2), v24
    vsetvli zero, zero, e16, m1, ta, ma

.irp i, 2, 3, 4, 5, 6, 7, 8, 9
    vle16.v v10, (t5)
    addi t5, t5, 16

    vsext.vf2 v14, v\i

.if \i == 2
    vwmul.vv v12, v14, v10
.else
    vwmacc.vv v12, v14, v10
.endif
.endr
    addi t5, t5, -16*7
    vnclip.wi v10, v12, 11

    vmax.vx v10, v10, zero
    vsetvli zero, zero, e8, mf2, ta, ma

    vnclipu.wi v12, v10, 0

    vse8.v v12, (a0)
    add a0, a0, a1

    bnez t1, 2b

    addi sp, sp, 2*15*8

    ret
endfunc

function warp_8x8t_8bpc_rvv, export=1, ext="v,zba"
    csrw vxrm, zero

    vsetivli zero, 8, e16, m1, ta, ma
    addi sp, sp, -2*15*8
    mv t5, sp
    li t0, 3
    mul t0, a3, t0
    sub a2, a2, t0
    addi a2, a2, -3

    li t0, 64
    addi a3, a3, -8
    li t1, 15
    la t2, dav1d_mc_warp_filter

    lh t6, (a4)
    lh t4, 2(a4)
    vid.v v30
    vwmul.vx v28, v30, t6
1:
    addi t1, t1, -1


    vsetvli zero, zero, e32, m2, ta, ma
    vadd.vx v4, v28, a5
    add a5, a5, t4
    vssra.vi v2, v4, 10
    vadd.vx v2, v2, t0
    vsll.vi v24, v2, 3
    vsetvli zero, zero, e8, mf2, ta, ma

    vluxseg8ei32.v v2, (t2), v24

    vsetvli zero, zero, e16, m1, ta, ma
.irp i, 2, 3, 4, 5, 6, 7, 8, 9
    vle8.v v10, (a2)
    addi a2, a2, 1

    vsext.vf2 v14, v\i
    vzext.vf2 v16, v10

.if \i == 2
    vwmulsu.vv v12, v14, v16
.else
    vwmaccsu.vv v12, v14, v16
.endif
.endr
    vnclip.wi v10, v12, 3

    add a2, a2, a3
    vse16.v v10, (t5)
    addi t5, t5, 16

    bnez t1, 1b

    mv t5, sp
    li t1, 8

    lh t6, 4(a4)
    lh t4, 6(a4)
    vwmul.vx v28, v30, t6
2:
    addi t1, t1, -1

    vsetvli zero, zero, e32, m2, ta, ma
    vadd.vx v4, v28, a6
    add a6, a6, t4
    vssra.vi v2, v4, 10
    vadd.vx v2, v2, t0
    vsll.vi v24, v2, 3
    vsetvli zero, zero, e8, mf2, ta, ma

    vluxseg8ei32.v v2, (t2), v24
    vsetvli zero, zero, e16, m1, ta, ma

.irp i, 2, 3, 4, 5, 6, 7, 8, 9
    vle16.v v10, (t5)
    addi t5, t5, 16

    vsext.vf2 v14, v\i

.if \i == 2
    vwmul.vv v12, v14, v10
.else
    vwmacc.vv v12, v14, v10
.endif

.endr
    addi t5, t5, -16*7
    vnclip.wi v10, v12, 7

    vse16.v v10, (a0)
    sh1add a0, a1, a0

    bnez t1, 2b

    addi sp, sp, 2*15*8

    ret
endfunc
