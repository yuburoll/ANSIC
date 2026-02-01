#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ansik(
        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSPC, 
                KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                           KC_H,           KC_J,           KC_K,           KC_L,           LT(3,KC_SCLN), 
        KC_LSFT,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,         RSFT_T(KC_SLSH), 
        KC_LCTL,                                        KC_LALT,        KC_APP,         KC_SPC,         LT(1,KC_ENT),   KC_RALT,        KC_LGUI,                                LT(2,KC_DEL)),
    [1] = LAYOUT_ansik(
        KC_TAB,         KC_ESC,         KC_GRV,         KC_MINS,        KC_EQL,          KC_NO,          KC_7,           KC_8,           KC_9,           KC_0,           KC_UP,          KC_TRNS,
                KC_CAPS,        KC_BSLS,        KC_SCLN,        KC_QUOT,        KC_NO,                          KC_4,           KC_5,           KC_6,           KC_LEFT,        KC_RGHT, 
        KC_TRNS,        KC_SLSH,        KC_LBRC,        KC_RBRC,        KC_NO,          KC_NO,          KC_0,           KC_1,           KC_2,           KC_3,           KC_DOWN,        KC_RSFT, 
        KC_TRNS,                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_COMM,        KC_DOT,                                         KC_COMM),
    [2] = LAYOUT_ansik(
        KC_F1,          KC_F2,          KC_F3,          KC_F4,         KC_F5,           KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,  
                KC_INS,         KC_PSCR,        KC_SCRL,        KC_BRK,         KC_NO,                          KC_NO,          KC_PGUP,        KC_PGDN,        KC_HOME,        KC_END,  
        KC_TRNS,        OU_AUTO,        BT_PRF1,        BT_PRF2,        BT_PRF3,        BT_PRF4,        QK_BOOT,        QK_RBT,         KC_RGUI,        KC_APP,         KC_RALT,        KC_RCTL, 
        KC_TRNS,                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_NO,          KC_NO,          KC_TRNS,                                        KC_TRNS),
    [3] = LAYOUT_ansik(
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,       KC_TRNS,         KC_TRNS,        KC_NO,          MS_WHLU,        MS_BTN4,        MS_UP,          MS_BTN5,        QK_LLCK,  
                KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,                        MS_WHLL,        MS_WHLR,        MS_LEFT,        MS_RGHT,        KC_TRNS,  
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_NO,          MS_WHLD,        MS_BTN3,        MS_DOWN,        KC_NO,          KC_NO, 
        KC_TRNS,                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        MS_BTN1,        MS_BTN3,        MS_BTN2,                                        KC_NO)
};