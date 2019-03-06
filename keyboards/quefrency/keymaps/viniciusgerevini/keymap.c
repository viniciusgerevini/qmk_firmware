#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1
#define _FN2 2
#define _COLOR 3

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_65(
    KC_GRV, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_NO,  KC_BSPC, KC_HOME, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_END, \
    KC_ESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_PGUP, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_PGDN, \
    KC_LCTL, MO(_FN1), KC_LGUI, KC_LALT, KC_SPC,           KC_SPC,  KC_NO,   KC_RGUI, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [_FN1] = LAYOUT_65(
    KC_ESC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,  KC_DEL, KC_MPLY, \
    RGB_TOG, RGB_MOD, KC_UP, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MUTE, \
    KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, _______, _______, KC_BRIU, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLU, KC_BRID, \
    _______, _______, _______, _______, _______,          _______, _______, TG(_FN2), TG(_COLOR), _______, KC_MPRV, KC_VOLD, KC_MNXT
  ),

  [_FN2] = LAYOUT_65(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, KC_LALT, KC_LGUI, _______,          _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_COLOR] = LAYOUT_65(
    _______, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, _______, _______, _______, _______, _______, _______, \
    RGB_TOG, RGB_MOD, RGB_RMOD, RGB_HUI, RGB_HUD, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, RGB_SAI, RGB_SAD, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, RGB_VAI, RGB_VAD, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______
  )

  /* [_FN2] = LAYOUT_65( */
  /*   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \ */
  /*   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \ */
  /*   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \ */
  /*   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \ */
  /*   _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______ */
  /* ) */
};
