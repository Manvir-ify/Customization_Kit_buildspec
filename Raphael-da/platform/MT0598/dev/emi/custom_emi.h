/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
/*****************************************************************************
 *
 * Filename:
 * ---------
 *   custom_emi.h
 *
 * Project:
 * --------
 *   Android
 *
 * Description:
 * ------------
 *   This Module defines the EMI (external memory interface) related setting.
 *
 * Author:
 * -------
 *  EMI auto generator V0.01
 *
 *   Memory Device database last modified on 2016/4/15
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision$
 * $Modtime$
 * $Log$
 *
 *------------------------------------------------------------------------------
 * WARNING!!!  WARNING!!!   WARNING!!!  WARNING!!!  WARNING!!!  WARNING!!! 
 * This file is generated by EMI Auto-gen Tool.
 * Please do not modify the content directly!
 * It could be overwritten!
 *============================================================================
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __CUSTOM_EMI__
#define __CUSTOM_EMI__

#include "emi.h"

#define COMBO_LPDDR2 (0+0)
#define COMBO_LPDDR3 (0+0)
#define COMBO_LPDDR4 (1+0)
#define COMBO_LPDR4X (0+0)
#define COMBO_PCDDR3 (0+0)
#define NUM_EMI_RECORD (1)

int num_of_emi_records = NUM_EMI_RECORD ;

EMI_SETTINGS default_emi_setting = 
{

};

EMI_SETTINGS emi_settings[] =
{
     
	//H9HP27ACVUMDAR
	{
		0x1,		/* sub_version */
		0x0205,		/* TYPE */
		9,		/* EMMC ID/FW ID checking length */
		0,		/* FW length */
		{0x90,0x01,0x4A,0x48,0x42,0x47,0x38,0x61,0x34,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* NAND_EMMC_ID */
		{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},		/* FW_ID */
		0xf050f154,		/* EMI_CONA_VAL */
		0x00000000,		/* EMI_CONH_VAL */
		0x06090640,		/* U 00 */
		0x113D1101,		/* U 01 */
		0x0D060301,		/* U 02 */
		0x99080307,		/* U 03 */
		0x224E6561,		/* U 04 */
		0x0B0B0C0C,		/* U 05 */
		0x00054045,		/* U 06 */
		0x00000000,		/* U 07 */
		{0x80000000,0,0,0},		/* DRAM RANK SIZE */
		0x00421000,		/* EMI_CONF_VAL */
		0x0400f050,		/* CHN0_EMI_CONA_VAL */
		0x0400f050,		/* CHN1_EMI_CONA_VAL */
		0x1,		/* dram_cbt_mode */
		{0,0,0,0,0,0},		/* reserved 6 */
		0x00000006,		/* LPDDR4_MODE_REG5 */
		0,		/* PIN_MUX_TYPE for tablet */
	} ,
};

#endif /* __CUSTOM_EMI__ */