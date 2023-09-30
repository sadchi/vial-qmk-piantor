// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

#define KC_LG_RBR LGUI_T(KC_RBRC)
#define KC_LC_GRV LCTL_T(KC_GRV)
#define KC_LA_BCL LALT_T(KC_BSLS)

#define KC_RG_LBR RGUI_T(KC_LBRC)
#define KC_RC_QUO RCTL_T(KC_QUOT)
#define KC_RA_MIN RALT_T(KC_MINUS)

#define KC_L2_TAB LT(2,KC_TAB)
#define KC_LS_SPC LSFT_T(KC_SPC)
#define KC_L1_ENT LT(1,KC_ENT)

#define KC_L1_ESC LT(1,KC_ESC)
#define KC_RS_BSP RSFT_T(KC_BSPC)
#define KC_L2_DEL LT(2,KC_DEL)

#define KC_L3_TAB LT(3, KC_TAB)
#define KC_L3_DEL LT(3, KC_DEL)

#define KC_L3_ENT LT(3,KC_ENT)
#define KC_L3_ESC LT(3,KC_ESC)

#define KC_LG_NLC LGUI_T(KC_NLCK)
#define KC_LC_PPL LCTL_T(KC_PPLS)
#define KC_LA_EQL LALT_T(KC_EQL)

#define KC_LG__F1 LGUI_T(KC_F1)
#define KC_RG_F12 RGUI_T(KC_F12)


#define KC_LG_SCL LGUI_T(KC_SLCK)
#define KC_LC_PAU LCTL_T(KC_PAUS)
#define KC_LA_INS LALT_T(KC_INS)

#define KC_RG_CAP RGUI_T(KC_CAPS)
#define KC_RC_APP RCTL_T(KC_APP)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_3x6_3(
//┌──────────┬──────────┬──────────┬──────────┬──────────┬──────────┐                                   ┌──────────┬──────────┬──────────┬──────────┬──────────┬──────────┐
   KC_LG_RBR ,   KC_Q   ,   KC_W   ,   KC_E   ,   KC_R   ,   KC_T   ,                                       KC_Y   ,   KC_U   ,   KC_I   ,   KC_O   ,   KC_P   ,KC_RG_LBR ,
//├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤                                   ├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤ 
   KC_LC_GRV ,   KC_A   ,   KC_S   ,   KC_D   ,   KC_F   ,   KC_G   ,                                       KC_H   ,   KC_J   ,   KC_K   ,   KC_L   ,  KC_SCLN ,KC_RC_QUO ,
//├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤                                   ├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤ 
   KC_LA_BCL ,   KC_Z   ,   KC_X   ,   KC_C   ,   KC_V   ,   KC_B   ,                                       KC_N   ,   KC_M   ,  KC_COMM ,   KC_DOT,   KC_SLSH ,KC_RA_MIN ,
//└──────────┴──────────┴──────────┴──────────┼──────────┼──────────┼──────────┐             ┌──────────┼──────────┼──────────┼──────────┴──────────┴──────────┴──────────┘       
                                               KC_L2_TAB ,KC_LS_SPC , KC_L1_ENT,              KC_L1_ESC ,KC_RS_BSP ,KC_L2_DEL
                                           // └──────────┴──────────┴──────────┘             └──────────┴──────────┴──────────┘
    ),

    [1] = LAYOUT_split_3x6_3(
//┌──────────┬──────────┬──────────┬──────────┬──────────┬──────────┐                                   ┌──────────┬──────────┬──────────┬──────────┬──────────┬──────────┐
   KC_LG__F1 ,   KC_F2  ,   KC_F3  ,   KC_F4  ,   KC_F5  ,   KC_F6  ,                                       KC_F7  ,   KC_F8  ,   KC_F9  ,   KC_F10 ,   KC_F11 ,KC_RG_F12 ,
//├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤                                   ├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤ 
   KC_LC_PPL ,  KC_EXLM ,   KC_AT  ,  KC_HASH ,  KC_DLR  , KC_PERC  ,                                     KC_CIRC  , KC_AMPR  ,  KC_ASTR ,  KC_LPRN ,  KC_RPRN ,  KC_UNDS ,
//├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤                                   ├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤ 
   KC_LA_EQL ,   KC_1   ,   KC_2   ,   KC_3   ,   KC_4   ,   KC_5   ,                                       KC_6   ,   KC_7   ,   KC_8   ,   KC_9   ,   KC_0   ,KC_RA_MIN ,
//└──────────┴──────────┴──────────┴──────────┼──────────┼──────────┼──────────┐             ┌──────────┼──────────┼──────────┼──────────┴──────────┴──────────┴──────────┘       
                                               KC_L3_TAB , _______  , _______  ,               _______  , _______  ,KC_L3_DEL
                                           // └──────────┴──────────┴──────────┘             └──────────┴──────────┴──────────┘
    ),
    [2] = LAYOUT_split_3x6_3(
//┌──────────┬──────────┬──────────┬──────────┬──────────┬──────────┐                                   ┌──────────┬──────────┬──────────┬──────────┬──────────┬──────────┐
     _______ , _______  , KC_HOME  ,   KC_UP  , KC_PGUP  , _______  ,                                     _______  ,  KC_HOME ,  KC_UP   , KC_PGUP  ,  _______ ,  _______ ,
//├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤                                   ├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤ 
     KC_LCTL , _______  , KC_LEFT  , KC_DOWN  , KC_RGHT  , _______,                                       _______  ,  KC_LEFT , KC_DOWN  , KC_RGHT  ,  _______ ,  KC_RCTL ,
//├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤                                   ├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤ 
     KC_LALT , _______  ,  KC_END  ,   KC_P2  , KC_PGDN  , _______,                                       _______  ,  KC_END  ,  KC_PSCR , KC_PGDN  ,  _______ ,  KC_RALT ,
//└──────────┴──────────┴──────────┴──────────┼──────────┼──────────┼──────────┐             ┌──────────┼──────────┼──────────┼──────────┴──────────┴──────────┴──────────┘  
                                                _______  ,KC_RS_BSP ,   KC_ENT ,                 KC_ENT ,KC_RS_BSP , _______
                                           // └──────────┴──────────┴──────────┘             └──────────┴──────────┴──────────┘
    ),
    [3] = LAYOUT_split_3x6_3(
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
    )
};

