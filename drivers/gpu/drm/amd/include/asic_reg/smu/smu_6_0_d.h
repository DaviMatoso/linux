/*
 *
 * Copyright (C) 2016 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
 * AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef SMU_6_0_D_H
#define SMU_6_0_D_H

#define ixLCAC_MC0_CNTL 0x011C
#define ixLCAC_MC0_OVR_SEL 0x011D
#define ixLCAC_MC0_OVR_VAL 0x011E
#define ixLCAC_MC1_CNTL 0x011F
#define ixLCAC_MC1_OVR_SEL 0x0120
#define ixLCAC_MC1_OVR_VAL 0x0121
#define ixLCAC_MC2_CNTL 0x0122
#define ixLCAC_MC2_OVR_SEL 0x0123
#define ixLCAC_MC2_OVR_VAL 0x0124
#define ixLCAC_MC3_CNTL 0x0125
#define ixLCAC_MC3_OVR_SEL 0x0126
#define ixLCAC_MC3_OVR_VAL 0x0127
#define ixLCAC_MC4_CNTL 0x0128
#define ixLCAC_MC4_OVR_SEL 0x0129
#define ixLCAC_MC4_OVR_VAL 0x012A
#define ixLCAC_MC5_CNTL 0x012B
#define ixLCAC_MC5_OVR_SEL 0x012C
#define ixLCAC_MC5_OVR_VAL 0x012D

#define mmCG_SPLL_FUNC_CNTL				0x0180
#define mmCG_SPLL_FUNC_CNTL_2				0x0181
#define mmCG_SPLL_FUNC_CNTL_3				0x0182
#define mmCG_SPLL_FUNC_CNTL_4				0x0183
#define mmCG_SPLL_STATUS					0x0185
#define mmSPLL_CNTL_MODE					0x0186
#define mmCG_SPLL_SPREAD_SPECTRUM				0x0188
#define mmCG_SPLL_SPREAD_SPECTRUM_2			0x0189
#define mmCG_SPLL_AUTOSCALE_CNTL				0x018B
#define mmMPLL_BYPASSCLK_SEL				0x0197
#define mmCG_CLKPIN_CNTL                                    0x0198
#define mmCG_CLKPIN_CNTL_2                                  0x0199
#define mmTHM_CLK_CNTL					0x019B
#define mmMISC_CLK_CNTL					0x019C
#define mmCG_THERMAL_CTRL					0x01C0
#define mmCG_THERMAL_STATUS				0x01C1
#define mmCG_THERMAL_INT					0x01C2
#define mmCG_MULT_THERMAL_CTRL					0x01C4
#define mmCG_MULT_THERMAL_STATUS					0x01C5
#define mmCG_FDO_CTRL0					0x01D5
#define mmCG_FDO_CTRL1					0x01D6
#define mmCG_FDO_CTRL2					0x01D7
#define mmCG_TACH_CTRL                                    0x01DC
#define mmCG_TACH_STATUS                                  0x01DD
#define mmGENERAL_PWRMGT                                  0x1E0
#define mmCG_TPC                                            0x1E1
#define mmSCLK_PWRMGT_CNTL                                  0x1E2
#define mmTARGET_AND_CURRENT_PROFILE_INDEX                  0x01E6
#define mmCG_FTV                                            0x01EF
#define mmCG_FFCT_0                                         0x01F0
#define mmCG_BSP                                          0x01FF
#define mmCG_AT                                           0x0200
#define mmCG_GIT                                          0x0201
#define mmCG_SSP                                            0x0203
#define mmCG_DISPLAY_GAP_CNTL                               0x020A
#define mmCG_ULV_CONTROL					0x021E
#define mmCG_ULV_PARAMETER				0x021F
#define mmSMC_SCRATCH0					0x0221
#define mmCG_CAC_CTRL					0x022E

#define ixSMC_PC_C 0x80000370

#define ixTHM_TMON0_DEBUG 0x03F0
#define ixTHM_TMON0_INT_DATA 0x0380
#define ixTHM_TMON0_RDIL0_DATA 0x0300
#define ixTHM_TMON0_RDIL10_DATA 0x030A
#define ixTHM_TMON0_RDIL11_DATA 0x030B
#define ixTHM_TMON0_RDIL12_DATA 0x030C
#define ixTHM_TMON0_RDIL13_DATA 0x030D
#define ixTHM_TMON0_RDIL14_DATA 0x030E
#define ixTHM_TMON0_RDIL15_DATA 0x030F
#define ixTHM_TMON0_RDIL1_DATA 0x0301
#define ixTHM_TMON0_RDIL2_DATA 0x0302
#define ixTHM_TMON0_RDIL3_DATA 0x0303
#define ixTHM_TMON0_RDIL4_DATA 0x0304
#define ixTHM_TMON0_RDIL5_DATA 0x0305
#define ixTHM_TMON0_RDIL6_DATA 0x0306
#define ixTHM_TMON0_RDIL7_DATA 0x0307
#define ixTHM_TMON0_RDIL8_DATA 0x0308
#define ixTHM_TMON0_RDIL9_DATA 0x0309
#define ixTHM_TMON0_RDIR0_DATA 0x0310
#define ixTHM_TMON0_RDIR10_DATA 0x031A
#define ixTHM_TMON0_RDIR11_DATA 0x031B
#define ixTHM_TMON0_RDIR12_DATA 0x031C
#define ixTHM_TMON0_RDIR13_DATA 0x031D
#define ixTHM_TMON0_RDIR14_DATA 0x031E
#define ixTHM_TMON0_RDIR15_DATA 0x031F
#define ixTHM_TMON0_RDIR1_DATA 0x0311
#define ixTHM_TMON0_RDIR2_DATA 0x0312
#define ixTHM_TMON0_RDIR3_DATA 0x0313
#define ixTHM_TMON0_RDIR4_DATA 0x0314
#define ixTHM_TMON0_RDIR5_DATA 0x0315
#define ixTHM_TMON0_RDIR6_DATA 0x0316
#define ixTHM_TMON0_RDIR7_DATA 0x0317
#define ixTHM_TMON0_RDIR8_DATA 0x0318
#define ixTHM_TMON0_RDIR9_DATA 0x0319
#define ixTHM_TMON1_DEBUG 0x03F1
#define ixTHM_TMON1_INT_DATA 0x0381
#define ixTHM_TMON1_RDIL0_DATA 0x0320
#define ixTHM_TMON1_RDIL10_DATA 0x032A
#define ixTHM_TMON1_RDIL11_DATA 0x032B
#define ixTHM_TMON1_RDIL12_DATA 0x032C
#define ixTHM_TMON1_RDIL13_DATA 0x032D
#define ixTHM_TMON1_RDIL14_DATA 0x032E
#define ixTHM_TMON1_RDIL15_DATA 0x032F
#define ixTHM_TMON1_RDIL1_DATA 0x0321
#define ixTHM_TMON1_RDIL2_DATA 0x0322
#define ixTHM_TMON1_RDIL3_DATA 0x0323
#define ixTHM_TMON1_RDIL4_DATA 0x0324
#define ixTHM_TMON1_RDIL5_DATA 0x0325
#define ixTHM_TMON1_RDIL6_DATA 0x0326
#define ixTHM_TMON1_RDIL7_DATA 0x0327
#define ixTHM_TMON1_RDIL8_DATA 0x0328
#define ixTHM_TMON1_RDIL9_DATA 0x0329
#define ixTHM_TMON1_RDIR0_DATA 0x0330
#define ixTHM_TMON1_RDIR10_DATA 0x033A
#define ixTHM_TMON1_RDIR11_DATA 0x033B
#define ixTHM_TMON1_RDIR12_DATA 0x033C
#define ixTHM_TMON1_RDIR13_DATA 0x033D
#define ixTHM_TMON1_RDIR14_DATA 0x033E
#define ixTHM_TMON1_RDIR15_DATA 0x033F
#define ixTHM_TMON1_RDIR1_DATA 0x0331
#define ixTHM_TMON1_RDIR2_DATA 0x0332
#define ixTHM_TMON1_RDIR3_DATA 0x0333
#define ixTHM_TMON1_RDIR4_DATA 0x0334
#define ixTHM_TMON1_RDIR5_DATA 0x0335
#define ixTHM_TMON1_RDIR6_DATA 0x0336
#define ixTHM_TMON1_RDIR7_DATA 0x0337
#define ixTHM_TMON1_RDIR8_DATA 0x0338
#define ixTHM_TMON1_RDIR9_DATA 0x0339

#define mmGPIOPAD_A 0x05E7
#define mmGPIOPAD_EN 0x05E8
#define mmGPIOPAD_EXTERN_TRIG_CNTL 0x05F1
#define mmGPIOPAD_INT_EN 0x05EE
#define mmGPIOPAD_INT_POLARITY 0x05F0
#define mmGPIOPAD_INT_STAT 0x05EC
#define mmGPIOPAD_INT_STAT_AK 0x05ED
#define mmGPIOPAD_INT_STAT_EN 0x05EB
#define mmGPIOPAD_INT_TYPE 0x05EF
#define mmGPIOPAD_MASK 0x05E6
#define mmGPIOPAD_PD_EN 0x05F4
#define mmGPIOPAD_PINSTRAPS 0x05EA
#define mmGPIOPAD_PU_EN 0x05F3
#define mmGPIOPAD_RCVR_SEL 0x05F2
#define mmGPIOPAD_STRENGTH 0x05E5
#define mmGPIOPAD_SW_INT_STAT 0x05E4
#define mmGPIOPAD_Y 0x05E9

#define mmSMC_IND_ACCESS_CNTL 0x008A
#define mmSMC_IND_DATA_0 0x0081
#define mmSMC_IND_DATA 0x0081
#define mmSMC_IND_DATA_1 0x0083
#define mmSMC_IND_DATA_2 0x0085
#define mmSMC_IND_DATA_3 0x0087
#define mmSMC_IND_INDEX_0 0x0080
#define mmSMC_IND_INDEX 0x0080
#define mmSMC_IND_INDEX_1 0x0082
#define mmSMC_IND_INDEX_2 0x0084
#define mmSMC_IND_INDEX_3 0x0086
#define mmSMC_MESSAGE_0 0x008B
#define mmSMC_MESSAGE_1 0x008D
#define mmSMC_MESSAGE_2 0x008F
#define mmSMC_RESP_0 0x008C
#define mmSMC_RESP_1 0x008E
#define mmSMC_RESP_2 0x0090

#endif
