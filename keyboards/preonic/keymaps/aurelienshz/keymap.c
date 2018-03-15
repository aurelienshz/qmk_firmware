/* Copyright 2015-2017 Jack Humbert
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

#include "preonic.h"
#include "action_layer.h"

enum preonic_layers {
  _QWERTY,
  _FN,
};
//
//enum preonic_keycodes {
//  QWERTY = SAFE_RANGE,
//  COLEMAK,
//  DVORAK,
//  LOWER,
//  RAISE,
//  BACKLIT
//};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty */
[_QWERTY] = {
  { KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,     KC_5,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC },
  { KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC },
  { KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,     KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT  },
  { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT },
  { KC_LCTL, MO(_FN), KC_LGUI, KC_LALT, KC_NUBS,  KC_SPC, KC_SPC,  KC_RALT, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT },
},


/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO ~ |ISO | |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_FN] = {
  { RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11 },
  { KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCREEN },
  { KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
  { KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
  { KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_MUTE, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END },
},

};
//
//bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//  switch (keycode) {
//        case QWERTY:
//          if (record->event.pressed) {
//            set_single_persistent_default_layer(_QWERTY);
//          }
//          return false;
//          break;
//        case COLEMAK:
//          if (record->event.pressed) {
//            set_single_persistent_default_layer(_COLEMAK);
//          }
//          return false;
//          break;
//        case DVORAK:
//          if (record->event.pressed) {
//            set_single_persistent_default_layer(_DVORAK);
//          }
//          return false;
//          break;
//        case LOWER:
//          if (record->event.pressed) {
//            layer_on(_LOWER);
//            update_tri_layer(_LOWER, _RAISE, _ADJUST);
//          } else {
//            layer_off(_LOWER);
//            update_tri_layer(_LOWER, _RAISE, _ADJUST);
//          }
//          return false;
//          break;
//        case RAISE:
//          if (record->event.pressed) {
//            layer_on(_RAISE);
//            update_tri_layer(_LOWER, _RAISE, _ADJUST);
//          } else {
//            layer_off(_RAISE);
//            update_tri_layer(_LOWER, _RAISE, _ADJUST);
//          }
//          return false;
//          break;
//        case BACKLIT:
//          if (record->event.pressed) {
//            register_code(KC_RSFT);
//            #ifdef BACKLIGHT_ENABLE
//              backlight_step();
//            #endif
//            PORTE &= ~(1<<6);
//          } else {
//            unregister_code(KC_RSFT);
//            PORTE |= (1<<6);
//          }
//          return false;
//          break;
//      }
//    return true;
//};
