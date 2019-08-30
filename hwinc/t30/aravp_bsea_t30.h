/*
 * Copyright (c) 2011 NVIDIA Corporation.  All rights reserved.
 *
 * NVIDIA Corporation and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA Corporation is strictly prohibited.
 */


#ifndef __ARAVP_BSEA_T30_H_INC_
#define __ARAVP_BSEA_T30_H_INC_

#if defined(__cplusplus)
extern "C"
{
#endif

// Register AVPBSEA_SECURE_SECURITY_0
#define AVPBSEA_SECURE_SECURITY_0                       _MK_ADDR_CONST(0x110)
#define AVPBSEA_SECURE_SECURITY_0_SECURE_ENG_DIS_RANGE                  0:0


// Register AVPBSEA_INTR_STATUS_0
#define AVPBSEA_INTR_STATUS_0                   _MK_ADDR_CONST(0x18)
#define AVPBSEA_INTR_STATUS_0_DMA_BUSY_SHIFT                    _MK_SHIFT_CONST(9)
#define AVPBSEA_INTR_STATUS_0_DMA_BUSY_FIELD                    _MK_FIELD_CONST(0x1, AVPBSEA_INTR_STATUS_0_DMA_BUSY_SHIFT)
#define AVPBSEA_INTR_STATUS_0_DMA_BUSY_RANGE                    9:9
#define AVPBSEA_INTR_STATUS_0_DMA_BUSY_WOFFSET                  0x0
#define AVPBSEA_INTR_STATUS_0_DMA_BUSY_DEFAULT                  _MK_MASK_CONST(0x0)
#define AVPBSEA_INTR_STATUS_0_DMA_BUSY_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define AVPBSEA_INTR_STATUS_0_DMA_BUSY_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define AVPBSEA_INTR_STATUS_0_DMA_BUSY_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)

#define AVPBSEA_INTR_STATUS_0_ICQ_EMPTY_SHIFT                   _MK_SHIFT_CONST(3)
#define AVPBSEA_INTR_STATUS_0_ICQ_EMPTY_FIELD                   _MK_FIELD_CONST(0x1, AVPBSEA_INTR_STATUS_0_ICQ_EMPTY_SHIFT)
#define AVPBSEA_INTR_STATUS_0_ICQ_EMPTY_RANGE                   3:3
#define AVPBSEA_INTR_STATUS_0_ICQ_EMPTY_WOFFSET                 0x0
#define AVPBSEA_INTR_STATUS_0_ICQ_EMPTY_DEFAULT                 _MK_MASK_CONST(0x1)
#define AVPBSEA_INTR_STATUS_0_ICQ_EMPTY_DEFAULT_MASK                    _MK_MASK_CONST(0x1)
#define AVPBSEA_INTR_STATUS_0_ICQ_EMPTY_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define AVPBSEA_INTR_STATUS_0_ICQ_EMPTY_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)

#define AVPBSEA_INTR_STATUS_0_ENGINE_BUSY_SHIFT                 _MK_SHIFT_CONST(0)
#define AVPBSEA_INTR_STATUS_0_ENGINE_BUSY_FIELD                 _MK_FIELD_CONST(0x1, AVPBSEA_INTR_STATUS_0_ENGINE_BUSY_SHIFT)
#define AVPBSEA_INTR_STATUS_0_ENGINE_BUSY_RANGE                 0:0
#define AVPBSEA_INTR_STATUS_0_ENGINE_BUSY_WOFFSET                       0x0
#define AVPBSEA_INTR_STATUS_0_ENGINE_BUSY_DEFAULT                       _MK_MASK_CONST(0x0)
#define AVPBSEA_INTR_STATUS_0_ENGINE_BUSY_DEFAULT_MASK                  _MK_MASK_CONST(0x1)
#define AVPBSEA_INTR_STATUS_0_ENGINE_BUSY_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define AVPBSEA_INTR_STATUS_0_ENGINE_BUSY_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)



// Register AVPBSEA_ICMDQUE_WR_0
#define AVPBSEA_ICMDQUE_WR_0                    _MK_ADDR_CONST(0x0)


// Register AVPBSEA_SECURE_CONFIG_0
#define AVPBSEA_SECURE_CONFIG_0                 _MK_ADDR_CONST(0x108)

#define AVPBSEA_SECURE_CONFIG_0_SECURE_MTM2KEY_INDEX_RANGE                      30:26

#define AVPBSEA_SECURE_CONFIG_0_SECURE_KEY_INDEX_SHIFT                  _MK_SHIFT_CONST(20)
#define AVPBSEA_SECURE_CONFIG_0_SECURE_KEY_INDEX_FIELD                  _MK_FIELD_CONST(0x1f, AVPBSEA_SECURE_CONFIG_0_SECURE_KEY_INDEX_SHIFT)
#define AVPBSEA_SECURE_CONFIG_0_SECURE_KEY_INDEX_RANGE                  24:20
#define AVPBSEA_SECURE_CONFIG_0_SECURE_KEY_INDEX_WOFFSET                        0x0
#define AVPBSEA_SECURE_CONFIG_0_SECURE_KEY_INDEX_DEFAULT                        _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_CONFIG_0_SECURE_KEY_INDEX_DEFAULT_MASK                   _MK_MASK_CONST(0x1f)
#define AVPBSEA_SECURE_CONFIG_0_SECURE_KEY_INDEX_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_CONFIG_0_SECURE_KEY_INDEX_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)

#define AVPBSEA_SECURE_CONFIG_0_SECURE_BLOCK_CNT_SHIFT                  _MK_SHIFT_CONST(0)
#define AVPBSEA_SECURE_CONFIG_0_SECURE_BLOCK_CNT_FIELD                  _MK_FIELD_CONST(0xfffff, AVPBSEA_SECURE_CONFIG_0_SECURE_BLOCK_CNT_SHIFT)
#define AVPBSEA_SECURE_CONFIG_0_SECURE_BLOCK_CNT_RANGE                  19:0
#define AVPBSEA_SECURE_CONFIG_0_SECURE_BLOCK_CNT_WOFFSET                        0x0
#define AVPBSEA_SECURE_CONFIG_0_SECURE_BLOCK_CNT_DEFAULT                        _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_CONFIG_0_SECURE_BLOCK_CNT_DEFAULT_MASK                   _MK_MASK_CONST(0xfffff)
#define AVPBSEA_SECURE_CONFIG_0_SECURE_BLOCK_CNT_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_CONFIG_0_SECURE_BLOCK_CNT_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)



// Register AVPBSEA_SECURE_CONFIG_EXT_0
#define AVPBSEA_SECURE_CONFIG_EXT_0                     _MK_ADDR_CONST(0x10c)
#define AVPBSEA_SECURE_CONFIG_EXT_0_SECURE_OFFSET_CNT_SHIFT                     _MK_SHIFT_CONST(24)
#define AVPBSEA_SECURE_CONFIG_EXT_0_SECURE_OFFSET_CNT_FIELD                     _MK_FIELD_CONST(0xff, AVPBSEA_SECURE_CONFIG_EXT_0_SECURE_OFFSET_CNT_SHIFT)
#define AVPBSEA_SECURE_CONFIG_EXT_0_SECURE_OFFSET_CNT_RANGE                     31:24
#define AVPBSEA_SECURE_CONFIG_EXT_0_SECURE_OFFSET_CNT_WOFFSET                   0x0
#define AVPBSEA_SECURE_CONFIG_EXT_0_SECURE_OFFSET_CNT_DEFAULT                   _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_CONFIG_EXT_0_SECURE_OFFSET_CNT_DEFAULT_MASK                      _MK_MASK_CONST(0xff)
#define AVPBSEA_SECURE_CONFIG_EXT_0_SECURE_OFFSET_CNT_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_CONFIG_EXT_0_SECURE_OFFSET_CNT_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)

#define AVPBSEA_SECURE_CONFIG_EXT_0_SECURE_KEY_SCH_DIS_SHIFT                    _MK_SHIFT_CONST(15)
#define AVPBSEA_SECURE_CONFIG_EXT_0_SECURE_KEY_SCH_DIS_FIELD                    _MK_FIELD_CONST(0x1, AVPBSEA_SECURE_CONFIG_EXT_0_SECURE_KEY_SCH_DIS_SHIFT)
#define AVPBSEA_SECURE_CONFIG_EXT_0_SECURE_KEY_SCH_DIS_RANGE                    15:15
#define AVPBSEA_SECURE_CONFIG_EXT_0_SECURE_KEY_SCH_DIS_WOFFSET                  0x0
#define AVPBSEA_SECURE_CONFIG_EXT_0_SECURE_KEY_SCH_DIS_DEFAULT                  _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_CONFIG_EXT_0_SECURE_KEY_SCH_DIS_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define AVPBSEA_SECURE_CONFIG_EXT_0_SECURE_KEY_SCH_DIS_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_CONFIG_EXT_0_SECURE_KEY_SCH_DIS_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)



// Register AVPBSEA_SECURE_SEC_SEL4_0
#define AVPBSEA_SECURE_SEC_SEL4_0                       _MK_ADDR_CONST(0x150)
#define AVPBSEA_SECURE_SEC_SEL4_0_KEYUPDATE_ENB4_RANGE                  1:1
#define AVPBSEA_SECURE_SEC_SEL4_0_KEYREAD_ENB4_RANGE                    0:0


// Register AVPBSEA_CMDQUE_CONTROL_0
#define AVPBSEA_CMDQUE_CONTROL_0                        _MK_ADDR_CONST(0x8)
#define AVPBSEA_CMDQUE_CONTROL_0_ERROR_FLUSH_ENB_SHIFT                  _MK_SHIFT_CONST(2)
#define AVPBSEA_CMDQUE_CONTROL_0_ERROR_FLUSH_ENB_FIELD                  _MK_FIELD_CONST(0x1, AVPBSEA_CMDQUE_CONTROL_0_ERROR_FLUSH_ENB_SHIFT)
#define AVPBSEA_CMDQUE_CONTROL_0_ERROR_FLUSH_ENB_RANGE                  2:2
#define AVPBSEA_CMDQUE_CONTROL_0_ERROR_FLUSH_ENB_WOFFSET                        0x0
#define AVPBSEA_CMDQUE_CONTROL_0_ERROR_FLUSH_ENB_DEFAULT                        _MK_MASK_CONST(0x0)
#define AVPBSEA_CMDQUE_CONTROL_0_ERROR_FLUSH_ENB_DEFAULT_MASK                   _MK_MASK_CONST(0x1)
#define AVPBSEA_CMDQUE_CONTROL_0_ERROR_FLUSH_ENB_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define AVPBSEA_CMDQUE_CONTROL_0_ERROR_FLUSH_ENB_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)

#define AVPBSEA_CMDQUE_CONTROL_0_ICMDQUE_ENB_SHIFT                      _MK_SHIFT_CONST(1)
#define AVPBSEA_CMDQUE_CONTROL_0_ICMDQUE_ENB_FIELD                      _MK_FIELD_CONST(0x1, AVPBSEA_CMDQUE_CONTROL_0_ICMDQUE_ENB_SHIFT)
#define AVPBSEA_CMDQUE_CONTROL_0_ICMDQUE_ENB_RANGE                      1:1
#define AVPBSEA_CMDQUE_CONTROL_0_ICMDQUE_ENB_WOFFSET                    0x0
#define AVPBSEA_CMDQUE_CONTROL_0_ICMDQUE_ENB_DEFAULT                    _MK_MASK_CONST(0x1)
#define AVPBSEA_CMDQUE_CONTROL_0_ICMDQUE_ENB_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define AVPBSEA_CMDQUE_CONTROL_0_ICMDQUE_ENB_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define AVPBSEA_CMDQUE_CONTROL_0_ICMDQUE_ENB_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)

#define AVPBSEA_CMDQUE_CONTROL_0_UCMDQUE_ENB_SHIFT                      _MK_SHIFT_CONST(0)
#define AVPBSEA_CMDQUE_CONTROL_0_UCMDQUE_ENB_FIELD                      _MK_FIELD_CONST(0x1, AVPBSEA_CMDQUE_CONTROL_0_UCMDQUE_ENB_SHIFT)
#define AVPBSEA_CMDQUE_CONTROL_0_UCMDQUE_ENB_RANGE                      0:0
#define AVPBSEA_CMDQUE_CONTROL_0_UCMDQUE_ENB_WOFFSET                    0x0
#define AVPBSEA_CMDQUE_CONTROL_0_UCMDQUE_ENB_DEFAULT                    _MK_MASK_CONST(0x1)
#define AVPBSEA_CMDQUE_CONTROL_0_UCMDQUE_ENB_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define AVPBSEA_CMDQUE_CONTROL_0_UCMDQUE_ENB_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define AVPBSEA_CMDQUE_CONTROL_0_UCMDQUE_ENB_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)



// Register AVPBSEA_BSE_CONFIG_0
#define AVPBSEA_BSE_CONFIG_0                    _MK_ADDR_CONST(0x44)
#define AVPBSEA_BSE_CONFIG_0_ENDIAN_ENB_SHIFT                   _MK_SHIFT_CONST(10)
#define AVPBSEA_BSE_CONFIG_0_ENDIAN_ENB_FIELD                   _MK_FIELD_CONST(0x1, AVPBSEA_BSE_CONFIG_0_ENDIAN_ENB_SHIFT)
#define AVPBSEA_BSE_CONFIG_0_ENDIAN_ENB_RANGE                   10:10
#define AVPBSEA_BSE_CONFIG_0_ENDIAN_ENB_WOFFSET                 0x0
#define AVPBSEA_BSE_CONFIG_0_ENDIAN_ENB_DEFAULT                 _MK_MASK_CONST(0x1)
#define AVPBSEA_BSE_CONFIG_0_ENDIAN_ENB_DEFAULT_MASK                    _MK_MASK_CONST(0x1)
#define AVPBSEA_BSE_CONFIG_0_ENDIAN_ENB_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define AVPBSEA_BSE_CONFIG_0_ENDIAN_ENB_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)

#define AVPBSEA_BSE_CONFIG_0_BSE_MODE_SEL_SHIFT                 _MK_SHIFT_CONST(0)
#define AVPBSEA_BSE_CONFIG_0_BSE_MODE_SEL_FIELD                 _MK_FIELD_CONST(0x1f, AVPBSEA_BSE_CONFIG_0_BSE_MODE_SEL_SHIFT)
#define AVPBSEA_BSE_CONFIG_0_BSE_MODE_SEL_RANGE                 4:0
#define AVPBSEA_BSE_CONFIG_0_BSE_MODE_SEL_WOFFSET                       0x0
#define AVPBSEA_BSE_CONFIG_0_BSE_MODE_SEL_DEFAULT                       _MK_MASK_CONST(0x5)
#define AVPBSEA_BSE_CONFIG_0_BSE_MODE_SEL_DEFAULT_MASK                  _MK_MASK_CONST(0x1f)
#define AVPBSEA_BSE_CONFIG_0_BSE_MODE_SEL_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define AVPBSEA_BSE_CONFIG_0_BSE_MODE_SEL_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)



// Register AVPBSEA_SECURE_DEST_ADDR_0
#define AVPBSEA_SECURE_DEST_ADDR_0                      _MK_ADDR_CONST(0x100)
#define AVPBSEA_SECURE_DEST_ADDR_0_SECURE                       0x0
#define AVPBSEA_SECURE_DEST_ADDR_0_WORD_COUNT                   0x1
#define AVPBSEA_SECURE_DEST_ADDR_0_RESET_VAL                    _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_DEST_ADDR_0_RESET_MASK                   _MK_MASK_CONST(0xffffffff)
#define AVPBSEA_SECURE_DEST_ADDR_0_SW_DEFAULT_VAL                       _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_DEST_ADDR_0_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_DEST_ADDR_0_READ_MASK                    _MK_MASK_CONST(0xffffffff)
#define AVPBSEA_SECURE_DEST_ADDR_0_WRITE_MASK                   _MK_MASK_CONST(0xffffffff)

#define AVPBSEA_SECURE_DEST_ADDR_0_SECURE_DEST_ADDR_SHIFT                       _MK_SHIFT_CONST(0)
#define AVPBSEA_SECURE_DEST_ADDR_0_SECURE_DEST_ADDR_FIELD                       _MK_FIELD_CONST(0xffffffff, AVPBSEA_SECURE_DEST_ADDR_0_SECURE_DEST_ADDR_SHIFT)
#define AVPBSEA_SECURE_DEST_ADDR_0_SECURE_DEST_ADDR_RANGE                       31:0
#define AVPBSEA_SECURE_DEST_ADDR_0_SECURE_DEST_ADDR_WOFFSET                     0x0
#define AVPBSEA_SECURE_DEST_ADDR_0_SECURE_DEST_ADDR_DEFAULT                     _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_DEST_ADDR_0_SECURE_DEST_ADDR_DEFAULT_MASK                        _MK_MASK_CONST(0xffffffff)
#define AVPBSEA_SECURE_DEST_ADDR_0_SECURE_DEST_ADDR_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_DEST_ADDR_0_SECURE_DEST_ADDR_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)



// Register AVPBSEA_SECURE_INPUT_SELECT_0
#define AVPBSEA_SECURE_INPUT_SELECT_0                   _MK_ADDR_CONST(0x104)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_INPUT_ALG_SEL_SHIFT                        _MK_SHIFT_CONST(28)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_INPUT_ALG_SEL_FIELD                        _MK_FIELD_CONST(0xf, AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_INPUT_ALG_SEL_SHIFT)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_INPUT_ALG_SEL_RANGE                        31:28
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_INPUT_ALG_SEL_WOFFSET                      0x0
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_INPUT_ALG_SEL_DEFAULT                      _MK_MASK_CONST(0x1)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_INPUT_ALG_SEL_DEFAULT_MASK                 _MK_MASK_CONST(0xf)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_INPUT_ALG_SEL_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_INPUT_ALG_SEL_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)

#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_KEY_LENGTH_SHIFT                   _MK_SHIFT_CONST(16)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_KEY_LENGTH_FIELD                   _MK_FIELD_CONST(0xfff, AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_KEY_LENGTH_SHIFT)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_KEY_LENGTH_RANGE                   27:16
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_KEY_LENGTH_WOFFSET                 0x0
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_KEY_LENGTH_DEFAULT                 _MK_MASK_CONST(0x80)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_KEY_LENGTH_DEFAULT_MASK                    _MK_MASK_CONST(0xfff)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_KEY_LENGTH_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_KEY_LENGTH_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)

#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_MTM2KEY_ENB_RANGE                  12:12

#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_RNG_ENB_SHIFT                      _MK_SHIFT_CONST(11)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_RNG_ENB_FIELD                      _MK_FIELD_CONST(0x1, AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_RNG_ENB_SHIFT)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_RNG_ENB_RANGE                      11:11
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_RNG_ENB_WOFFSET                    0x0
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_RNG_ENB_DEFAULT                    _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_RNG_ENB_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_RNG_ENB_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_RNG_ENB_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)

#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_IV_SELECT_SHIFT                    _MK_SHIFT_CONST(10)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_IV_SELECT_FIELD                    _MK_FIELD_CONST(0x1, AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_IV_SELECT_SHIFT)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_IV_SELECT_RANGE                    10:10
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_IV_SELECT_WOFFSET                  0x0
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_IV_SELECT_DEFAULT                  _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_IV_SELECT_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_IV_SELECT_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_IV_SELECT_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)

#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_CORE_SEL_SHIFT                     _MK_SHIFT_CONST(9)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_CORE_SEL_FIELD                     _MK_FIELD_CONST(0x1, AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_CORE_SEL_SHIFT)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_CORE_SEL_RANGE                     9:9
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_CORE_SEL_WOFFSET                   0x0
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_CORE_SEL_DEFAULT                   _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_CORE_SEL_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_CORE_SEL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_CORE_SEL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)

#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_VCTRAM_SEL_SHIFT                   _MK_SHIFT_CONST(7)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_VCTRAM_SEL_FIELD                   _MK_FIELD_CONST(0x3, AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_VCTRAM_SEL_SHIFT)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_VCTRAM_SEL_RANGE                   8:7
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_VCTRAM_SEL_WOFFSET                 0x0
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_VCTRAM_SEL_DEFAULT                 _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_VCTRAM_SEL_DEFAULT_MASK                    _MK_MASK_CONST(0x3)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_VCTRAM_SEL_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_VCTRAM_SEL_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)

#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_INPUT_SEL_SHIFT                    _MK_SHIFT_CONST(5)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_INPUT_SEL_FIELD                    _MK_FIELD_CONST(0x3, AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_INPUT_SEL_SHIFT)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_INPUT_SEL_RANGE                    6:5
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_INPUT_SEL_WOFFSET                  0x0
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_INPUT_SEL_DEFAULT                  _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_INPUT_SEL_DEFAULT_MASK                     _MK_MASK_CONST(0x3)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_INPUT_SEL_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_INPUT_SEL_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)

#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_XOR_POS_SHIFT                      _MK_SHIFT_CONST(3)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_XOR_POS_FIELD                      _MK_FIELD_CONST(0x3, AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_XOR_POS_SHIFT)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_XOR_POS_RANGE                      4:3
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_XOR_POS_WOFFSET                    0x0
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_XOR_POS_DEFAULT                    _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_XOR_POS_DEFAULT_MASK                       _MK_MASK_CONST(0x3)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_XOR_POS_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_XOR_POS_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)

#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_HASH_ENB_SHIFT                     _MK_SHIFT_CONST(2)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_HASH_ENB_FIELD                     _MK_FIELD_CONST(0x1, AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_HASH_ENB_SHIFT)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_HASH_ENB_RANGE                     2:2
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_HASH_ENB_WOFFSET                   0x0
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_HASH_ENB_DEFAULT                   _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_HASH_ENB_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_HASH_ENB_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_SECURE_HASH_ENB_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)

#define AVPBSEA_SECURE_INPUT_SELECT_0_ON_THE_FLY_ENB_SHIFT                      _MK_SHIFT_CONST(0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_ON_THE_FLY_ENB_FIELD                      _MK_FIELD_CONST(0x1, AVPBSEA_SECURE_INPUT_SELECT_0_ON_THE_FLY_ENB_SHIFT)
#define AVPBSEA_SECURE_INPUT_SELECT_0_ON_THE_FLY_ENB_RANGE                      0:0
#define AVPBSEA_SECURE_INPUT_SELECT_0_ON_THE_FLY_ENB_WOFFSET                    0x0
#define AVPBSEA_SECURE_INPUT_SELECT_0_ON_THE_FLY_ENB_DEFAULT                    _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_ON_THE_FLY_ENB_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define AVPBSEA_SECURE_INPUT_SELECT_0_ON_THE_FLY_ENB_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_INPUT_SELECT_0_ON_THE_FLY_ENB_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)



// Register AVPBSEA_SECURE_SEC_SEL0_0
#define AVPBSEA_SECURE_SEC_SEL0_0                       _MK_ADDR_CONST(0x140)
#define AVPBSEA_SECURE_SEC_SEL0_0_KEYREAD_ENB0_SHIFT                    _MK_SHIFT_CONST(0)
#define AVPBSEA_SECURE_SEC_SEL0_0_KEYREAD_ENB0_FIELD                    _MK_FIELD_CONST(0x1, AVPBSEA_SECURE_SEC_SEL0_0_KEYREAD_ENB0_SHIFT)
#define AVPBSEA_SECURE_SEC_SEL0_0_KEYREAD_ENB0_RANGE                    0:0
#define AVPBSEA_SECURE_SEC_SEL0_0_KEYREAD_ENB0_WOFFSET                  0x0
#define AVPBSEA_SECURE_SEC_SEL0_0_KEYREAD_ENB0_DEFAULT                  _MK_MASK_CONST(0x1)
#define AVPBSEA_SECURE_SEC_SEL0_0_KEYREAD_ENB0_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define AVPBSEA_SECURE_SEC_SEL0_0_KEYREAD_ENB0_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define AVPBSEA_SECURE_SEC_SEL0_0_KEYREAD_ENB0_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)

#if defined(__cplusplus)
}
#endif

#endif  /*  ___ARAVP_BSEA_T30_H_INC_ */