/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ - │
     * ├───┼───┼───┤───│
     * │ 4 │ 5 │ 6 │ + │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │   │
     * ├───┼───┼───┤Ent│
     * │ 0 │ . │ Tg│   │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_CAPS,   KC_P2,   KC_P3,   RM_OFF,
        RM_VALU,   RM_VALD,   RM_SPDU,   RM_SPDD,
        RM_HUEU	,   RM_HUED,   RM_SATU,   RM_SATD,
        RM_NEXT,   RM_PREV,   RM_ON
    )
};
// 大写指示灯
bool rgb_matrix_indicators_kb(void) {
    if (!rgb_matrix_indicators_user()) {
        return false;
    }
    if(host_keyboard_led_state().caps_lock){
        rgb_matrix_set_color(0, 0, 255, 0);
    }
    return true;
}
