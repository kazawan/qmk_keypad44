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
        KC_P1,   KC_P2,   KC_P3,   RM_OFF,
        RM_VALU,   RM_VALD,   RM_SPDU,   RM_SPDD,
        RM_HUEU	,   RM_HUED,   RM_SATU,   RM_SATD,
        RM_NEXT,   RM_PREV,   RM_ON
    )
};
