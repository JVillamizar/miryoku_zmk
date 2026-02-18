#pragma once

#if !defined (MIRYOKU_LAYOUTMAPPING_SCOTTOWING)
#define MIRYOKU_LAYOUTMAPPING_SCOTTOWING( \
K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, \
T0L, T1L, T1R, T0R \
) \
/* 4×12 physical matrix positions.
   For 3×5-per-half Miryoku, pad outer columns with U_NP (=&none). */ \
U_NP  K00  K01  K02  K03  K04  K05  K06  K07  K08  K09  U_NP \
U_NP  K10  K11  K12  K13  K14  K15  K16  K17  K18  K19  U_NP \
U_NP  K20  K21  K22  K23  K24  K25  K26  K27  K28  K29  U_NP \
/* Thumb row (4 keys total in the shield transform): */ \
T0L  T1L  T1R  T0R

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_SCOTTOWING
