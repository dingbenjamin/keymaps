#include QMK_KEYBOARD_H

enum custom_keycodes {
    MT_DLR = SAFE_RANGE,
    MT_LPRN = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_gergo(
            KC_NO   ,KC_Q     ,KC_W           ,KC_E           ,KC_R           ,KC_T     ,                                                  KC_Y     ,KC_U           ,KC_I           ,KC_O           ,KC_P     ,KC_NO    , 
            KC_NO   ,KC_A     ,RCTL_T(KC_S)   ,RALT_T(KC_D)   ,RGUI_T(KC_F)   ,KC_G     ,MO(2)    ,                         MO(1)         ,KC_H     ,LGUI_T(KC_J)   ,LALT_T(KC_K)   ,LCTL_T(KC_L)   ,KC_SCLN  ,KC_QUOT  , 
            KC_NO   ,KC_Z     ,KC_X           ,KC_C           ,KC_V           ,KC_B     ,KC_MINS  ,KC_HOME       ,KC_END   ,KC_NO         ,KC_N     ,KC_M           ,KC_COMM        ,KC_DOT         ,KC_SLSH  ,KC_NO    , 
            KC_TAB  ,MO(1)    ,KC_LSFT        ,KC_BSPC                                                                                                              ,KC_ENT         ,KC_SPC         ,MO(2)    ,KC_ESC   ),

	[1] = LAYOUT_gergo(
            KC_TRNS ,KC_EXLM  ,KC_AT          ,KC_LCBR        ,KC_RCBR        ,KC_PIPE  ,                                                  KC_TRNS  ,KC_TRNS        ,KC_TRNS        ,KC_TRNS        ,KC_TRNS  ,KC_BSLS  , 
            KC_TRNS ,KC_HASH  ,RCTL_T(KC_DLR) ,RALT_T(KC_LPRN),RGUI_T(KC_RPRN),KC_GRV   ,KC_TRNS  ,                         KC_TRNS       ,KC_PLUS  ,LGUI_T(KC_MINS),LALT_T(KC_SLSH),LCTL_T(KC_ASTR),KC_PERC  ,KC_QUOT  , 
            KC_TRNS ,KC_PERC  ,KC_CIRC        ,KC_LBRC        ,KC_RBRC        ,KC_TILD  ,KC_TRNS  ,KC_PGUP       ,KC_PGDN  ,KC_TRNS       ,KC_AMPR  ,KC_EQL         ,KC_COMM        ,KC_DOT         ,KC_SLSH  ,KC_TRNS  , 
            KC_INS  ,KC_TRNS  ,KC_TRNS        ,KC_TRNS        ,                                                                                                      KC_TRNS        ,KC_TRNS        ,KC_TRNS  ,KC_DEL   ),

	[2] = LAYOUT_gergo(
            KC_TRNS ,KC_1     ,KC_2           ,KC_3           ,KC_4           ,KC_5     ,                                                  KC_6     ,KC_7           ,KC_8           ,KC_9           ,KC_0     ,KC_TRNS  , 
            KC_TRNS ,KC_F1    ,RCTL_T(KC_F2)  ,RALT_T(KC_F3)  ,RGUI_T(KC_F4)  ,KC_F5    ,KC_F6    ,                         KC_TRNS       ,KC_LEFT  ,LGUI_T(KC_DOWN),LALT_T(KC_UP)  ,LCTL_T(KC_RGHT),KC_VOLD  ,KC_VOLU  , 
            KC_TRNS ,KC_F7    ,KC_F8          ,KC_F9          ,KC_F10         ,KC_F11   ,KC_F12   ,KC_PSCR       ,KC_SCRL  ,KC_TRNS       ,KC_MS_L  ,KC_MS_D        ,KC_MS_U        ,KC_MS_R        ,KC_MPLY  ,KC_TRNS  , 
            KC_TRNS ,KC_TRNS  ,KC_TAB         ,KC_TRNS        ,                                                                                                      KC_TRNS        ,KC_TRNS        ,KC_TRNS  ,KC_TRNS  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RCTL_T(KC_DLR):
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_DLR);
                return false;
            }
            break;
        case RALT_T(KC_LPRN):
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_LPRN);
                return false;
            }
            break;
        case RGUI_T(KC_RPRN):
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_RPRN);
                return false;
            }
            break;
        case LGUI_T(KC_MINS):
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_MINS);
                return false;
            }
            break;
        case LALT_T(KC_SLSH):
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_SLSH);
                return false;
            }
            break;
        case LCTL_T(KC_ASTR):
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_ASTR);
                return false;
            }
            break;
        case RCTL_T(KC_F2):
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_F2);
                return false;
            }
            break;
        case RALT_T(KC_F3):
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_F3);
                return false;
            }
            break;
        case RGUI_T(KC_F4):
            if (record->event.pressed && record->tap.count > 0) {
                tap_code16(KC_F4);
                return false;
            }
            break;
    }
    return true;
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};

#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




