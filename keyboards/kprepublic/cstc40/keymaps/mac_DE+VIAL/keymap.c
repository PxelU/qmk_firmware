/* Copyright 2023
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
#include "keymap_german_mac_iso.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | BLTog| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[0] = LAYOUT_planck_mit(
    KC_TAB,   DE_Q,     DE_W,     DE_E,     DE_R,     DE_T,    DE_Y,     DE_U,     DE_I,     DE_O,    DE_P,     KC_BSPC,
    KC_ESC,   DE_A,     DE_S,     DE_D,     DE_F,     DE_G,    DE_H,     DE_J,     DE_K,     DE_L,    DE_ODIA,  DE_ADIA,
    KC_LSFT,  DE_Z,     DE_X,     DE_C,     DE_V,     DE_B,    DE_N,     DE_M,     DE_COMM,  DE_DOT,  DE_MINS,  KC_ENT ,
    _______,  KC_LCTL,  KC_LALT,  KC_LGUI,  TL_LOWR,  KC_SPC,  TL_UPPR,  KC_LEFT,  KC_DOWN,  KC_UP,   KC_RGHT   
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO ~ |ISO | | Home | End  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[1] = LAYOUT_planck_mit(
    _______,  DE_EXLM,  DE_DQUO,    DE_HASH,  DE_DLR,   DE_PERC,  DE_LPRN,  DE_RPRN,     DE_SLSH,     DE_EURO,  KC_QUES,  KC_BSPC,
    KC_DEL,   DE_AMPR,  DE_QUOT,    DE_ASTR,    DE_PLUS,    DE_EQL,    DE_LBRC,    DE_RBRC,     DE_BSLS,     DE_AT,  DE_UDIA,  _______,
    _______,  DE_TILD,  DE_PIPE,    DE_LABK,    DE_RABK,   DE_CIRC,   DE_LCBR,   DE_RCBR,  DE_GRV,  _______, DE_SS ,   _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MNXT,     KC_VOLD,     KC_VOLU,  KC_MPLY   
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / |Pg Up |Pg Dn |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[2] = LAYOUT_planck_mit(
    KC_GRV,   _______,  KC_7,     KC_8,     KC_9,   _______,     _______,     _______,     _______,     _______,    _______,     KC_BSPC,
    KC_DEL,   _______,  KC_4,    KC_5,    KC_6,    _______,    _______,    KC_LEFT,  KC_UP,   KC_DOWN,  KC_RIGHT,  _______,
    _______,  DE_0,     DE_1,    KC_2,    KC_3,   _______,   _______,   KC_HOME,  KC_PGUP,  KC_PGDN,  KC_END,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_MNXT,  KC_VOLD,  KC_VOLU,  KC_MPLY   
),

/* Adjust (Lower + Raise)
 *                      v------------------------RGB CONTROL--------------------v
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|Debug | RGB  |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-|  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[3] = LAYOUT_planck_mit(
    _______,  QK_BOOT,  DB_TOGG,  RGB_TOG,  RGB_MOD,  RGB_HUI,  RGB_HUD,  RGB_SAI,  RGB_SAD,  RGB_VAI,  RGB_VAD,  KC_DEL,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______   
)

};
