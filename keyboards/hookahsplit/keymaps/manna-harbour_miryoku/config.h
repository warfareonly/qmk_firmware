
#pragma once

#define XXX KC_NO

#define LAYOUT_miryoku( \
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N32, N31, K32, K33, K34,                          K35, K36, K37, N38, N39\
) \
LAYOUT( \
XXX, XXX, K01, K02, K03, K04,                          XXX, XXX, K08, K07, K06, K05, \
K00, K10, K11, K12, K13, K14,                          K09, K19, K18, K17, K16, K15, \
XXX, K20, K21, K22, K23, K24,                          XXX, K29, K28, K27, K26, K25, \
               K32, K33, K34,                          K37, K36, K35 \
)
