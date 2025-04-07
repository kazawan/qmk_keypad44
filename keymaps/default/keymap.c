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
        KC_P7,   KC_P8,   KC_P9,   RGB_M_T,
        KC_P4,   KC_P5,   KC_P6,   KC_P9,
        UG_HUEU,   UG_HUED,   UG_SATU,   UG_SATD,
        UG_NEXT,   UG_PREV,   UG_TOGG
    )
};
