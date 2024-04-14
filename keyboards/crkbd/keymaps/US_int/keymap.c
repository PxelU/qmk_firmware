/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "keymap_us_international.h"



#define BASE_WIN 0
#define BASE_MAC 1
#define SYMBOL_LAYER 2
#define NAVIGATION_LAYER 3
#define UTILITY_LAYER 4


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE_MAC] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    US_Q,    US_W,    US_E,    US_R,    US_T,                         US_Z,    US_U,    US_I,    US_O,   US_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LGUI,    US_A,    US_S,    US_D,    US_F,    US_G,                         US_H,    US_J,    US_K,    US_L, ALGR(US_P), ALGR(US_Q),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    US_Y,    US_X,    US_C,    US_V,    US_B,                         US_N,    US_M, US_COMM,  US_DOT, US_MINS,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL,   MO(2),  KC_SPC,     KC_ENT,   MO(3), KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

    [BASE_WIN] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    US_Q,    US_W,    US_E,    US_R,    US_T,                         US_Z,    US_U,    US_I,    US_O,   US_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    US_A,    US_S,    US_D,    US_F,    US_G,                         US_H,    US_J,    US_K,    US_L, ALGR(US_P), ALGR(US_Q),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    US_Y,    US_X,    US_C,    US_V,    US_B,                         US_N,    US_M, US_COMM,  US_DOT, US_MINS,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(2),  KC_SPC,     KC_ENT,   MO(3), KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [SYMBOL_LAYER] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, US_EXLM, KC_QUOT, US_HASH,  US_DLR, US_PERC,                      US_LPRN, US_RPRN, US_SLSH, US_EURO, LSFT(KC_SLASH), KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       _______, US_AMPR, LSFT(KC_QUOT), US_ASTR, US_PLUS, KC_EQL ,                US_LBRC, US_RBRC, US_BSLS, US_AT  , ALGR(US_Y), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, US_DTIL, US_PIPE, US_LABK, US_RABK, US_DCIR,                      US_LCBR, US_RCBR, US_DGRV , XXXXXXX, US_SS  , XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           _______, _______,  KC_SPC,     KC_ENT,     MO(4), KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [NAVIGATION_LAYER] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX,    US_7,    US_8,    US_9,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       _______, XXXXXXX, XXXXXXX,    US_4,    US_5,    US_6,                      XXXXXXX, KC_LEFT,   KC_UP, KC_DOWN,KC_RIGHT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX,    US_0,    US_1,    US_2,    US_3,                      XXXXXXX, KC_HOME, KC_PGUP, KC_PGDN, KC_END , XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______,   MO(4),  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

      [UTILITY_LAYER] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX,DF(BASE_MAC), XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX,DF(BASE_WIN), XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case BASE_WIN:
            rgblight_sethsv(170, 255, 255);  // Blue color for Windows base layer (Hue: 170, Saturation: 255, Value: 255)
            break;
        case BASE_MAC:
            rgblight_sethsv(0, 80, 220);     // Gray color for Mac base layer (Hue: 0, Saturation: 80, Value: 220)
            break;
        case SYMBOL_LAYER:
            rgblight_sethsv(120, 255, 255);  // Green color for Symbol layer (example values, adjust as needed)
            break;
        case NAVIGATION_LAYER:
            rgblight_sethsv(30, 255, 255);   // Orange color for Navigation layer (example values, adjust as needed)
            break;
        case UTILITY_LAYER:
            rgblight_sethsv(180, 255, 255);  // Purple color for Utility layer (example values, adjust as needed)
            break;
        default:
            rgblight_sethsv(0, 0, 255);      // White color for other layers (Hue: 0, Saturation: 0, Value: 255)
            break;
    }

    // Adjust lighting layers to be active only when they are the highest active one
    // Repeat for other lighting layers if needed

    return state;
}

