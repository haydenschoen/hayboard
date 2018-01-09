#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  KEYMAP(GRV,  1,   2,   3,   4,   5,                  6,   7,   8,   9,   0,   BSPC, \
         TAB,  Q,   W,   E,   R,   T,                  Y,   U,   I,   O,   P,   MINS, \
         ESC,  A,   S,   D,   F,   G,   FN2,      FN3, H,   J,   K,   L,   SCLN,QUOT, \
         LSFT, Z,   X,   C,   V,   B,        UP,       N,   M,   COMM,DOT, SLSH,ENT,  \
         MPLY, LCTL,LALT,LGUI,FN0, SPC, LEFT,DOWN,RGHT,SPC, FN1, RGUI,RALT,RCTL,EQL),

  KEYMAP(TRNS, F1,  F2,  F3,  F4,  F5,                 F6,  F7,  F8,  F9,  F10, TRNS, \
         TRNS, TRNS,TRNS,TRNS,WH_U,PGUP,               TRNS,TRNS,TRNS,FN8, FN9, TRNS, \
         TRNS, TRNS,FN20,FN21,FN22,FN23,FN4,      FN5, TRNS,MINS,EQL, FN10,FN11,BSLS, \
         TRNS, TRNS,TRNS,TRNS,WH_D,PGDN,     VOLU,     TRNS,FN13,FN14,LBRC,RBRC,FN12, \
         TRNS, WAKE,TRNS,TRNS,TRNS,TRNS,MPRV,VOLD,MNXT,TRNS,FN15,TRNS,TRNS,TRNS,TRNS),

  KEYMAP(TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
         TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,               TRNS,7,   8,   9,   PSLS,TRNS, \
         TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,FN6,      FN7, TRNS,4,   5,   6,   PAST,TRNS, \
         TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,     VOLU,     TRNS,1,   2,   3,   PMNS,PEQL, \
         TRNS, TRNS,TRNS,TRNS,FN15,TRNS,MPRV,VOLD,MNXT,TRNS,TRNS,0,   PDOT,PPLS,PENT),

  KEYMAP(TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
         TRNS, FN16,FN17,FN18,FN19,TRNS,               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
         TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
         TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
         TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case 0:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(D), U(LSFT), T(E), T(L), D(LSFT), T(B), U(LSFT), T(A), T(B), T(U), T(1), END ) :
                    MACRO_NONE );
        case 1:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(S), U(LSFT), T(U), T(P), T(E), T(R), D(LSFT), T(P), U(LSFT), T(0), T(W), T(E), T(R), D(LSFT), T(M), U(LSFT), T(A), T(C), T(H), T(I), T(N), T(E), T(R), T(Y), END ) :
                    MACRO_NONE );
        case 2:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(I), U(LSFT), T(M), T(4), T(K), T(N), T(I), T(F), T(3), D(LSFT), T(C), U(LSFT), T(U), T(7), D(LSFT), T(C), U(LSFT), T(U), T(7), END ) :
                    MACRO_NONE );
        case 3:
            return (record->event.pressed ?
                    MACRO( D(LSFT), T(S), U(LSFT), T(U), T(L), T(T), T(4), T(N), D(LSFT), T(O), U(LSFT), T(F), D(LSFT), T(S), U(LSFT), T(W), T(E), T(E), T(T), T(N), T(E), T(S), T(S), END ) :
                    MACRO_NONE );
    }
    return MACRO_NONE;
}

const action_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),
  [1] = ACTION_LAYER_MOMENTARY(2),
  [2] = ACTION_MODS_KEY(MOD_LGUI, KC_MINS),
  [3] = ACTION_MODS_KEY(MOD_LGUI, KC_EQL),
  [4] = ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_3),
  [5] = ACTION_MODS_KEY(MOD_LGUI | MOD_LCTL | MOD_LSFT, KC_4),
  [6] = ACTION_MODS_KEY(MOD_LGUI, KC_LBRC),
  [7] = ACTION_MODS_KEY(MOD_LGUI, KC_RBRC),
  [8] = ACTION_MODS_KEY(MOD_LSFT, KC_9),
  [9] = ACTION_MODS_KEY(MOD_LSFT, KC_0),
  [10] = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),
  [11] = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),
  [12] = ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),
  [13] = ACTION_MODS_KEY(MOD_LSFT, KC_MINS),
  [14] = ACTION_MODS_KEY(MOD_LSFT, KC_EQL),
  [15] = ACTION_LAYER_MOMENTARY(3),
  [16] = ACTION_MACRO(0),
  [17] = ACTION_MACRO(1),
  [18] = ACTION_MACRO(2),
  [19] = ACTION_MACRO(3),
  [20] = ACTION_MODS_KEY(MOD_LSFT | MOD_LGUI, KC_LEFT),
  [21] = ACTION_MODS_KEY(MOD_LSFT | MOD_LALT, KC_LEFT),
  [22] = ACTION_MODS_KEY(MOD_LSFT | MOD_LALT, KC_RGHT),
  [23] = ACTION_MODS_KEY(MOD_LSFT | MOD_LGUI, KC_RGHT),
};


