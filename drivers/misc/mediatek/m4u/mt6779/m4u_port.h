/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 */

#ifndef __M4U_PORT_H__
#define __M4U_PORT_H__

/* ==================================== */
/* about portid */
/* ==================================== */

enum {
	/*larb0 -MMSYS-9*/
	M4U_PORT_DISP_POSTMASK0,
	M4U_PORT_DISP_OVL0_HDR,
	M4U_PORT_DISP_OVL1_HDR,
	M4U_PORT_DISP_OVL0,
	M4U_PORT_DISP_OVL1,
	M4U_PORT_DISP_PVRIC0,
	M4U_PORT_DISP_RDMA0,
	M4U_PORT_DISP_WDMA0,
	M4U_PORT_DISP_FAKE0,

	/*larb1-MMSYS-14*/
	M4U_PORT_DISP_OVL0_2L_HDR,
	M4U_PORT_DISP_OVL1_2L_HDR,
	M4U_PORT_DISP_OVL0_2L,
	M4U_PORT_DISP_OVL1_2L,
	M4U_PORT_DISP_RDMA1,
	M4U_PORT_MDP_PVRIC0,
	M4U_PORT_MDP_PVRIC1,
	M4U_PORT_MDP_RDMA0,
	M4U_PORT_MDP_RDMA1,
	M4U_PORT_MDP_WROT0_R,
	M4U_PORT_MDP_WROT0_W,
	M4U_PORT_MDP_WROT1_R,
	M4U_PORT_MDP_WROT1_W,
	M4U_PORT_DISP_FAKE1,

	/*larb2-VDEC-12*/
	M4U_PORT_HW_VDEC_MC_EXT,
	M4U_PORT_HW_VDEC_UFO_EXT,
	M4U_PORT_HW_VDEC_PP_EXT,
	M4U_PORT_HW_VDEC_PRED_RD_EXT,
	M4U_PORT_HW_VDEC_PRED_WR_EXT,
	M4U_PORT_HW_VDEC_PPWRAP_EXT,
	M4U_PORT_HW_VDEC_TILE_EXT,
	M4U_PORT_HW_VDEC_VLD_EXT,
	M4U_PORT_HW_VDEC_VLD2_EXT,
	M4U_PORT_HW_VDEC_AVC_MV_EXT,
	M4U_PORT_HW_VDEC_UFO_ENC_EXT,
	M4U_PORT_HW_VDEC_RG_CTRL_DMA_EXT,

	/*larb3-VENC-19*/
	M4U_PORT_VENC_RCPU,
	M4U_PORT_VENC_REC,
	M4U_PORT_VENC_BSDMA,
	M4U_PORT_VENC_SV_COMV,
	M4U_PORT_VENC_RD_COMV,
	M4U_PORT_VENC_NBM_RDMA,
	M4U_PORT_VENC_NBM_RDMA_LITE,
	M4U_PORT_JPGENC_Y_RDMA,
	M4U_PORT_JPGENC_C_RDMA,
	M4U_PORT_JPGENC_Q_TABLE,
	M4U_PORT_JPGENC_BSDMA,
	M4U_PORT_JPGEDC_WDMA,
	M4U_PORT_JPGEDC_BSDMA,
	M4U_PORT_VENC_NBM_WDMA,
	M4U_PORT_VENC_NBM_WDMA_LITE,
	M4U_PORT_VENC_CUR_LUMA,
	M4U_PORT_VENC_CUR_CHROMA,
	M4U_PORT_VENC_REF_LUMA,
	M4U_PORT_VENC_REF_CHROMA,

	/*larb4-dummy*/

	/*larb5-IMG-26*/
	M4U_PORT_IMGI_D1,
	M4U_PORT_IMGBI_D1,
	M4U_PORT_DMGI_D1,
	M4U_PORT_DEPI_D1,
	M4U_PORT_LCEI_D1,
	M4U_PORT_SMTI_D1,
	M4U_PORT_SMTO_D2,
	M4U_PORT_SMTO_D1,
	M4U_PORT_CRZO_D1,
	M4U_PORT_IMG3O_D1,

	M4U_PORT_VIPI_D1,
	M4U_PORT_WPE_RDMA1,
	M4U_PORT_WPE_RDMA0,
	M4U_PORT_WPE_WDMA,
	M4U_PORT_TIMGO_D1,
	M4U_PORT_MFB_RDMA0,
	M4U_PORT_MFB_RDMA1,
	M4U_PORT_MFB_RDMA2,
	M4U_PORT_MFB_RDMA3,
	M4U_PORT_MFB_WDMA,

	M4U_PORT_RESERVE1,
	M4U_PORT_RESERVE2,
	M4U_PORT_RESERVE3,
	M4U_PORT_RESERVE4,
	M4U_PORT_RESERVE5,
	M4U_PORT_RESERVE6,

	/*larb6-IMG-3
	 *M4U_PORT_IMG_IPUO,
	 *M4U_PORT_IMG_IPU3O,
	 *M4U_PORT_IMG_IPUI,
	 */

	/*larb7-IPESYS-4*/
	M4U_PORT_DVS_RDMA,
	M4U_PORT_DVS_WDMA,
	M4U_PORT_DVP_RDMA,
	M4U_PORT_DVP_WDMA,

	/*larb8-IPESYS-10*/
	M4U_PORT_FDVT_RDA,
	M4U_PORT_FDVT_RDB,
	M4U_PORT_FDVT_WRA,
	M4U_PORT_FDVT_WRB,
	M4U_PORT_FE_RD0,
	M4U_PORT_FE_RD1,
	M4U_PORT_FE_WR0,
	M4U_PORT_FE_WR1,
	M4U_PORT_RSC_RDMA0,
	M4U_PORT_RSC_WDMA,

	/*larb9-CAM-24*/
	M4U_PORT_CAM_IMGO_C,
	M4U_PORT_CAM_RRZO_C,
	M4U_PORT_CAM_LSCI_C,
	M4U_PORT_CAM_BPCI_C,
	M4U_PORT_CAM_YUVO_C,
	M4U_PORT_CAM_UFDI_R2_C,
	M4U_PORT_CAM_RAWI_R2_C,
	M4U_PORT_CAM_RAWI_R5_C,
	M4U_PORT_CAM_CAMSV_1,
	M4U_PORT_CAM_CAMSV_2,

	M4U_PORT_CAM_CAMSV_3,
	M4U_PORT_CAM_CAMSV_4,
	M4U_PORT_CAM_CAMSV_5,
	M4U_PORT_CAM_CAMSV_6,
	M4U_PORT_CAM_AAO_C,
	M4U_PORT_CAM_AFO_C,
	M4U_PORT_CAM_FLKO_C,
	M4U_PORT_CAM_LCESO_C,
	M4U_PORT_CAM_CRZO_C,
	M4U_PORT_CAM_LTMSO_C,

	M4U_PORT_CAM_RSSO_C,
	M4U_PORT_CAM_CCUI,
	M4U_PORT_CAM_CCUO,
	M4U_PORT_CAM_FAKE,

	/*larb10-CAM-31*/
	M4U_PORT_CAM_IMGO_A,
	M4U_PORT_CAM_RRZO_A,
	M4U_PORT_CAM_LSCI_A,
	M4U_PORT_CAM_BPCI_A,
	M4U_PORT_CAM_YUVO_A,
	M4U_PORT_CAM_UFDI_A,
	M4U_PORT_CAM_RAWI_R2_A,
	M4U_PORT_CAM_RAWI_R5_A,
	M4U_PORT_CAM_IMGO_B,
	M4U_PORT_CAM_RRZO_B,

	M4U_PORT_CAM_LSCI_B,
	M4U_PORT_CAM_BPCI_B,
	M4U_PORT_CAM_YUVO_B,
	M4U_PORT_CAM_UFDI_B,
	M4U_PORT_CAM_RAWI_R2_B,
	M4U_PORT_CAM_RAWI_R5_B,
	M4U_PORT_CAM_CAMSV_0,
	M4U_PORT_CAM_AAO_A,
	M4U_PORT_CAM_AFO_A,
	M4U_PORT_CAM_FLKO_A,

	M4U_PORT_CAM_LCESO_A,
	M4U_PORT_CAM_CRZO_A,
	M4U_PORT_CAM_AAO_B,
	M4U_PORT_CAM_AFO_B,
	M4U_PORT_CAM_FLKO_B,
	M4U_PORT_CAM_LCESO_B,
	M4U_PORT_CAM_CRZO_B,
	M4U_PORT_CAM_LTMSO_A,
	M4U_PORT_CAM_RSSO_A,
	M4U_PORT_CAM_LTMSO_B,
	M4U_PORT_CAM_RSSO_B,

	/*larb11-CAM-5
	 *M4U_PORT_CAM_IPUO,
	 *M4U_PORT_CAM_IPU2O,
	 *M4U_PORT_CAM_IPU3O,
	 *M4U_PORT_CAM_IPUI,
	 *M4U_PORT_CAM_IPU2I,
	 */

	/* smi common */
	M4U_PORT_CCU0,
	M4U_PORT_CCU1,

	M4U_PORT_VPU,

	M4U_PORT_UNKNOWN
};
#define M4U_PORT_NR M4U_PORT_UNKNOWN

#endif