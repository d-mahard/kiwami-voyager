#include QMK_KEYBOARD_H
#include "version.h"

#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
};


#define DUAL_FUNC_0 LT(12, KC_6)
#define DUAL_FUNC_1 LT(11, KC_F20)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_NO,          KC_NO,          KC_MINUS,       KC_LPRN,        KC_LCBR,        KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_SLASH,       KC_HASH,        KC_AT,          KC_NO,          KC_NO,
    KC_ESCAPE,      ST_MACRO_0,     KC_W,           KC_E,           KC_R,           KC_T,           KC_NO,                                          KC_NO,          KC_Y,           KC_U,           KC_I,           KC_O,           KC_COLN,        KC_ENTER,
    OSM(MOD_LGUI),  KC_Q,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_P,           OSM(MOD_LALT),
    DUAL_FUNC_0,    KC_A,           KC_X,           KC_C,           KC_V,           KC_B,           KC_NO,                                          KC_NO,          KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_QUES,        OSL(3),
    MT(MOD_LALT, KC_DELETE),KC_Z,           KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_EXLM,        KC_BSPC,
                                                                                                    KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                                                                                    KC_NO,          KC_NO,
                                                                                    TT(4),          OSM(MOD_LCTL),  OSL(2),         TT(1),          OSM(MOD_LSFT),  KC_SPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT,
    DUAL_FUNC_1,    KC_TRANSPARENT, KC_KP_2,        KC_KP_3,        KC_KP_4,        KC_KP_5,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_EQUAL,       KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_KP_ENTER,
    KC_TRANSPARENT, KC_KP_1,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_0,                                                                        KC_SPACE,       KC_1,           KC_2,           KC_3,           KC_KP_MINUS,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_KP_6,        KC_MINUS,       KC_COLN,        KC_COMMA,       KC_DOT,         KC_NUM,                                         KC_TRANSPARENT, LSFT(KC_T),     LSFT(KC_Z),     KC_0,           KC_KP_DOT,      KC_KP_ASTERISK, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_SLASH,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_SLASH,    KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_1,     KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_PIPE,        KC_PLUS,        KC_AMPR,        KC_TRANSPARENT, KC_TRANSPARENT,
    DUAL_FUNC_1,    ST_MACRO_2,     KC_NO,          RALT(KC_E),     KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, RALT(KC_MINUS), RALT(KC_Y),     KC_NO,          RALT(KC_P),     KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          RALT(KC_S),     KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          RALT(KC_L),     RALT(RSFT(KC_S)),KC_TRANSPARENT,
    KC_TRANSPARENT, RALT(KC_Q),     KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          QK_LLCK,                                        KC_TRANSPARENT, KC_NO,          KC_NO,          KC_LBRC,        KC_RBRC,        ST_MACRO_3,     KC_NO,
    KC_TRANSPARENT, RALT(KC_Z),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DLR,         KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,
    DUAL_FUNC_1,    KC_MEDIA_PREV_TRACK,KC_F2,          KC_F3,          KC_F4,          KC_INSERT,      KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_APPLICATION, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_AUDIO_MUTE,
    KC_BRIGHTNESS_UP,KC_F1,          KC_F6,          KC_F7,          KC_F8,          KC_PSCR,                                                                        LED_LEVEL,      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_AUDIO_VOL_UP,
    KC_BRIGHTNESS_DOWN,KC_F5,          KC_F10,         KC_F11,         KC_F12,         LGUI(LSFT(KC_S)),QK_LLCK,                                        KC_TRANSPARENT, QK_BOOT,        EE_CLR,         QK_DYNAMIC_TAPPING_TERM_UP,QK_DYNAMIC_TAPPING_TERM_DOWN,KC_NO,          KC_AUDIO_VOL_DOWN,
    OSM(MOD_LALT),  KC_F9,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_PRINT,KC_PAUSE,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_SYSTEM_SLEEP,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,
    DUAL_FUNC_1,    KC_NO,          LALT(LCTL(KC_DOWN)),LALT(LCTL(KC_UP)),LALT(LCTL(KC_RIGHT)),LALT(KC_RBRC),  KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PAGE_UP,     LCTL(KC_LEFT),  LCTL(KC_UP),    LCTL(KC_DOWN),  KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(LCTL(KC_LEFT)),LALT(KC_DOWN),  LALT(KC_UP),    LALT(KC_RIGHT), LALT(KC_LBRC),                                                                  KC_PGDN,        KC_LEFT,        KC_UP,          KC_DOWN,        LCTL(KC_RIGHT), LCTL(KC_PAGE_UP),
    KC_TRANSPARENT, LALT(KC_LEFT),  KC_NO,          KC_NO,          KC_NO,          KC_HOME,        KC_SCRL,                                        KC_TRANSPARENT, KC_END,         KC_NO,          KC_NO,          KC_NO,          KC_RIGHT,       LCTL(KC_PGDN),
    KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,
    DUAL_FUNC_1,    KC_NO,          LCTL(KC_W),     LCTL(KC_E),     LCTL(KC_R),     LCTL(KC_T),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(KC_Y),     LCTL(KC_U),     LCTL(KC_I),     LCTL(KC_O),     KC_NO,          KC_ENTER,
    KC_TRANSPARENT, LCTL(KC_Q),     LCTL(KC_S),     LCTL(KC_D),     LCTL(KC_F),     LCTL(KC_G),                                                                     LCTL(KC_H),     LCTL(KC_J),     LCTL(KC_K),     LCTL(KC_L),     LCTL(KC_P),     KC_TRANSPARENT,
    KC_TRANSPARENT, LCTL(KC_A),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     LCTL(KC_B),     KC_NO,                                          KC_TRANSPARENT, LCTL(KC_N),     LCTL(KC_M),     KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_DELETE,      LCTL(KC_Z),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_BSPC,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};





bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_QUOTE)SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_GRAVE))SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_GRAVE)SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_6))SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_TAB);
        } else {
          unregister_code16(KC_TAB);
        }
      } else {
        if (record->event.pressed) {
          layer_move(5);
        } else {
          layer_move(5);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_ESCAPE);
        } else {
          unregister_code16(KC_ESCAPE);
        }
      } else {
        if (record->event.pressed) {
          layer_move(0);
        } else {
          layer_move(0);
        }  
      }  
      return false;
  }
  return true;
}

uint8_t layer_state_set_user(uint8_t state) {
    uint8_t layer = biton(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};



