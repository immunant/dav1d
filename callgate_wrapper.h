#ifndef __ASSEMBLER__

#include <ia2.h>
#include <scrub_registers.h>

#define IA2_TYPE__ZTSPFiP11DemuxerPrivP9Dav1dDataE int (*)(void *, struct DemuxerPriv *, struct Dav1dData *)
#define IA2_TYPE__ZTSPFiP11DemuxerPrivPKcPjS3_S3_E int (*)(void *, struct DemuxerPriv *, const char *, unsigned int *, unsigned int *, unsigned int *)
#define IA2_TYPE__ZTSPFiP11DemuxerPrivmE int (*)(void *, struct DemuxerPriv *, unsigned long)
#define IA2_TYPE__ZTSPFiP12Dav1dPicturePvE int (*)(void *, struct Dav1dPicture *, void *)
#define IA2_TYPE__ZTSPFiP16Dav1dTaskContext9BlockSizePK8Av1BlockE int (*)(void *, struct Dav1dTaskContext *, enum BlockSize, const struct Av1Block *)
#define IA2_TYPE__ZTSPFiP9MuxerPrivP12Dav1dPictureE int (*)(void *, struct MuxerPriv *, struct Dav1dPicture *)
#define IA2_TYPE__ZTSPFiP9MuxerPrivPKcE int (*)(void *, struct MuxerPriv *, const char *)
#define IA2_TYPE__ZTSPFiP9MuxerPrivPKcPK22Dav1dPictureParametersPKjE int (*)(void *, struct MuxerPriv *, const char *, const struct Dav1dPictureParameters *, const unsigned int *)
#define IA2_TYPE__ZTSPFiPKhE int (*)(void *, const unsigned char *)
#define IA2_TYPE__ZTSPFjP11MsacContextPtmE unsigned int (*)(void *, struct MsacContext *, unsigned short *, unsigned long)
#define IA2_TYPE__ZTSPFmPK14pthread_attr_tE unsigned long (*)(void *, const union pthread_attr_t *)
#define IA2_TYPE__ZTSPFvP11DemuxerPrivE void (*)(void *, struct DemuxerPriv *)
#define IA2_TYPE__ZTSPFvP12Dav1dPicturePvE void (*)(void *, struct Dav1dPicture *, void *)
#define IA2_TYPE__ZTSPFvP16Dav1dTaskContext9BlockSize9EdgeFlagsPK8Av1BlockE void (*)(void *, struct Dav1dTaskContext *, enum BlockSize, enum EdgeFlags, const struct Av1Block *)
#define IA2_TYPE__ZTSPFvP16Dav1dTaskContext9BlockSizePK8Av1BlockE void (*)(void *, struct Dav1dTaskContext *, enum BlockSize, const struct Av1Block *)
#define IA2_TYPE__ZTSPFvP16Dav1dTaskContextE void (*)(void *, struct Dav1dTaskContext *)
#define IA2_TYPE__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiE void (*)(void *, struct Dav1dTaskContext *, struct Av1Block *, int, int, int)
#define IA2_TYPE__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiiE void (*)(void *, struct Dav1dTaskContext *, struct Av1Block *, int, int, int, int)
#define IA2_TYPE__ZTSPFvP16Dav1dTaskContextiE void (*)(void *, struct Dav1dTaskContext *, int)
#define IA2_TYPE__ZTSPFvP16Dav1dTaskContextiiiiE void (*)(void *, struct Dav1dTaskContext *, int, int, int, int)
#define IA2_TYPE__ZTSPFvP17Dav1dFrameContextiE void (*)(void *, struct Dav1dFrameContext *, int)
#define IA2_TYPE__ZTSPFvP21refmvs_temporal_blocklPKP12refmvs_blockPKhiiiiE void (*)(void *, struct refmvs_temporal_block *, long, struct refmvs_block *const *, const unsigned char *, int, int, int, int)
#define IA2_TYPE__ZTSPFvP9MuxerPrivE void (*)(void *, struct MuxerPriv *)
#define IA2_TYPE__ZTSPFvPK12refmvs_frameiiiiiE void (*)(void *, const struct refmvs_frame *, int, int, int, int, int)
#define IA2_TYPE__ZTSPFvPKhPvE void (*)(void *, const unsigned char *, void *)
#define IA2_TYPE__ZTSPFvPP12refmvs_blockPKS_iiiE void (*)(void *, struct refmvs_block **, const struct refmvs_block *, int, int, int)
#define IA2_TYPE__ZTSPFvPhPKhiiiiE void (*)(void *, unsigned char *, const unsigned char *, int, int, int, int)
#define IA2_TYPE__ZTSPFvPvPKcP13__va_list_tagE void (*)(void *, void *, const char *, va_list)
#define IA2_TYPE__ZTSPFvPviE void (*)(void *, void *, int)
extern char __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivP9Dav1dDataE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivPKcPjS3_S3_E_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivmE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFiP12Dav1dPicturePvE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFiP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFiP9MuxerPrivP12Dav1dPictureE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcPK22Dav1dPictureParametersPKjE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFiPKhE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFjP11MsacContextPtmE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFmPK14pthread_attr_tE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFvP11DemuxerPrivE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFvP12Dav1dPicturePvE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSize9EdgeFlagsPK8Av1BlockE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiiE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiiiiE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFvP17Dav1dFrameContextiE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFvP21refmvs_temporal_blocklPKP12refmvs_blockPKhiiiiE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFvP9MuxerPrivE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFvPK12refmvs_frameiiiiiE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFvPKhPvE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFvPP12refmvs_blockPKS_iiiE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFvPhPKhiiiiE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFvPvPKcP13__va_list_tagE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFvPviE_pkey_1;
extern char __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivP9Dav1dDataE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivPKcPjS3_S3_E_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFiP11DemuxerPrivmE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFiP12Dav1dPicturePvE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFiP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFiP9MuxerPrivP12Dav1dPictureE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFiP9MuxerPrivPKcPK22Dav1dPictureParametersPKjE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFiPKhE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFjP11MsacContextPtmE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFmPK14pthread_attr_tE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFvP11DemuxerPrivE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFvP12Dav1dPicturePvE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSize9EdgeFlagsPK8Av1BlockE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContext9BlockSizePK8Av1BlockE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextP8Av1BlockiiiiE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFvP16Dav1dTaskContextiiiiE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFvP17Dav1dFrameContextiE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFvP21refmvs_temporal_blocklPKP12refmvs_blockPKhiiiiE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFvP9MuxerPrivE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFvPK12refmvs_frameiiiiiE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFvPKhPvE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFvPP12refmvs_blockPKS_iiiE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFvPhPKhiiiiE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFvPvPKcP13__va_list_tagE_pkey_2;
extern char __ia2_indirect_callgate__ZTSPFvPviE_pkey_2;
struct IA2_fnptr__ZTSFiP11DemuxerPrivP9Dav1dDataE { char *ptr; };
struct IA2_fnptr__ZTSFiP11DemuxerPrivPKcPjS3_S3_E { char *ptr; };
struct IA2_fnptr__ZTSFiP11DemuxerPrivmE { char *ptr; };
struct IA2_fnptr__ZTSFiP12Dav1dPicturePvE { char *ptr; };
struct IA2_fnptr__ZTSFiP16Dav1dTaskContext9BlockSizePK8Av1BlockE { char *ptr; };
struct IA2_fnptr__ZTSFiP9MuxerPrivP12Dav1dPictureE { char *ptr; };
struct IA2_fnptr__ZTSFiP9MuxerPrivPKcE { char *ptr; };
struct IA2_fnptr__ZTSFiP9MuxerPrivPKcPK22Dav1dPictureParametersPKjE { char *ptr; };
struct IA2_fnptr__ZTSFiPKhE { char *ptr; };
struct IA2_fnptr__ZTSFiPKhlPjE { char *ptr; };
struct IA2_fnptr__ZTSFjP11MsacContextPtmE { char *ptr; };
struct IA2_fnptr__ZTSFmPK14pthread_attr_tE { char *ptr; };
struct IA2_fnptr__ZTSFvP11DemuxerPrivE { char *ptr; };
struct IA2_fnptr__ZTSFvP12Dav1dPicturePvE { char *ptr; };
struct IA2_fnptr__ZTSFvP16Dav1dTaskContext9BlockSize9EdgeFlagsPK8Av1BlockE { char *ptr; };
struct IA2_fnptr__ZTSFvP16Dav1dTaskContext9BlockSizePK8Av1BlockE { char *ptr; };
struct IA2_fnptr__ZTSFvP16Dav1dTaskContextE { char *ptr; };
struct IA2_fnptr__ZTSFvP16Dav1dTaskContextP8Av1BlockiiiE { char *ptr; };
struct IA2_fnptr__ZTSFvP16Dav1dTaskContextP8Av1BlockiiiiE { char *ptr; };
struct IA2_fnptr__ZTSFvP16Dav1dTaskContextiE { char *ptr; };
struct IA2_fnptr__ZTSFvP16Dav1dTaskContextiiiiE { char *ptr; };
struct IA2_fnptr__ZTSFvP17Dav1dFrameContextiE { char *ptr; };
struct IA2_fnptr__ZTSFvP21refmvs_temporal_blocklPKP12refmvs_blockPKhiiiiE { char *ptr; };
struct IA2_fnptr__ZTSFvP9MuxerPrivE { char *ptr; };
struct IA2_fnptr__ZTSFvPA82_aPA82_KaPK18Dav1dFilmGrainDatalE { char *ptr; };
struct IA2_fnptr__ZTSFvPA82_aPK18Dav1dFilmGrainDataE { char *ptr; };
struct IA2_fnptr__ZTSFvPK12refmvs_frameiiiiiE { char *ptr; };
struct IA2_fnptr__ZTSFvPKhPvE { char *ptr; };
struct IA2_fnptr__ZTSFvPP12refmvs_blockPKS_iiiE { char *ptr; };
struct IA2_fnptr__ZTSFvPhPKhiiiiE { char *ptr; };
struct IA2_fnptr__ZTSFvPhPKhlPK18Dav1dFilmGrainDatamS1_PA82_KaiiE { char *ptr; };
struct IA2_fnptr__ZTSFvPhPKhlPK18Dav1dFilmGrainDatamS1_PA82_KaiiS1_liiE { char *ptr; };
struct IA2_fnptr__ZTSFvPhlPKhS1_iiE { char *ptr; };
struct IA2_fnptr__ZTSFvPhlPKhiiE { char *ptr; };
struct IA2_fnptr__ZTSFvPhlPKhiiPKsiE { char *ptr; };
struct IA2_fnptr__ZTSFvPhlPKhiiS1_E { char *ptr; };
struct IA2_fnptr__ZTSFvPhlPKhiiiiiE { char *ptr; };
struct IA2_fnptr__ZTSFvPhlPKhlPKsiiE { char *ptr; };
struct IA2_fnptr__ZTSFvPhlPKhliiiiE { char *ptr; };
struct IA2_fnptr__ZTSFvPhlPKhliiiiiE { char *ptr; };
struct IA2_fnptr__ZTSFvPhlPKhliiiiiiE { char *ptr; };
struct IA2_fnptr__ZTSFvPhlPKjPA4_KhlPK12Av1FilterLUTiE { char *ptr; };
struct IA2_fnptr__ZTSFvPhlPKsS1_iiE { char *ptr; };
struct IA2_fnptr__ZTSFvPhlPKsS1_iiPKhE { char *ptr; };
struct IA2_fnptr__ZTSFvPhlPKsS1_iiS_iE { char *ptr; };
struct IA2_fnptr__ZTSFvPhlPKsS1_iiiE { char *ptr; };
struct IA2_fnptr__ZTSFvPhlPKvPKhS3_iiii13CdefEdgeFlagsE { char *ptr; };
struct IA2_fnptr__ZTSFvPhlPKvPKhiiPK21LooprestorationParams11LrEdgeFlagsE { char *ptr; };
struct IA2_fnptr__ZTSFvPhlPviE { char *ptr; };
struct IA2_fnptr__ZTSFvPiliiE { char *ptr; };
struct IA2_fnptr__ZTSFvPsPKhliiiiE { char *ptr; };
struct IA2_fnptr__ZTSFvPsPKhliiiiiiE { char *ptr; };
struct IA2_fnptr__ZTSFvPslPKhlPKsiiE { char *ptr; };
struct IA2_fnptr__ZTSFvPvPKcP13__va_list_tagE { char *ptr; };
struct IA2_fnptr__ZTSFvPviE { char *ptr; };
struct IA2_fnptr__ZTSFvllllllPhlPKhlE { char *ptr; };
extern struct IA2_fnptr__ZTSFvP16Dav1dTaskContextE __ia2_dav1d_backup_ipred_edge_16bpc;
asm(
  ".set __ia2_dav1d_backup_ipred_edge_16bpc, __real_dav1d_backup_ipred_edge_16bpc\n"
);
extern struct IA2_fnptr__ZTSFvP16Dav1dTaskContextE __ia2_dav1d_backup_ipred_edge_8bpc;
asm(
  ".set __ia2_dav1d_backup_ipred_edge_8bpc, __real_dav1d_backup_ipred_edge_8bpc\n"
);
extern struct IA2_fnptr__ZTSFvP16Dav1dTaskContextiiiiE __ia2_dav1d_copy_pal_block_uv_16bpc;
asm(
  ".set __ia2_dav1d_copy_pal_block_uv_16bpc, __real_dav1d_copy_pal_block_uv_16bpc\n"
);
extern struct IA2_fnptr__ZTSFvP16Dav1dTaskContextiiiiE __ia2_dav1d_copy_pal_block_uv_8bpc;
asm(
  ".set __ia2_dav1d_copy_pal_block_uv_8bpc, __real_dav1d_copy_pal_block_uv_8bpc\n"
);
extern struct IA2_fnptr__ZTSFvP16Dav1dTaskContextiiiiE __ia2_dav1d_copy_pal_block_y_16bpc;
asm(
  ".set __ia2_dav1d_copy_pal_block_y_16bpc, __real_dav1d_copy_pal_block_y_16bpc\n"
);
extern struct IA2_fnptr__ZTSFvP16Dav1dTaskContextiiiiE __ia2_dav1d_copy_pal_block_y_8bpc;
asm(
  ".set __ia2_dav1d_copy_pal_block_y_8bpc, __real_dav1d_copy_pal_block_y_8bpc\n"
);
extern struct IA2_fnptr__ZTSFiP12Dav1dPicturePvE __ia2_dav1d_default_picture_alloc;
extern struct IA2_fnptr__ZTSFvP12Dav1dPicturePvE __ia2_dav1d_default_picture_release;
extern struct IA2_fnptr__ZTSFvP17Dav1dFrameContextiE __ia2_dav1d_filter_sbrow_16bpc;
asm(
  ".set __ia2_dav1d_filter_sbrow_16bpc, __real_dav1d_filter_sbrow_16bpc\n"
);
extern struct IA2_fnptr__ZTSFvP17Dav1dFrameContextiE __ia2_dav1d_filter_sbrow_8bpc;
asm(
  ".set __ia2_dav1d_filter_sbrow_8bpc, __real_dav1d_filter_sbrow_8bpc\n"
);
extern struct IA2_fnptr__ZTSFvP16Dav1dTaskContextiE __ia2_dav1d_filter_sbrow_cdef_16bpc;
asm(
  ".set __ia2_dav1d_filter_sbrow_cdef_16bpc, __real_dav1d_filter_sbrow_cdef_16bpc\n"
);
extern struct IA2_fnptr__ZTSFvP16Dav1dTaskContextiE __ia2_dav1d_filter_sbrow_cdef_8bpc;
asm(
  ".set __ia2_dav1d_filter_sbrow_cdef_8bpc, __real_dav1d_filter_sbrow_cdef_8bpc\n"
);
extern struct IA2_fnptr__ZTSFvP17Dav1dFrameContextiE __ia2_dav1d_filter_sbrow_deblock_cols_16bpc;
asm(
  ".set __ia2_dav1d_filter_sbrow_deblock_cols_16bpc, __real_dav1d_filter_sbrow_deblock_cols_16bpc\n"
);
extern struct IA2_fnptr__ZTSFvP17Dav1dFrameContextiE __ia2_dav1d_filter_sbrow_deblock_cols_8bpc;
asm(
  ".set __ia2_dav1d_filter_sbrow_deblock_cols_8bpc, __real_dav1d_filter_sbrow_deblock_cols_8bpc\n"
);
extern struct IA2_fnptr__ZTSFvP17Dav1dFrameContextiE __ia2_dav1d_filter_sbrow_deblock_rows_16bpc;
asm(
  ".set __ia2_dav1d_filter_sbrow_deblock_rows_16bpc, __real_dav1d_filter_sbrow_deblock_rows_16bpc\n"
);
extern struct IA2_fnptr__ZTSFvP17Dav1dFrameContextiE __ia2_dav1d_filter_sbrow_deblock_rows_8bpc;
asm(
  ".set __ia2_dav1d_filter_sbrow_deblock_rows_8bpc, __real_dav1d_filter_sbrow_deblock_rows_8bpc\n"
);
extern struct IA2_fnptr__ZTSFvP17Dav1dFrameContextiE __ia2_dav1d_filter_sbrow_lr_16bpc;
asm(
  ".set __ia2_dav1d_filter_sbrow_lr_16bpc, __real_dav1d_filter_sbrow_lr_16bpc\n"
);
extern struct IA2_fnptr__ZTSFvP17Dav1dFrameContextiE __ia2_dav1d_filter_sbrow_lr_8bpc;
asm(
  ".set __ia2_dav1d_filter_sbrow_lr_8bpc, __real_dav1d_filter_sbrow_lr_8bpc\n"
);
extern struct IA2_fnptr__ZTSFvP17Dav1dFrameContextiE __ia2_dav1d_filter_sbrow_resize_16bpc;
asm(
  ".set __ia2_dav1d_filter_sbrow_resize_16bpc, __real_dav1d_filter_sbrow_resize_16bpc\n"
);
extern struct IA2_fnptr__ZTSFvP17Dav1dFrameContextiE __ia2_dav1d_filter_sbrow_resize_8bpc;
asm(
  ".set __ia2_dav1d_filter_sbrow_resize_8bpc, __real_dav1d_filter_sbrow_resize_8bpc\n"
);
extern struct IA2_fnptr__ZTSFvPK12refmvs_frameiiiiiE __ia2_dav1d_load_tmvs_sse4;
asm(
  ".set __ia2_dav1d_load_tmvs_sse4, __real_dav1d_load_tmvs_sse4\n"
);
extern struct IA2_fnptr__ZTSFvPvPKcP13__va_list_tagE __ia2_dav1d_log_default_callback;
extern struct IA2_fnptr__ZTSFjP11MsacContextPtmE __ia2_dav1d_msac_decode_symbol_adapt16_avx2;
asm(
  ".set __ia2_dav1d_msac_decode_symbol_adapt16_avx2, __real_dav1d_msac_decode_symbol_adapt16_avx2\n"
);
extern struct IA2_fnptr__ZTSFjP11MsacContextPtmE __ia2_dav1d_msac_decode_symbol_adapt16_sse2;
asm(
  ".set __ia2_dav1d_msac_decode_symbol_adapt16_sse2, __real_dav1d_msac_decode_symbol_adapt16_sse2\n"
);
extern struct IA2_fnptr__ZTSFvPhPKhiiiiE __ia2_dav1d_pal_idx_finish_avx2;
asm(
  ".set __ia2_dav1d_pal_idx_finish_avx2, __real_dav1d_pal_idx_finish_avx2\n"
);
extern struct IA2_fnptr__ZTSFvPhPKhiiiiE __ia2_dav1d_pal_idx_finish_avx512icl;
asm(
  ".set __ia2_dav1d_pal_idx_finish_avx512icl, __real_dav1d_pal_idx_finish_avx512icl\n"
);
extern struct IA2_fnptr__ZTSFvPhPKhiiiiE __ia2_dav1d_pal_idx_finish_ssse3;
asm(
  ".set __ia2_dav1d_pal_idx_finish_ssse3, __real_dav1d_pal_idx_finish_ssse3\n"
);
extern struct IA2_fnptr__ZTSFvPKhPvE __ia2_dav1d_picture_free_itut_t35;
extern struct IA2_fnptr__ZTSFvP16Dav1dTaskContext9BlockSizePK8Av1BlockE __ia2_dav1d_read_coef_blocks_16bpc;
asm(
  ".set __ia2_dav1d_read_coef_blocks_16bpc, __real_dav1d_read_coef_blocks_16bpc\n"
);
extern struct IA2_fnptr__ZTSFvP16Dav1dTaskContext9BlockSizePK8Av1BlockE __ia2_dav1d_read_coef_blocks_8bpc;
asm(
  ".set __ia2_dav1d_read_coef_blocks_8bpc, __real_dav1d_read_coef_blocks_8bpc\n"
);
extern struct IA2_fnptr__ZTSFvP16Dav1dTaskContextP8Av1BlockiiiiE __ia2_dav1d_read_pal_plane_16bpc;
asm(
  ".set __ia2_dav1d_read_pal_plane_16bpc, __real_dav1d_read_pal_plane_16bpc\n"
);
extern struct IA2_fnptr__ZTSFvP16Dav1dTaskContextP8Av1BlockiiiiE __ia2_dav1d_read_pal_plane_8bpc;
asm(
  ".set __ia2_dav1d_read_pal_plane_8bpc, __real_dav1d_read_pal_plane_8bpc\n"
);
extern struct IA2_fnptr__ZTSFvP16Dav1dTaskContextP8Av1BlockiiiE __ia2_dav1d_read_pal_uv_16bpc;
asm(
  ".set __ia2_dav1d_read_pal_uv_16bpc, __real_dav1d_read_pal_uv_16bpc\n"
);
extern struct IA2_fnptr__ZTSFvP16Dav1dTaskContextP8Av1BlockiiiE __ia2_dav1d_read_pal_uv_8bpc;
asm(
  ".set __ia2_dav1d_read_pal_uv_8bpc, __real_dav1d_read_pal_uv_8bpc\n"
);
extern struct IA2_fnptr__ZTSFiP16Dav1dTaskContext9BlockSizePK8Av1BlockE __ia2_dav1d_recon_b_inter_16bpc;
asm(
  ".set __ia2_dav1d_recon_b_inter_16bpc, __real_dav1d_recon_b_inter_16bpc\n"
);
extern struct IA2_fnptr__ZTSFiP16Dav1dTaskContext9BlockSizePK8Av1BlockE __ia2_dav1d_recon_b_inter_8bpc;
asm(
  ".set __ia2_dav1d_recon_b_inter_8bpc, __real_dav1d_recon_b_inter_8bpc\n"
);
extern struct IA2_fnptr__ZTSFvP16Dav1dTaskContext9BlockSize9EdgeFlagsPK8Av1BlockE __ia2_dav1d_recon_b_intra_16bpc;
asm(
  ".set __ia2_dav1d_recon_b_intra_16bpc, __real_dav1d_recon_b_intra_16bpc\n"
);
extern struct IA2_fnptr__ZTSFvP16Dav1dTaskContext9BlockSize9EdgeFlagsPK8Av1BlockE __ia2_dav1d_recon_b_intra_8bpc;
asm(
  ".set __ia2_dav1d_recon_b_intra_8bpc, __real_dav1d_recon_b_intra_8bpc\n"
);
extern struct IA2_fnptr__ZTSFvP21refmvs_temporal_blocklPKP12refmvs_blockPKhiiiiE __ia2_dav1d_save_tmvs_avx2;
asm(
  ".set __ia2_dav1d_save_tmvs_avx2, __real_dav1d_save_tmvs_avx2\n"
);
extern struct IA2_fnptr__ZTSFvP21refmvs_temporal_blocklPKP12refmvs_blockPKhiiiiE __ia2_dav1d_save_tmvs_avx512icl;
asm(
  ".set __ia2_dav1d_save_tmvs_avx512icl, __real_dav1d_save_tmvs_avx512icl\n"
);
extern struct IA2_fnptr__ZTSFvP21refmvs_temporal_blocklPKP12refmvs_blockPKhiiiiE __ia2_dav1d_save_tmvs_ssse3;
asm(
  ".set __ia2_dav1d_save_tmvs_ssse3, __real_dav1d_save_tmvs_ssse3\n"
);
extern struct IA2_fnptr__ZTSFvPP12refmvs_blockPKS_iiiE __ia2_dav1d_splat_mv_avx2;
asm(
  ".set __ia2_dav1d_splat_mv_avx2, __real_dav1d_splat_mv_avx2\n"
);
extern struct IA2_fnptr__ZTSFvPP12refmvs_blockPKS_iiiE __ia2_dav1d_splat_mv_avx512icl;
asm(
  ".set __ia2_dav1d_splat_mv_avx512icl, __real_dav1d_splat_mv_avx512icl\n"
);
extern struct IA2_fnptr__ZTSFvPP12refmvs_blockPKS_iiiE __ia2_dav1d_splat_mv_sse2;
asm(
  ".set __ia2_dav1d_splat_mv_sse2, __real_dav1d_splat_mv_sse2\n"
);
extern struct IA2_fnptr__ZTSFPvS_E __ia2_dav1d_worker_task;
extern struct IA2_fnptr__ZTSFvPviE __ia2_memset_w1;
extern struct IA2_fnptr__ZTSFvPviE __ia2_memset_w16;
extern struct IA2_fnptr__ZTSFvPviE __ia2_memset_w2;
extern struct IA2_fnptr__ZTSFvPviE __ia2_memset_w32;
extern struct IA2_fnptr__ZTSFvPviE __ia2_memset_w4;
extern struct IA2_fnptr__ZTSFvPviE __ia2_memset_w8;
extern struct IA2_fnptr__ZTSFvPiliiE __ia2_inv_adst16_1d_c;
extern struct IA2_fnptr__ZTSFvPiliiE __ia2_inv_adst4_1d_c;
extern struct IA2_fnptr__ZTSFvPiliiE __ia2_inv_adst8_1d_c;
extern struct IA2_fnptr__ZTSFvPiliiE __ia2_inv_dct16_1d_c;
extern struct IA2_fnptr__ZTSFvPiliiE __ia2_inv_dct32_1d_c;
extern struct IA2_fnptr__ZTSFvPiliiE __ia2_inv_dct4_1d_c;
extern struct IA2_fnptr__ZTSFvPiliiE __ia2_inv_dct64_1d_c;
extern struct IA2_fnptr__ZTSFvPiliiE __ia2_inv_dct8_1d_c;
extern struct IA2_fnptr__ZTSFvPiliiE __ia2_inv_flipadst16_1d_c;
extern struct IA2_fnptr__ZTSFvPiliiE __ia2_inv_flipadst4_1d_c;
extern struct IA2_fnptr__ZTSFvPiliiE __ia2_inv_flipadst8_1d_c;
extern struct IA2_fnptr__ZTSFvPiliiE __ia2_inv_identity16_1d_c;
extern struct IA2_fnptr__ZTSFvPiliiE __ia2_inv_identity32_1d_c;
extern struct IA2_fnptr__ZTSFvPiliiE __ia2_inv_identity4_1d_c;
extern struct IA2_fnptr__ZTSFvPiliiE __ia2_inv_identity8_1d_c;
extern struct IA2_fnptr__ZTSFvvE __ia2_init_internal;
extern struct IA2_fnptr__ZTSFvPhPKhiiiiE __ia2_pal_idx_finish_c;
extern struct IA2_fnptr__ZTSFvPKhPvE __ia2_free_buffer;
extern struct IA2_fnptr__ZTSFvPKhPvE __ia2_default_free_callback;
extern struct IA2_fnptr__ZTSFvPKhPvE __ia2_pool_free_callback;
extern struct IA2_fnptr__ZTSFvPK12refmvs_frameiiiiiE __ia2_load_tmvs_c;
extern struct IA2_fnptr__ZTSFvP21refmvs_temporal_blocklPKP12refmvs_blockPKhiiiiE __ia2_save_tmvs_c;
extern struct IA2_fnptr__ZTSFvPP12refmvs_blockPKS_iiiE __ia2_splat_mv_c;
extern struct IA2_fnptr__ZTSFvvE __ia2_init_internal;
extern struct IA2_fnptr__ZTSFiP12Dav1dPicturePvE __ia2_picture_alloc;
extern struct IA2_fnptr__ZTSFvP12Dav1dPicturePvE __ia2_picture_release;
extern struct IA2_fnptr__ZTSFviE __ia2_signal_handler;
extern struct IA2_fnptr__ZTSFvP11DemuxerPrivE __ia2_annexb_close;
extern struct IA2_fnptr__ZTSFiP11DemuxerPrivPKcPjS3_S3_E __ia2_annexb_open;
extern struct IA2_fnptr__ZTSFiPKhE __ia2_annexb_probe;
extern struct IA2_fnptr__ZTSFiP11DemuxerPrivP9Dav1dDataE __ia2_annexb_read;
extern struct IA2_fnptr__ZTSFvP11DemuxerPrivE __ia2_ivf_close;
extern struct IA2_fnptr__ZTSFiP11DemuxerPrivPKcPjS3_S3_E __ia2_ivf_open;
extern struct IA2_fnptr__ZTSFiPKhE __ia2_ivf_probe;
extern struct IA2_fnptr__ZTSFiP11DemuxerPrivP9Dav1dDataE __ia2_ivf_read;
extern struct IA2_fnptr__ZTSFiP11DemuxerPrivmE __ia2_ivf_seek;
extern struct IA2_fnptr__ZTSFvP11DemuxerPrivE __ia2_section5_close;
extern struct IA2_fnptr__ZTSFiP11DemuxerPrivPKcPjS3_S3_E __ia2_section5_open;
extern struct IA2_fnptr__ZTSFiPKhE __ia2_section5_probe;
extern struct IA2_fnptr__ZTSFiP11DemuxerPrivP9Dav1dDataE __ia2_section5_read;
extern struct IA2_fnptr__ZTSFvP9MuxerPrivE __ia2_md5_close;
extern struct IA2_fnptr__ZTSFiP9MuxerPrivPKcPK22Dav1dPictureParametersPKjE __ia2_md5_open;
extern struct IA2_fnptr__ZTSFiP9MuxerPrivPKcE __ia2_md5_verify;
extern struct IA2_fnptr__ZTSFiP9MuxerPrivP12Dav1dPictureE __ia2_md5_write;
extern struct IA2_fnptr__ZTSFiP9MuxerPrivP12Dav1dPictureE __ia2_null_write;
extern struct IA2_fnptr__ZTSFvP9MuxerPrivE __ia2_y4m2_close;
extern struct IA2_fnptr__ZTSFiP9MuxerPrivPKcPK22Dav1dPictureParametersPKjE __ia2_y4m2_open;
extern struct IA2_fnptr__ZTSFiP9MuxerPrivP12Dav1dPictureE __ia2_y4m2_write;
extern struct IA2_fnptr__ZTSFvP9MuxerPrivE __ia2_yuv_close;
extern struct IA2_fnptr__ZTSFiP9MuxerPrivPKcPK22Dav1dPictureParametersPKjE __ia2_yuv_open;
extern struct IA2_fnptr__ZTSFiP9MuxerPrivP12Dav1dPictureE __ia2_yuv_write;
asm("__libia2_abort:\n"
    "ud2");
#define IA2_DEFINE_WRAPPER_dav1d_default_picture_alloc \
asm(\
    /* Wrapper for dav1d_default_picture_alloc(int, int) -> int: */ \
    ".text\n" \
    ".global __ia2_dav1d_default_picture_alloc\n" \
    ".type __ia2_dav1d_default_picture_alloc, @function\n" \
    "__ia2_dav1d_default_picture_alloc:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call dav1d_default_picture_alloc\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_dav1d_default_picture_alloc, .-__ia2_dav1d_default_picture_alloc\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_dav1d_default_picture_release \
asm(\
    /* Wrapper for dav1d_default_picture_release(int, int): */ \
    ".text\n" \
    ".global __ia2_dav1d_default_picture_release\n" \
    ".type __ia2_dav1d_default_picture_release, @function\n" \
    "__ia2_dav1d_default_picture_release:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call dav1d_default_picture_release\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_dav1d_default_picture_release, .-__ia2_dav1d_default_picture_release\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_dav1d_log_default_callback \
asm(\
    /* Wrapper for dav1d_log_default_callback(int, int, int): */ \
    ".text\n" \
    ".global __ia2_dav1d_log_default_callback\n" \
    ".type __ia2_dav1d_log_default_callback, @function\n" \
    "__ia2_dav1d_log_default_callback:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call dav1d_log_default_callback\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_dav1d_log_default_callback, .-__ia2_dav1d_log_default_callback\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_dav1d_picture_free_itut_t35 \
asm(\
    /* Wrapper for dav1d_picture_free_itut_t35(int, int): */ \
    ".text\n" \
    ".global __ia2_dav1d_picture_free_itut_t35\n" \
    ".type __ia2_dav1d_picture_free_itut_t35, @function\n" \
    "__ia2_dav1d_picture_free_itut_t35:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call dav1d_picture_free_itut_t35\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_dav1d_picture_free_itut_t35, .-__ia2_dav1d_picture_free_itut_t35\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_dav1d_worker_task \
asm(\
    /* Wrapper for dav1d_worker_task(int) -> int: */ \
    ".text\n" \
    ".global __ia2_dav1d_worker_task\n" \
    ".type __ia2_dav1d_worker_task, @function\n" \
    "__ia2_dav1d_worker_task:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call dav1d_worker_task\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_dav1d_worker_task, .-__ia2_dav1d_worker_task\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_memset_w1 \
asm(\
    /* Wrapper for memset_w1(int, int): */ \
    ".text\n" \
    ".local __ia2_memset_w1\n" \
    ".type __ia2_memset_w1, @function\n" \
    "__ia2_memset_w1:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call memset_w1\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_memset_w1, .-__ia2_memset_w1\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_memset_w16 \
asm(\
    /* Wrapper for memset_w16(int, int): */ \
    ".text\n" \
    ".local __ia2_memset_w16\n" \
    ".type __ia2_memset_w16, @function\n" \
    "__ia2_memset_w16:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call memset_w16\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_memset_w16, .-__ia2_memset_w16\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_memset_w2 \
asm(\
    /* Wrapper for memset_w2(int, int): */ \
    ".text\n" \
    ".local __ia2_memset_w2\n" \
    ".type __ia2_memset_w2, @function\n" \
    "__ia2_memset_w2:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call memset_w2\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_memset_w2, .-__ia2_memset_w2\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_memset_w32 \
asm(\
    /* Wrapper for memset_w32(int, int): */ \
    ".text\n" \
    ".local __ia2_memset_w32\n" \
    ".type __ia2_memset_w32, @function\n" \
    "__ia2_memset_w32:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call memset_w32\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_memset_w32, .-__ia2_memset_w32\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_memset_w4 \
asm(\
    /* Wrapper for memset_w4(int, int): */ \
    ".text\n" \
    ".local __ia2_memset_w4\n" \
    ".type __ia2_memset_w4, @function\n" \
    "__ia2_memset_w4:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call memset_w4\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_memset_w4, .-__ia2_memset_w4\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_memset_w8 \
asm(\
    /* Wrapper for memset_w8(int, int): */ \
    ".text\n" \
    ".local __ia2_memset_w8\n" \
    ".type __ia2_memset_w8, @function\n" \
    "__ia2_memset_w8:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call memset_w8\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_memset_w8, .-__ia2_memset_w8\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_inv_adst16_1d_c \
asm(\
    /* Wrapper for inv_adst16_1d_c(int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_inv_adst16_1d_c\n" \
    ".type __ia2_inv_adst16_1d_c, @function\n" \
    "__ia2_inv_adst16_1d_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call inv_adst16_1d_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_inv_adst16_1d_c, .-__ia2_inv_adst16_1d_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_inv_adst4_1d_c \
asm(\
    /* Wrapper for inv_adst4_1d_c(int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_inv_adst4_1d_c\n" \
    ".type __ia2_inv_adst4_1d_c, @function\n" \
    "__ia2_inv_adst4_1d_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call inv_adst4_1d_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_inv_adst4_1d_c, .-__ia2_inv_adst4_1d_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_inv_adst8_1d_c \
asm(\
    /* Wrapper for inv_adst8_1d_c(int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_inv_adst8_1d_c\n" \
    ".type __ia2_inv_adst8_1d_c, @function\n" \
    "__ia2_inv_adst8_1d_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call inv_adst8_1d_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_inv_adst8_1d_c, .-__ia2_inv_adst8_1d_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_inv_dct16_1d_c \
asm(\
    /* Wrapper for inv_dct16_1d_c(int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_inv_dct16_1d_c\n" \
    ".type __ia2_inv_dct16_1d_c, @function\n" \
    "__ia2_inv_dct16_1d_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call inv_dct16_1d_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_inv_dct16_1d_c, .-__ia2_inv_dct16_1d_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_inv_dct32_1d_c \
asm(\
    /* Wrapper for inv_dct32_1d_c(int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_inv_dct32_1d_c\n" \
    ".type __ia2_inv_dct32_1d_c, @function\n" \
    "__ia2_inv_dct32_1d_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call inv_dct32_1d_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_inv_dct32_1d_c, .-__ia2_inv_dct32_1d_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_inv_dct4_1d_c \
asm(\
    /* Wrapper for inv_dct4_1d_c(int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_inv_dct4_1d_c\n" \
    ".type __ia2_inv_dct4_1d_c, @function\n" \
    "__ia2_inv_dct4_1d_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call inv_dct4_1d_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_inv_dct4_1d_c, .-__ia2_inv_dct4_1d_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_inv_dct64_1d_c \
asm(\
    /* Wrapper for inv_dct64_1d_c(int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_inv_dct64_1d_c\n" \
    ".type __ia2_inv_dct64_1d_c, @function\n" \
    "__ia2_inv_dct64_1d_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call inv_dct64_1d_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_inv_dct64_1d_c, .-__ia2_inv_dct64_1d_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_inv_dct8_1d_c \
asm(\
    /* Wrapper for inv_dct8_1d_c(int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_inv_dct8_1d_c\n" \
    ".type __ia2_inv_dct8_1d_c, @function\n" \
    "__ia2_inv_dct8_1d_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call inv_dct8_1d_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_inv_dct8_1d_c, .-__ia2_inv_dct8_1d_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_inv_flipadst16_1d_c \
asm(\
    /* Wrapper for inv_flipadst16_1d_c(int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_inv_flipadst16_1d_c\n" \
    ".type __ia2_inv_flipadst16_1d_c, @function\n" \
    "__ia2_inv_flipadst16_1d_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call inv_flipadst16_1d_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_inv_flipadst16_1d_c, .-__ia2_inv_flipadst16_1d_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_inv_flipadst4_1d_c \
asm(\
    /* Wrapper for inv_flipadst4_1d_c(int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_inv_flipadst4_1d_c\n" \
    ".type __ia2_inv_flipadst4_1d_c, @function\n" \
    "__ia2_inv_flipadst4_1d_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call inv_flipadst4_1d_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_inv_flipadst4_1d_c, .-__ia2_inv_flipadst4_1d_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_inv_flipadst8_1d_c \
asm(\
    /* Wrapper for inv_flipadst8_1d_c(int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_inv_flipadst8_1d_c\n" \
    ".type __ia2_inv_flipadst8_1d_c, @function\n" \
    "__ia2_inv_flipadst8_1d_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call inv_flipadst8_1d_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_inv_flipadst8_1d_c, .-__ia2_inv_flipadst8_1d_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_inv_identity16_1d_c \
asm(\
    /* Wrapper for inv_identity16_1d_c(int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_inv_identity16_1d_c\n" \
    ".type __ia2_inv_identity16_1d_c, @function\n" \
    "__ia2_inv_identity16_1d_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call inv_identity16_1d_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_inv_identity16_1d_c, .-__ia2_inv_identity16_1d_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_inv_identity32_1d_c \
asm(\
    /* Wrapper for inv_identity32_1d_c(int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_inv_identity32_1d_c\n" \
    ".type __ia2_inv_identity32_1d_c, @function\n" \
    "__ia2_inv_identity32_1d_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call inv_identity32_1d_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_inv_identity32_1d_c, .-__ia2_inv_identity32_1d_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_inv_identity4_1d_c \
asm(\
    /* Wrapper for inv_identity4_1d_c(int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_inv_identity4_1d_c\n" \
    ".type __ia2_inv_identity4_1d_c, @function\n" \
    "__ia2_inv_identity4_1d_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call inv_identity4_1d_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_inv_identity4_1d_c, .-__ia2_inv_identity4_1d_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_inv_identity8_1d_c \
asm(\
    /* Wrapper for inv_identity8_1d_c(int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_inv_identity8_1d_c\n" \
    ".type __ia2_inv_identity8_1d_c, @function\n" \
    "__ia2_inv_identity8_1d_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call inv_identity8_1d_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_inv_identity8_1d_c, .-__ia2_inv_identity8_1d_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_init_internal \
asm(\
    /* Wrapper for init_internal(): */ \
    ".text\n" \
    ".local __ia2_init_internal\n" \
    ".type __ia2_init_internal, @function\n" \
    "__ia2_init_internal:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call init_internal\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_init_internal, .-__ia2_init_internal\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_pal_idx_finish_c \
asm(\
    /* Wrapper for pal_idx_finish_c(int, int, int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_pal_idx_finish_c\n" \
    ".type __ia2_pal_idx_finish_c, @function\n" \
    "__ia2_pal_idx_finish_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call pal_idx_finish_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_pal_idx_finish_c, .-__ia2_pal_idx_finish_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_free_buffer \
asm(\
    /* Wrapper for free_buffer(int, int): */ \
    ".text\n" \
    ".local __ia2_free_buffer\n" \
    ".type __ia2_free_buffer, @function\n" \
    "__ia2_free_buffer:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call free_buffer\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_free_buffer, .-__ia2_free_buffer\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_default_free_callback \
asm(\
    /* Wrapper for default_free_callback(int, int): */ \
    ".text\n" \
    ".local __ia2_default_free_callback\n" \
    ".type __ia2_default_free_callback, @function\n" \
    "__ia2_default_free_callback:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call default_free_callback\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_default_free_callback, .-__ia2_default_free_callback\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_pool_free_callback \
asm(\
    /* Wrapper for pool_free_callback(int, int): */ \
    ".text\n" \
    ".local __ia2_pool_free_callback\n" \
    ".type __ia2_pool_free_callback, @function\n" \
    "__ia2_pool_free_callback:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call pool_free_callback\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_pool_free_callback, .-__ia2_pool_free_callback\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_load_tmvs_c \
asm(\
    /* Wrapper for load_tmvs_c(int, int, int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_load_tmvs_c\n" \
    ".type __ia2_load_tmvs_c, @function\n" \
    "__ia2_load_tmvs_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call load_tmvs_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_load_tmvs_c, .-__ia2_load_tmvs_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_save_tmvs_c \
asm(\
    /* Wrapper for save_tmvs_c(int, int, int, int, int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_save_tmvs_c\n" \
    ".type __ia2_save_tmvs_c, @function\n" \
    "__ia2_save_tmvs_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Copy stack arguments from the caller's stack to the compartment */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r12\n" \
    "movq %fs:(%r12), %rax\n" \
    "pushq 64(%rax)\n" \
    "pushq 56(%rax)\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call save_tmvs_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $24, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_save_tmvs_c, .-__ia2_save_tmvs_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_splat_mv_c \
asm(\
    /* Wrapper for splat_mv_c(int, int, int, int, int): */ \
    ".text\n" \
    ".local __ia2_splat_mv_c\n" \
    ".type __ia2_splat_mv_c, @function\n" \
    "__ia2_splat_mv_c:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call splat_mv_c\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_splat_mv_c, .-__ia2_splat_mv_c\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_init_internal \
asm(\
    /* Wrapper for init_internal(): */ \
    ".text\n" \
    ".local __ia2_init_internal\n" \
    ".type __ia2_init_internal, @function\n" \
    "__ia2_init_internal:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call init_internal\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xffffffcc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_2@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_init_internal, .-__ia2_init_internal\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_picture_alloc \
asm(\
    /* Wrapper for picture_alloc(int, int) -> int: */ \
    ".text\n" \
    ".local __ia2_picture_alloc\n" \
    ".type __ia2_picture_alloc, @function\n" \
    "__ia2_picture_alloc:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call picture_alloc\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_picture_alloc, .-__ia2_picture_alloc\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_picture_release \
asm(\
    /* Wrapper for picture_release(int, int): */ \
    ".text\n" \
    ".local __ia2_picture_release\n" \
    ".type __ia2_picture_release, @function\n" \
    "__ia2_picture_release:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call picture_release\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_picture_release, .-__ia2_picture_release\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_signal_handler \
asm(\
    /* Wrapper for signal_handler(int): */ \
    ".text\n" \
    ".local __ia2_signal_handler\n" \
    ".type __ia2_signal_handler, @function\n" \
    "__ia2_signal_handler:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call signal_handler\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_signal_handler, .-__ia2_signal_handler\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_annexb_close \
asm(\
    /* Wrapper for annexb_close(int): */ \
    ".text\n" \
    ".local __ia2_annexb_close\n" \
    ".type __ia2_annexb_close, @function\n" \
    "__ia2_annexb_close:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call annexb_close\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_annexb_close, .-__ia2_annexb_close\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_annexb_open \
asm(\
    /* Wrapper for annexb_open(int, int, int, int, int) -> int: */ \
    ".text\n" \
    ".local __ia2_annexb_open\n" \
    ".type __ia2_annexb_open, @function\n" \
    "__ia2_annexb_open:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call annexb_open\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_annexb_open, .-__ia2_annexb_open\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_annexb_probe \
asm(\
    /* Wrapper for annexb_probe(int) -> int: */ \
    ".text\n" \
    ".local __ia2_annexb_probe\n" \
    ".type __ia2_annexb_probe, @function\n" \
    "__ia2_annexb_probe:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call annexb_probe\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_annexb_probe, .-__ia2_annexb_probe\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_annexb_read \
asm(\
    /* Wrapper for annexb_read(int, int) -> int: */ \
    ".text\n" \
    ".local __ia2_annexb_read\n" \
    ".type __ia2_annexb_read, @function\n" \
    "__ia2_annexb_read:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call annexb_read\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_annexb_read, .-__ia2_annexb_read\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_ivf_close \
asm(\
    /* Wrapper for ivf_close(int): */ \
    ".text\n" \
    ".local __ia2_ivf_close\n" \
    ".type __ia2_ivf_close, @function\n" \
    "__ia2_ivf_close:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call ivf_close\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_ivf_close, .-__ia2_ivf_close\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_ivf_open \
asm(\
    /* Wrapper for ivf_open(int, int, int, int, int) -> int: */ \
    ".text\n" \
    ".local __ia2_ivf_open\n" \
    ".type __ia2_ivf_open, @function\n" \
    "__ia2_ivf_open:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call ivf_open\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_ivf_open, .-__ia2_ivf_open\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_ivf_probe \
asm(\
    /* Wrapper for ivf_probe(int) -> int: */ \
    ".text\n" \
    ".local __ia2_ivf_probe\n" \
    ".type __ia2_ivf_probe, @function\n" \
    "__ia2_ivf_probe:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call ivf_probe\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_ivf_probe, .-__ia2_ivf_probe\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_ivf_read \
asm(\
    /* Wrapper for ivf_read(int, int) -> int: */ \
    ".text\n" \
    ".local __ia2_ivf_read\n" \
    ".type __ia2_ivf_read, @function\n" \
    "__ia2_ivf_read:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call ivf_read\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_ivf_read, .-__ia2_ivf_read\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_ivf_seek \
asm(\
    /* Wrapper for ivf_seek(int, int) -> int: */ \
    ".text\n" \
    ".local __ia2_ivf_seek\n" \
    ".type __ia2_ivf_seek, @function\n" \
    "__ia2_ivf_seek:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call ivf_seek\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_ivf_seek, .-__ia2_ivf_seek\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_section5_close \
asm(\
    /* Wrapper for section5_close(int): */ \
    ".text\n" \
    ".local __ia2_section5_close\n" \
    ".type __ia2_section5_close, @function\n" \
    "__ia2_section5_close:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call section5_close\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_section5_close, .-__ia2_section5_close\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_section5_open \
asm(\
    /* Wrapper for section5_open(int, int, int, int, int) -> int: */ \
    ".text\n" \
    ".local __ia2_section5_open\n" \
    ".type __ia2_section5_open, @function\n" \
    "__ia2_section5_open:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call section5_open\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_section5_open, .-__ia2_section5_open\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_section5_probe \
asm(\
    /* Wrapper for section5_probe(int) -> int: */ \
    ".text\n" \
    ".local __ia2_section5_probe\n" \
    ".type __ia2_section5_probe, @function\n" \
    "__ia2_section5_probe:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call section5_probe\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_section5_probe, .-__ia2_section5_probe\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_section5_read \
asm(\
    /* Wrapper for section5_read(int, int) -> int: */ \
    ".text\n" \
    ".local __ia2_section5_read\n" \
    ".type __ia2_section5_read, @function\n" \
    "__ia2_section5_read:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call section5_read\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_section5_read, .-__ia2_section5_read\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_md5_close \
asm(\
    /* Wrapper for md5_close(int): */ \
    ".text\n" \
    ".local __ia2_md5_close\n" \
    ".type __ia2_md5_close, @function\n" \
    "__ia2_md5_close:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call md5_close\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_md5_close, .-__ia2_md5_close\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_md5_open \
asm(\
    /* Wrapper for md5_open(int, int, int, int) -> int: */ \
    ".text\n" \
    ".local __ia2_md5_open\n" \
    ".type __ia2_md5_open, @function\n" \
    "__ia2_md5_open:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call md5_open\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_md5_open, .-__ia2_md5_open\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_md5_verify \
asm(\
    /* Wrapper for md5_verify(int, int) -> int: */ \
    ".text\n" \
    ".local __ia2_md5_verify\n" \
    ".type __ia2_md5_verify, @function\n" \
    "__ia2_md5_verify:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call md5_verify\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_md5_verify, .-__ia2_md5_verify\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_md5_write \
asm(\
    /* Wrapper for md5_write(int, int) -> int: */ \
    ".text\n" \
    ".local __ia2_md5_write\n" \
    ".type __ia2_md5_write, @function\n" \
    "__ia2_md5_write:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call md5_write\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_md5_write, .-__ia2_md5_write\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_null_write \
asm(\
    /* Wrapper for null_write(int, int) -> int: */ \
    ".text\n" \
    ".local __ia2_null_write\n" \
    ".type __ia2_null_write, @function\n" \
    "__ia2_null_write:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call null_write\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_null_write, .-__ia2_null_write\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_y4m2_close \
asm(\
    /* Wrapper for y4m2_close(int): */ \
    ".text\n" \
    ".local __ia2_y4m2_close\n" \
    ".type __ia2_y4m2_close, @function\n" \
    "__ia2_y4m2_close:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call y4m2_close\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_y4m2_close, .-__ia2_y4m2_close\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_y4m2_open \
asm(\
    /* Wrapper for y4m2_open(int, int, int, int) -> int: */ \
    ".text\n" \
    ".local __ia2_y4m2_open\n" \
    ".type __ia2_y4m2_open, @function\n" \
    "__ia2_y4m2_open:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call y4m2_open\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_y4m2_open, .-__ia2_y4m2_open\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_y4m2_write \
asm(\
    /* Wrapper for y4m2_write(int, int) -> int: */ \
    ".text\n" \
    ".local __ia2_y4m2_write\n" \
    ".type __ia2_y4m2_write, @function\n" \
    "__ia2_y4m2_write:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call y4m2_write\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_y4m2_write, .-__ia2_y4m2_write\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_yuv_close \
asm(\
    /* Wrapper for yuv_close(int): */ \
    ".text\n" \
    ".local __ia2_yuv_close\n" \
    ".type __ia2_yuv_close, @function\n" \
    "__ia2_yuv_close:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call yuv_close\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_yuv_close, .-__ia2_yuv_close\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_yuv_open \
asm(\
    /* Wrapper for yuv_open(int, int, int, int) -> int: */ \
    ".text\n" \
    ".local __ia2_yuv_open\n" \
    ".type __ia2_yuv_open, @function\n" \
    "__ia2_yuv_open:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call yuv_open\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_yuv_open, .-__ia2_yuv_open\n" \
    ".previous\n" \
);
#define IA2_DEFINE_WRAPPER_yuv_write \
asm(\
    /* Wrapper for yuv_write(int, int) -> int: */ \
    ".text\n" \
    ".local __ia2_yuv_write\n" \
    ".type __ia2_yuv_write, @function\n" \
    "__ia2_yuv_write:\n" \
    "pushq %rbp\n" \
    "movq %rsp, %rbp\n" \
    "pushq %rbx\n" \
    "pushq %r12\n" \
    "pushq %r13\n" \
    "pushq %r14\n" \
    "pushq %r15\n" \
    ASSERT_PKRU(0xfffffffffffffffc) "\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    "subq $8, %rsp\n" \
    /* Set PKRU to the compartment's value */ \
    "movq %rcx, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rcx\n" \
    "movq %r11, %rdx\n" \
    /* Call wrapped function */ \
    "call yuv_write\n" \
    /* Set PKRU to the intermediate value to move arguments */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffff0, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    /* Free stack space used for stack args */ \
    "addq $8, %rsp\n" \
    /* Compute location to save old stack pointer (using r11) */ \
    "mov ia2_stackptr_1@GOTTPOFF(%rip), %r11\n" \
    /* Write the old stack pointer to memory */ \
    "movq %rsp, %fs:(%r11)\n" \
    /* Compute location to load new stack pointer (using r11) */ \
    "mov ia2_stackptr_0@GOTTPOFF(%rip), %r11\n" \
    /* Read the new stack pointer from memory */ \
    "movq %fs:(%r11), %rsp\n" \
    /* Preserve essential regs on stack */ \
    "pushq %rax\n" \
    /* Scrub non-essential regs */ \
    "call __libia2_scrub_registers\n" \
    /* Restore preserved regs */ \
    "popq %rax\n" \
    /* Set PKRU to the caller's value */ \
    "movq %rax, %r10\n" \
    "movq %rdx, %r11\n" \
    "xorl %ecx, %ecx\n" \
    "xorl %edx, %edx\n" \
    "movl $0xfffffffc, %eax\n" \
    "wrpkru\n" \
    "movq %r10, %rax\n" \
    "movq %r11, %rdx\n" \
    "popq %r15\n" \
    "popq %r14\n" \
    "popq %r13\n" \
    "popq %r12\n" \
    "popq %rbx\n" \
    "popq %rbp\n" \
    /* Return to the caller */ \
    "ret\n" \
    ".size __ia2_yuv_write, .-__ia2_yuv_write\n" \
    ".previous\n" \
);

#endif
