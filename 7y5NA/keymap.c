#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
};



#define DUAL_FUNC_0 LT(9, KC_F4)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      ST_MACRO_0,     KC_MINUS,       KC_LPRN,        KC_LCBR,        OSL(3),                                         KC_TRANSPARENT, KC_SLASH,       KC_HASH,        KC_AT,          KC_COLN,        KC_ENTER,       
    OSM(MOD_LGUI),  KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           OSM(MOD_LALT),  
    DUAL_FUNC_0,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_QUES,        OSL(2),         
    MT(MOD_LALT, KC_DELETE),KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_EXLM,        KC_BSPC,        
                                                    TT(4),          OSM(MOD_LCTL),                                  OSM(MOD_LSFT),  LT(1, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NUM,                                         QK_LLCK,        KC_7,           KC_8,           KC_9,           KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_4,        KC_KP_5,                                        KC_EQUAL,       KC_4,           KC_5,           KC_6,           KC_KP_MINUS,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_KP_6,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_0,                                        KC_SPACE,       KC_1,           KC_2,           KC_3,           KC_KP_ASTERISK, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_SLASH,       KC_MINUS,       KC_COLN,        KC_COMMA,       KC_DOT,                                         LSFT(KC_T),     LSFT(KC_Z),     KC_0,           KC_KP_DOT,      KC_KP_SLASH,    KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    TO(0),          KC_MEDIA_PREV_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_SYSTEM_SLEEP,                                QK_LLCK,        RGB_MODE_FORWARD,TOGGLE_LAYER_COLOR,RGB_SLD,        RGB_TOG,        KC_AUDIO_MUTE,  
    KC_BRIGHTNESS_UP,KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_INSERT,                                      KC_APPLICATION, RGB_SPI,        RGB_HUI,        RGB_SAI,        RGB_VAI,        KC_AUDIO_VOL_UP,
    KC_BRIGHTNESS_DOWN,KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_PSCR,                                        KC_NO,          RGB_SPD,        RGB_HUD,        RGB_SAD,        RGB_VAD,        KC_AUDIO_VOL_DOWN,
    OSM(MOD_LALT),  KC_F9,          KC_F10,         KC_F11,         KC_F12,         LGUI(LSFT(KC_S)),                                QK_BOOT,        EE_CLR,         QK_DYNAMIC_TAPPING_TERM_UP,QK_DYNAMIC_TAPPING_TERM_DOWN,QK_DYNAMIC_TAPPING_TERM_PRINT,KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO
  ),
  [3] = LAYOUT_voyager(
    TO(0),          ST_MACRO_1,     ST_MACRO_2,     KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_PIPE,        KC_PLUS,        KC_AMPR,        KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          RALT(KC_E),     KC_NO,          KC_NO,                                          ST_MACRO_3,     RALT(KC_Y),     KC_NO,          RALT(KC_P),     RALT(RSFT(KC_S)),KC_TRANSPARENT, 
    KC_TRANSPARENT, RALT(KC_Q),     RALT(KC_S),     KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          RALT(KC_L),     ST_MACRO_4,     KC_NO,          
    KC_TRANSPARENT, RALT(KC_Z),     KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_LBRC,        KC_RBRC,        KC_DLR,         KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_SCRL,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(KC_LEFT),  LALT(KC_DOWN),  LALT(KC_UP),    LALT(KC_RIGHT), LALT(KC_RBRC),                                  KC_PAGE_UP,     LCTL(KC_LEFT),  LCTL(KC_UP),    LCTL(KC_DOWN),  LCTL(KC_RIGHT), LCTL(KC_PAGE_UP),
    KC_TRANSPARENT, LALT(LCTL(KC_LEFT)),LALT(LCTL(KC_DOWN)),LALT(LCTL(KC_UP)),LALT(LCTL(KC_RIGHT)),LALT(KC_LBRC),                                  KC_PGDN,        KC_LEFT,        KC_UP,          KC_DOWN,        KC_RIGHT,       LCTL(KC_PGDN),  
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_HOME,                                        KC_END,         KC_NO,          KC_NO,          KC_NO,          KC_LEFT_ALT,    KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, MO(5),                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_ENTER,       
    KC_TRANSPARENT, LCTL(KC_Q),     LCTL(KC_W),     LCTL(KC_E),     LCTL(KC_R),     LCTL(KC_T),                                     LCTL(KC_Y),     LCTL(KC_U),     LCTL(KC_I),     LCTL(KC_O),     LCTL(KC_P),     KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_A),     LCTL(KC_S),     LCTL(KC_D),     LCTL(KC_F),     LCTL(KC_G),                                     LCTL(KC_H),     LCTL(KC_J),     LCTL(KC_K),     LCTL(KC_L),     KC_NO,          KC_NO,          
    KC_DELETE,      LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     LCTL(KC_B),                                     LCTL(KC_N),     LCTL(KC_M),     KC_NO,          KC_NO,          KC_NO,          KC_BSPC,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};




extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {45,255,255}, {45,255,255}, {45,255,255}, {45,255,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {45,255,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {45,255,255}, {45,255,255}, {45,255,255}, {45,255,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {86,113,255}, {45,255,255} },

    [1] = { {86,113,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {193,255,255}, {86,113,255}, {177,255,255}, {177,255,255}, {177,255,255}, {177,255,255}, {177,255,255}, {86,113,255}, {177,255,255}, {177,255,255}, {177,255,255}, {177,255,255}, {0,255,255}, {86,113,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,255}, {0,0,255}, {45,255,255}, {86,113,255}, {193,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {129,255,255}, {86,113,255}, {161,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {129,255,255}, {86,113,255}, {0,0,255}, {10,255,255}, {10,255,255}, {10,255,255}, {129,255,255}, {86,113,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,0,255}, {129,255,255}, {86,113,255}, {86,113,255}, {45,255,255} },

    [2] = { {86,113,255}, {78,108,255}, {18,252,255}, {78,108,255}, {78,108,255}, {177,255,255}, {84,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {129,255,255}, {84,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {129,255,255}, {43,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {43,255,255}, {45,255,255}, {86,113,255}, {193,255,255}, {129,255,255}, {129,255,255}, {18,252,255}, {129,255,255}, {18,252,255}, {129,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {172,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {86,113,255}, {0,0,0} },

    [3] = { {86,113,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,113,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {86,113,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,113,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {45,255,255}, {86,113,255}, {86,113,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {86,113,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {86,113,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {86,113,255}, {86,113,255}, {45,255,255} },

    [4] = { {86,113,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,113,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {18,252,255}, {86,113,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {18,252,255}, {86,113,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {18,252,255}, {45,255,255}, {86,113,255}, {193,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,113,255}, {18,252,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {18,252,255}, {18,252,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {18,252,255}, {18,252,255}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {86,113,255}, {86,113,255}, {45,255,255} },

    [5] = { {86,113,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,113,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {86,113,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {86,113,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {45,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,113,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {86,113,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,113,255}, {86,113,255}, {45,255,255} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,240}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_QUOTE)SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_GRAVE)SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_GRAVE))SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_MINUS)));
    }
    break;
    case ST_MACRO_4:
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
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


