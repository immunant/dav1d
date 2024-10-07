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

.macro w_mask_fn type
function w_mask_\type\()_8bpc_rvv, export=1, ext="v,zba,zbb"

    li t3, 32
    li t2, 38*256+8
    li t1, 64
    csrw vxrm, zero
    bltu a4, t3, L(w_mask_\type\()_small)

.irp size, large, small,  # for multiplier optimization
L(w_mask_\type\()_\size\()):
3:
    # x will be in t5
    mv t5, a4
    mv t0, a0
2:
    # m8 cannot be used because of the vwmul
.ifc \size, large
    vsetvli t6, t5, e16, m4, ta, ma
.else
    vsetvli t6, t5, e16, m1, ta, ma
.endif

    vle16.v v0, (a2)
    sh1add a2, t6, a2
    vle16.v v4, (a3)
    sh1add a3, t6, a3

    # m = imin(38 + ((abs(tmp1[x] - tmp2[x]) + mask_rnd) >> mask_sh), 64);
    vsub.vv v8, v0, v4
    vsub.vv v12, v4, v0
    srli t3, t6, 1 # w >> 1 for mask[x >> 1]
    vmax.vv v8, v8, v12
    vadd.vx v8, v8, t2
    vsra.vi v8, v8, 8
    vmin.vx v8, v8, t1

    vrsub.vx v12, v8, t1
    vwmul.vv v16, v0, v8

    # separate m and n for each iteration, both are in v8
    # inserted here to prevent stall on v16
    vnsrl.wi v0, v8, 0 # holds m

    vwmacc.vv v16, v4, v12

    vnsrl.wi v4, v8, 16 # holds n

    vnclipu.wi v24, v16, 10
    vmax.vx v12, v24, zero
.ifc \size, large
    vsetvli zero, zero, e8, m2, ta, ma
.else
    vsetvli zero, zero, e8, mf2, ta, ma
.endif
    vnclipu.wi v16, v12, 0
    sub t4, a4, t5  # for mask[x >> 1], here to prevent stall on v16
    vse8.v v16, (t0)
    add t0, t0, t6

.if \type != 444
.ifc \size, large
    vsetvli zero, t3, e16, m2, ta, ma
.else
    vsetvli zero, t3, e16, mf2, ta, ma
.endif

    # get mask[x >> 1]
    srli t4, t4, 1

    # h & ss_ver
    andi t3, a5, 1
    # we have m and n in v0 and v4, add them together
    vadd.vv v0, v0, v4
    add t4, a6, t4

.if \type == 420
    # skip if !(h & ss_ver)
    beqz t3, 1f
    # mask[x >> 1] = (m + n + mask[x >> 1] + 2 - sign) >> 2;
    vle8.v v2, (t4)
    vsub.vx v0, v0, a7
.ifc \size, large
    vsetvli zero, zero, e8, m1, ta, ma
.else
    vsetvli zero, zero, e8, mf4, ta, ma
.endif
    vwadd.wv v4, v0, v2
    vnclip.wi v0, v4, 2
    j 5f
1:
    # mask[x >> 1] = m + n;
.ifc \size, large
    vsetvli zero, zero, e8, m1, ta, ma
.else
    vsetvli zero, zero, e8, mf4, ta, ma
.endif
    vnsrl.wi v0, v0, 0
.elseif \type == 422
    # mask[x >> 1] = (m + n + 1 - sign) >> 1;
    vsub.vx v0, v0, a7
.ifc \size, large
    vsetvli zero, zero, e8, m1, ta, ma
.else
    vsetvli zero, zero, e8, mf4, ta, ma
.endif
    vnclip.wi v0, v0, 1
.endif
.else
    sub t4, a4, t5

    # mask[x] = m;
.ifc \size, large
    vsetvli zero, zero, e8, m2, ta, ma
.else
    vsetvli zero, zero, e8, mf2, ta, ma
.endif
    vnsrl.wi v0, v8, 0
    add t4, a6, t4
.endif
5:
    # update x
    sub t5, t5, t6

    vse8.v v0, (t4)

    bnez t5, 2b

    # (h & ss_ver)
    andi t5, a5, 1

    # dst += PXSTRIDE(dst_stride);
    add a0, a0, a1

.if \type != 444
    srli t6, a4, 1 # w >> 1 for mask += w >> ss_hor;
.endif
    # h--
    addi a5, a5, -1
.if \type == 420
    # skip if !(h & ss_ver)
    beqz t5, 4f
.endif

    # mask += w >> ss_hor;
.if \type == 444
    add a6, a6, a4
.else
    add a6, a6, t6
.endif
4:
    bnez a5, 3b
    ret
.endr
endfunc
.endm

w_mask_fn 444
w_mask_fn 422
w_mask_fn 420
