// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0
#include QMK_KEYBOARD_H

#define DEF 0
#define LWR 1
#define RSE 2
#define PS 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [DEF] = LAYOUT_split_3x6_3(
   RWIN_T(KC_RBRC),    KC_Q,              KC_W,              KC_E,       KC_R,       KC_T,                  KC_Y,              KC_U,              KC_I,       KC_O,       KC_P,       RWIN_T(KC_LBRC),    
   LSFT_T(KC_GRV),     KC_A,              KC_S,              KC_D,       KC_F,       KC_G,                  KC_H,              KC_J,              KC_K,       KC_L,       KC_SCLN,    LSFT_T(KC_QUOT),    
   LCTL_T(KC_BSLS),    KC_Z,              KC_X,              KC_C,       KC_V,       KC_B,                  KC_N,              KC_M,              KC_COMM,    KC_DOT,     KC_SLSH,    LCTL_T(KC_MINS),    
   LT(RSE,KC_TAB),     LALT_T(KC_SPC),    LT(LWR,KC_ENT),                                                   LT(LWR,KC_ESC),    LALT_T(KC_BSPC),    LT(RSE,KC_DEL)
    ),    

    [LWR] = LAYOUT_split_3x6_3(
   LWIN_T(KC_ESC),     KC_KP_SLASH,       KC_7,              KC_8,       KC_9,       KC_PMNS,               KC_EXLM,           KC_AT,             KC_HASH,    KC_DLR,     KC_PERC,    KC_RWIN,    
   LSFT_T(KC_PEQL),    KC_PAST,           KC_4,              KC_5,       KC_6,       KC_PPLS,               KC_CIRC,           KC_AMPR,           KC_ASTR,    KC_LPRN,    KC_RPRN,    KC_LSFT,    
   LCTL_T(KC_COMM),    KC_0,              KC_1,              KC_2,       KC_3,       KC_DOT,                _______,           _______,           _______,    _______,    _______,    KC_LCTL,    
   MO(PS),             _______,           _______,                                                          _______,           _______,           MO(PS)
    ),    
    [RSE] = LAYOUT_split_3x6_3(
   LWIN_T(KC_ESC),     KC_INS,            KC_HOME,           KC_UP,      KC_PGUP,    KC_BSPC,               KC_F1,             KC_F2,             KC_F3,      KC_F4,      _______,    KC_RWIN,    
   KC_LSFT,            _______,           KC_LEFT,           KC_DOWN,    KC_RGHT,    KC_ENT,                KC_F5,             KC_F6,             KC_F7,      KC_F8,      _______,    KC_RSFT,    
   KC_LCTL,            KC_DEL,            KC_END,            _______,    KC_PGDN,    _______,               KC_F9,             KC_F10,            KC_F11,     KC_F12,     _______,    KC_RCTL,    
   _______,            LALT_T(KC_SPC),    KC_ENT,                                                           KC_ENT,            LALT_T(KC_BSPC),    _______
    ),    
    [PS] = LAYOUT_split_3x6_3(
   KC_LBRC,            KC_RBRC,           KC_W,              KC_E,       _______,    KC_T,                  KC_LBRC,           KC_RBRC,           KC_I,       KC_O,       KC_P,       LWIN_T(KC_ESC),    
   KC_LSFT,            KC_A,              KC_S,              KC_D,       KC_F,       KC_F3,                 _______,           KC_J,              KC_ASTR,    KC_L,       _______,    KC_LSFT,    
   KC_LCTL,            KC_Z,              KC_X,              KC_MINS,    KC_EQL,     KC_B,                  KC_0,              KC_1,              KC_2,       KC_3,       KC_4,       KC_LCTL,    
   KC_SPC,             KC_LALT,           KC_ENT,                                                           KC_ESC,            KC_LALT,           MO(DEF)
    )
};

