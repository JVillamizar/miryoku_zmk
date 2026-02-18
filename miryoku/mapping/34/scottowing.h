#pragma once

#if !defined (MIRYOKU_LAYOUTMAPPING_SCOTTOWING)
#define XXX &none

// Standard Miryoku ZMK 40-argument signature (same pattern as corne/reviung41)
#define MIRYOKU_LAYOUTMAPPING_SCOTTOWING( \
K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, \
N30, N31, K32, K33, K34, K35, K36, K37, N38, N39 \
) \
/* ScottoWing has 12 columns per row, but your build is 3×5-per-half (10 keys/row).
   So we pad the outer columns with XXX, like the corne mapping does. */ \
XXX K00 K01 K02 K03 K04  K05 K06 K07 K08 K09 XXX \
XXX K10 K11 K12 K13 K14  K15 K16 K17 K18 K19 XXX \
XXX K20 K21 K22 K23 K24  K25 K26 K27 K28 K29 XXX \
/* Thumb row: ScottoWing exposes 4 thumb positions total.
   For standard Miryoku 34-key usage (2 thumbs per half), use the inner 2 per side:
   left  = K33 K34
   right = K35 K36
   (K32 and K37 will be &none under 34-key thumb tables.) */ \
K33 K34 K35 K36

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_SCOTTOWING
