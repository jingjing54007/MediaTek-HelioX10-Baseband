/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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
 *   mrs_msgid.h
 *
 * Project:
 * --------
 *   Multimode
 *
 * Description:
 * ------------
 *   This file is intends for MRS SAP definition.
 *
 * Author:
 * -------
 * -------
 *
 *===========================================================================
 * $Log:$
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 *===========================================================================
 ****************************************************************************/
#include "module_msg_range.h"

#ifndef _MRS_MSG_H
#define _MRS_MSG_H

#ifdef __SOURCE_INSIGHT_PARSE__
typedef enum {
#endif

MODULE_MSG_BEGIN( MSG_ID_MRS_CODE_BEGIN )

MSG_ID_MRS_AS_CSG_WHITE_LIST_UPDATE_IND = MSG_ID_MRS_CODE_BEGIN,
MSG_ID_MRS_LOWER_LAYER_AVAILABILITY_UPDATE_IND, 
MSG_ID_MRS_GAS_LOWER_LAYER_AVAILABILITY_UPDATE_REQ,
MSG_ID_MRS_UAS_LOWER_LAYER_AVAILABILITY_UPDATE_REQ,
MSG_ID_MRS_EAS_LOWER_LAYER_AVAILABILITY_UPDATE_REQ,
MSG_ID_MRS_GAS_BAND_SETTING_UPDATE_IND,
MSG_ID_MRS_UAS_BAND_SETTING_UPDATE_IND,
MSG_ID_MRS_EAS_BAND_SETTING_UPDATE_IND,
MSG_ID_RAC_MRS_INIT_REQ,
MSG_ID_RAC_MRS_INIT_CNF,
#ifdef __SGLTE__
MSG_ID_MRS_EAS_DISABLE_B39_IND,
MSG_ID_MRS_EAS_ENABLE_B39_IND,
MSG_ID_MRS_UAS_DISABLE_B39_IND,
MSG_ID_MRS_UAS_ENABLE_B39_IND,
#endif/* __SGLTE__ */
MSG_ID_MRS_UAS_UMTS_HO_INFO_RSP,

MSG_ID_MRS_CODE_END = MSG_ID_MRS_UAS_UMTS_HO_INFO_RSP,

MODULE_MSG_END( MSG_ID_MRS_CODE_TAIL )

#ifdef __SOURCE_INSIGHT_PARSE__
};
#endif

#endif   //_MRS_MSG_H