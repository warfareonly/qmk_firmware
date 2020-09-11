#pragma once

// #include QMK_KEYBOARD_H
#include "hookah.h"
#include "quantum.h"
// This a shortcut to help you visually see your layout.
// There are a number of variations depending on the layout of your bottom row.
// The arrow variant adds an additional key on the bottom-right, while the
// command variant adds an additional key on the bottom-left. arrow-command is a
// combination of both of those, having an additional key on both sides.
//
// Please note that the numbering of the macro arguments are based on the
// numbers of the keys on the PCB.

#define LAYOUT_split_3x5_3( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09,  \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19,  \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29,  \
              K32, K33, K34, K35, K36, K37             \
) \
{ \
    { K00,      K01,    K02,   K03,   K04,   K05,   K06,   K07,   K08,     K09 }, \
    { K10,      K11,    K12,   K13,   K14,   K15,   K16,   K17,   K18,     K19 }, \
    { K20,      K21,    K22,   K23,   K24,   K25,   K26,   K27,   K28,     K29 }, \
    { KC_NO,   KC_NO,   K32,   K33,   K34,   K35,   K36,   K37,   KC_NO,   KC_NO }  \
}
