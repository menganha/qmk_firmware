#include QMK_KEYBOARD_H

#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------------.
 * | ` ~ |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |   Bkspc   |
 * |-----------------------------------------------------------------------------------------+
 * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
 * |-----------------------------------------------------------------------------------------+
 * | Esc     |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
 * |-----------------------------------------------------------------------------------------+
 * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  | RSh |  U  | FN  |
 * |-----------------------------------------------------------------------------------------+
 * | Ctrl |  Alt  |  Cmd  |              Space                | Cmd | RAlt |  L  |  D  |  R  |
 * `-----------------------------------------------------------------------------------------'
 */

  LAYOUT_directional(
      KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, ______, KC_BSPC,
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
      LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, MO(1),
      KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_SPC, KC_SPC, KC_ALGR, KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT
      ),

/* FN Layer
 * ,-----------------------------------------------------------------------------------------.
 * |RGBTOG|  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 |  F10 |  F11  |  F12 |  DEL |
 * |-----------------------------------------------------------------------------------------+
 * |        |     |     |     |     |     |     |     |     |     |     |      |      |      |
 * |-----------------------------------------------------------------------------------------+
 * |         |     | Vol-| Vol+| MUTE|     |     |     |     |     |     |     |             |
 * |-----------------------------------------------------------------------------------------+
 * |           |     |     |     |     |     |     |     |     |     |     | Del | PgUp|     |
 * |-----------------------------------------------------------------------------------------+
 * |      |       |       |                                    |     |     | Home| PgDn| End |
 * `-----------------------------------------------------------------------------------------'
 */

  LAYOUT_directional(
      RGB_TOG, KC_F1, KC_F2,  KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, ______, KC_DEL,
      ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
      ______, ______, KC_VOLD, KC_VOLU, KC_MUTE,______, ______, ______, ______, ______, ______, ______,
      ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, KC_DEL, KC_PGUP, ______,
      RESET, ______, ______, ______, ______, ______, ______, ______, KC_HOME, KC_PGDN, KC_END
      ),
};
