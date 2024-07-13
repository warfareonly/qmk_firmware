#include "keymap.h"

// Bharat-SFT-CODE
#define B_S_C(x) TD_##x##_##SFT
// Bharat-TAP-Shifted
#define B_T_S(x) [B_S_C(x)] = ACTION_TAP_DANCE_DOUBLE(KC_##x, LSFT(KC_##x))

enum {
    B_S_C(LBRC),
    B_S_C(SCLN),
    B_S_C(GRV),
    B_S_C(DOT),
    B_S_C(7),
    B_S_C(4),
    B_S_C(1),
    B_S_C(0),
    B_S_C(8),
    B_S_C(5),
    B_S_C(2),
    B_S_C(MINS),
    B_S_C(9),
    B_S_C(6),
    B_S_C(3),
    B_S_C(RBRC),
    B_S_C(EQL),
    B_S_C(BSLS),
};
qk_tap_dance_action_t tap_dance_actions[] = {
    B_T_S(LBRC), B_T_S(SCLN), B_T_S(GRV), B_T_S(DOT), B_T_S(7), B_T_S(4), B_T_S(1), B_T_S(0), B_T_S(8), B_T_S(5), B_T_S(2), B_T_S(MINS), B_T_S(9), B_T_S(6), B_T_S(3), B_T_S(RBRC), B_T_S(EQL), B_T_S(BSLS),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[BASE] = LAYOUT_miryoku(KC_NP, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, KC_NP, KC_NP, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_M, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O), KC_NP, KC_NP, KC_Z, ALGR_T(KC_X), KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, ALGR_T(KC_DOT), LT(HC, KC_SLSH), KC_NP, LT(MEDR, KC_ESC), LT(NAVR, KC_SPC), LT(MOUR, KC_TAB), LT(NSSL, KC_ENT), LT(NSL, KC_BSPC), LT(FUNL, KC_DEL), ),

#if defined MIRYOKU_NAV_VI
                                                              [NAVR] = LAYOUT_miryoku(KC_NP, KC_RST, KC_NA, KC_NA, KC_NA, KC_NA, KC_AGIN, KC_UNDO, KC_CUT, KC_COPY, KC_PSTE, KC_NP, KC_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_CAPS, KC_NP, KC_NP, KC_NA, KC_ALGR, KC_NA, KC_NA, KC_NA, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_INS, KC_NP, KC_NA, KC_NA, KC_NA, KC_ENT, KC_BSPC, KC_DEL),
                                                              [MOUR] = LAYOUT_miryoku(KC_NP, KC_RST, KC_NA, KC_NA, KC_NA, KC_NA, KC_NU, KC_NU, KC_NU, KC_NU, KC_NU, KC_NP, KC_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NU, KC_NP, KC_NP, KC_NA, KC_ALGR, KC_NA, KC_NA, KC_NA, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NU, KC_NP, KC_NA, KC_NA, KC_NA, KC_BTN1, KC_BTN3, KC_BTN2),
                                                              [MEDR] = LAYOUT_miryoku(KC_NP, KC_RST, KC_NA, KC_NA, KC_NA, KC_NA, KC_TOG, KC_MOD, KC_HUI, KC_SAI, KC_VAI, KC_NP, KC_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA, KC_NU, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NP, KC_NP, KC_NA, KC_ALGR, KC_NA, KC_NA, KC_NA, KC_NU, KC_NU, KC_NU, KC_NU, KC_NU, KC_NP, KC_NA, KC_NA, KC_NA, KC_MSTP, KC_MPLY, KC_MUTE),
#else
                                                              [NAVR] = LAYOUT_miryoku(KC_NP, KC_RST, KC_NA, KC_NA, KC_NA, KC_NA, KC_AGIN, KC_UNDO, KC_CUT, KC_COPY, KC_PSTE, KC_NP, KC_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NP, KC_NP, KC_NA, KC_ALGR, KC_NA, KC_NA, KC_NA, KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NP, KC_NA, KC_NA, KC_NA, KC_ENT, KC_BSPC, KC_DEL)[MOUR] = LAYOUT_miryoku(KC_NP, KC_RST, KC_NA, KC_NA, KC_NA, KC_NA, KC_NU, KC_NU, KC_NU, KC_NU, KC_NU, KC_NP, KC_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA, KC_NU, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NP, KC_NP, KC_NA, KC_ALGR, KC_NA, KC_NA, KC_NA, KC_NU, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NP, KC_NA, KC_NA, KC_NA, KC_BTN1, KC_BTN3, KC_BTN2),
                                                              [MEDR]                                                                                                                                                                                                                                                                                                                                                                      = LAYOUT_miryoku(KC_NP, KC_RST, KC_NA, KC_NA, KC_NA, KC_NA, KC_TOG, KC_MOD, KC_HUI, KC_SAI, KC_VAI, KC_NP, KC_NP, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA, KC_NU, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NP, KC_NP, KC_NA, KC_ALGR, KC_NA, KC_NA, KC_NA, KC_NU, KC_NU, KC_NU, KC_NU, KC_NU, KC_NP, KC_NA, KC_NA, KC_NA, KC_MSTP, KC_MPLY, KC_MUTE),
#endif
                                                              [MBO]  = LAYOUT_miryoku(KC_NP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NP, KC_NP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NP, KC_NP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NP, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2),
                                                              [FUNL] = LAYOUT_miryoku(KC_NP, KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR, KC_NA, KC_NA, KC_NA, KC_NA, KC_RST, KC_NP, KC_NP, KC_F11, KC_F4, KC_F5, KC_F6, KC_SLCK, KC_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NP, KC_NP, KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS, KC_NA, KC_NA, KC_NA, KC_ALGR, KC_NA, KC_NP, KC_APP, KC_SPC, KC_TAB, KC_NA, KC_NA, KC_NA),
                                                              [NSL]  = LAYOUT_miryoku(KC_NP, TD(B_S_C(LBRC)), TD(B_S_C(7)), TD(B_S_C(8)), TD(B_S_C(9)), TD(B_S_C(RBRC)), KC_NA, KC_NA, KC_NA, KC_NA, KC_RST, KC_NP, KC_NP, TD(B_S_C(SCLN)), TD(B_S_C(4)), TD(B_S_C(5)), TD(B_S_C(6)), TD(B_S_C(EQL)), KC_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NP, KC_NP, TD(B_S_C(GRV)), TD(B_S_C(1)), TD(B_S_C(2)), TD(B_S_C(3)), TD(B_S_C(BSLS)), KC_NA, KC_NA, KC_NA, KC_ALGR, KC_NA, KC_NP, TD(B_S_C(DOT)), TD(B_S_C(0)), TD(B_S_C(MINS)), KC_NA, KC_NA, KC_NA),
                                                              [NSSL] = LAYOUT_miryoku(KC_NP, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NA, KC_NA, KC_NA, KC_NA, KC_RST, KC_NP, KC_NP, KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, KC_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NP, KC_NP, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, KC_NA, KC_NA, KC_NA, KC_ALGR, KC_NA, KC_NP, KC_LPRN, KC_RPRN, KC_UNDS, KC_NA, KC_NA, KC_NA),
                                                              [HC]   = LAYOUT_miryoku(KC_NP, RGB_VAI, LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), KC_RBRC, KC_NA, KC_NA, KC_NA, KC_NA, KC_RST, KC_NP, KC_NP, RGB_HUI, LGUI(KC_4), LGUI(KC_5), LGUI(KC_6), KC_EQL, KC_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NP, KC_NP, RGB_TOG, LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), KC_BSLS, KC_NA, KC_NA, KC_NA, KC_ALGR, KC_NA, KC_NP, KC_DOT, KC_0, KC_MINS, KC_NA, KC_NA, KC_NA)};
