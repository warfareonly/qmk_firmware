/* Copyright 2019 John M Daly <jmdaly@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// This file is based on the default keyman the the MiniVan.


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum layer_names {
    _QW,
    _DV,
    _CM,
    _L1,
    _L2,
    _L3,
};

// Curly braces have their own keys. These are defined to make them not mess up
// the grid in layer 2.
#define L_CURBR LSFT(KC_LBRC)
#define R_CURBR LSFT(KC_RBRC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QW] = LAYOUT_split_3x5_3( /* Qwerty */
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,                                    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,                                    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,                                    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,
                                        KC_D,    KC_S,    KC_V,   KC_B,  KC_N,    KC_M
)
};

uint32_t layer_state_set_user(uint32_t state){
  rgblight_setrgb(RGB_ORANGE);
  return state;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  rgblight_setrgb(RGB_ORANGE);
  return true;
}

void led_set_user(uint8_t usb_led) {
    rgblight_sethsv_noeeprom_orange();
}
