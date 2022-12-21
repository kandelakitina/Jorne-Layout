#include QMK_KEYBOARD_H

#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_LAYER0] = LAYOUT(
 	MEH(OSM(MOD_MEH)), 	XXXXXXX, 	KC_Q, 		KC_W, 		KC_F,		KC_P, 		KC_B, 			KC_J, 		KC_L, 		KC_U, 		KC_Y, 		KC_DQUO, 	XXXXXXX, 		KC_LGUI, 
 						KC_TAB, 	LT(2,KC_A),	KC_R,		KC_S,		KC_T,		KC_G,			KC_M,		KC_N,		KC_E,		KC_I,		LT(2,KC_O),	KC_DEL,		
 						KC_LALT,	KC_Z,		KC_X,		KC_C,		KC_D,		KC_V,			KC_K,		KC_H,		KC_COMM,	KC_DOT,		KC_QUOT,	KC_RALT,
 						KC_LCTL, 	LSFT_T(KC_SPC),		LT(1,KC_ENT),								LT(1,KC_ESC),	RSFT_T(KC_BSPC),	KC_RCTL
),

[_LAYER1] = LAYOUT(
	XXXXXXX, 			XXXXXXX, 	XXXXXXX, 	KC_ASTR,	KC_LCBR,	KC_RCBR,	KC_PLUS,		KC_PERC,	KC_LBRC,	KC_RBRC,	KC_PIPE,	XXXXXXX,		XXXXXXX,		XXXXXXX,
						XXXXXXX,	KC_CIRC,	KC_AMPR,	KC_QUES,	KC_EXLM,	KC_EQL,			KC_BSLS,	KC_SCLN,	KC_COLN,	KC_SLSH,	KC_HASH,		XXXXXXX,		
						XXXXXXX,	XXXXXXX,	KC_UNDS,	KC_GRV,		KC_AT,		KC_MINS,		KC_TILD,	KC_LPRN,	KC_RPRN,	KC_DLR,		XXXXXXX,		XXXXXXX,
						_______,	_______,	_______, 											_______, _______, _______
),

[_LAYER2] = LAYOUT(
	_______,			KC_NUM,		XXXXXXX,	KC_7,		KC_8,		KC_9,		_______,		KC_VOLU, 	KC_HOME, 	KC_UP,   	KC_PGUP, 	KC_SCRL,   	KC_CAPS,	_______, 
						XXXXXXX,   	KC_0,		KC_4,		KC_5,   	KC_6,    	_______,       	KC_MUTE, 	KC_LEFT, 	KC_DOWN, 	KC_RGHT, 	KC_INS,    	RCTL_T(KC_APP), 
						_______, 	XXXXXXX,	KC_1,		KC_2,		KC_3,		_______,		KC_VOLD,	KC_END,  	KC_PSCR, 	KC_PGDN, 	KC_PAUS,   	_______, 
							       							_______,	_______, 	_______, 		_______, 	_______, 	_______
) 

};
