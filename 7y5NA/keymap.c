#include QMK_KEYBOARD_H
#include "version.h"
#include "color.h"
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
  CLEAR_MODS,
  PRINT_RGB_COLOR, // New keycode for printing current RGB/HSV color
};



#define DUAL_FUNC_0 LT(10, KC_4)
#define DUAL_FUNC_1 LT(10, KC_F5)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      ST_MACRO_0,     KC_MINUS,       KC_LPRN,        KC_LCBR,        OSL(2),                                         CLEAR_MODS,     KC_SLASH,       KC_HASH,        KC_AT,          KC_COLN,        KC_ENTER,       
    OSM(MOD_LGUI),  KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           OSM(MOD_LALT),  
    DUAL_FUNC_0,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_QUES,        OSL(3),         
    MT(MOD_LALT, KC_DELETE),KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_EXLM,        KC_BSPC,        
                                                    TT(4),          OSM(MOD_LCTL),                                  OSM(MOD_LSFT),  LT(1, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    DUAL_FUNC_1,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NUM,                                         QK_LLCK,        KC_7,           KC_8,           KC_9,           KC_KP_PLUS,     KC_KP_ENTER,    
    KC_TRANSPARENT, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_4,        KC_KP_5,                                        KC_EQUAL,       KC_4,           KC_5,           KC_6,           KC_KP_MINUS,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_KP_6,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_0,                                        KC_SPACE,       KC_1,           KC_2,           KC_3,           KC_KP_ASTERISK, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_SLASH,       KC_MINUS,       KC_COLN,        KC_COMMA,       KC_DOT,                                         LSFT(KC_T),     LSFT(KC_Z),     KC_0,           KC_KP_DOT,      KC_KP_SLASH,    KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    DUAL_FUNC_1,    ST_MACRO_1,     ST_MACRO_2,     KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_PIPE,        KC_PLUS,        KC_AMPR,        KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          RALT(KC_E),     KC_NO,          KC_NO,                                          RALT(KC_MINUS), RALT(KC_Y),     KC_NO,          RALT(KC_P),     RALT(RSFT(KC_S)),KC_TRANSPARENT, 
    KC_TRANSPARENT, RALT(KC_Q),     RALT(KC_S),     KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          RALT(KC_L),     ST_MACRO_3,     KC_NO,          
    KC_TRANSPARENT, RALT(KC_Z),     KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_LBRC,        KC_RBRC,        KC_DLR,         KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    DUAL_FUNC_1,    KC_MEDIA_PREV_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_SYSTEM_SLEEP,                                QK_LLCK,        RGB_MODE_FORWARD,TOGGLE_LAYER_COLOR,RGB_SLD,        RGB_TOG,        KC_AUDIO_MUTE,  
    KC_BRIGHTNESS_UP,KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_INSERT,                                      KC_APPLICATION, RGB_SPI,        RGB_HUI,        RGB_SAI,        RGB_VAI,        KC_AUDIO_VOL_UP,
    KC_BRIGHTNESS_DOWN,KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_PSCR,                                        PRINT_RGB_COLOR, RGB_SPD,        RGB_HUD,        RGB_SAD,        RGB_VAD,        KC_AUDIO_VOL_DOWN,
    OSM(MOD_LALT),  KC_F9,          KC_F10,         KC_F11,         KC_F12,         LGUI(LSFT(KC_S)),                                QK_BOOT,        EE_CLR,         QK_DYNAMIC_TAPPING_TERM_UP,QK_DYNAMIC_TAPPING_TERM_DOWN,QK_DYNAMIC_TAPPING_TERM_PRINT,KC_PAUSE,       
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO
  ),
  [4] = LAYOUT_voyager(
    DUAL_FUNC_1,    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_SCRL,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(LCTL(KC_LEFT)),LALT(LCTL(KC_DOWN)),LALT(LCTL(KC_UP)),LALT(LCTL(KC_RIGHT)),LALT(KC_RBRC),                                  KC_PAGE_UP,     LCTL(KC_LEFT),  LCTL(KC_UP),    LCTL(KC_DOWN),  LCTL(KC_RIGHT), LCTL(KC_PAGE_UP),
    KC_TRANSPARENT, LALT(KC_LEFT),  LALT(KC_DOWN),  LALT(KC_UP),    LALT(KC_RIGHT), LALT(KC_LBRC),                                  KC_PGDN,        KC_LEFT,        KC_UP,          KC_DOWN,        KC_RIGHT,       LCTL(KC_PGDN),  
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_HOME,                                        KC_END,         KC_NO,          KC_NO,          KC_NO,          KC_LEFT_ALT,    KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, MO(5),                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    DUAL_FUNC_1,    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_ENTER,       
    KC_TRANSPARENT, LCTL(KC_Q),     LCTL(KC_W),     LCTL(KC_E),     LCTL(KC_R),     LCTL(KC_T),                                     LCTL(KC_Y),     LCTL(KC_U),     LCTL(KC_I),     LCTL(KC_O),     LCTL(KC_P),     KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_A),     LCTL(KC_S),     LCTL(KC_D),     LCTL(KC_F),     LCTL(KC_G),                                     LCTL(KC_H),     LCTL(KC_J),     LCTL(KC_K),     LCTL(KC_L),     KC_NO,          KC_NO,          
    KC_DELETE,      LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     LCTL(KC_B),                                     LCTL(KC_N),     LCTL(KC_M),     KC_NO,          KC_NO,          KC_NO,          KC_BSPC,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    DUAL_FUNC_1,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
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

    [2] = { {86,113,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,113,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {86,113,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,113,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {45,255,255}, {86,113,255}, {86,113,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {86,113,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {86,113,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {86,113,255}, {86,113,255}, {45,255,255} },

    [3] = { {86,113,255}, {78,108,255}, {18,252,255}, {78,108,255}, {78,108,255}, {177,255,255}, {84,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {129,255,255}, {84,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {129,255,255}, {43,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {43,255,255}, {45,255,255}, {86,113,255}, {193,255,255}, {129,255,255}, {129,255,255}, {18,252,255}, {129,255,255}, {18,252,255}, {129,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {172,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {86,113,255}, {0,0,0} },

    [4] = { {86,113,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,113,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {18,252,255}, {86,113,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {18,252,255}, {86,113,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {18,252,255}, {45,255,255}, {86,113,255}, {193,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,113,255}, {18,252,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {18,252,255}, {18,252,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {18,252,255}, {18,252,255}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {86,113,255}, {86,113,255}, {45,255,255} },

    [5] = { {86,113,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,113,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {86,113,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {86,113,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {45,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,113,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {86,113,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,113,255}, {86,113,255}, {45,255,255} },

    [6] = { 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,255,255}, //6  - winkey
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {86,255,255}, //25 - ctrl
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,240}, //37 - alt
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {0,0,0}, 
      {172,255,255}, //50 - shift
      {0,0,0} },

};

void set_modifier_indicators(void);


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
  
  // Set base layer colors first
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
  
  // Apply modifier indicators on top of layer colors
  // This ensures mod indicators are visible regardless of current layer
  // and take precedence over layer-specific LED colors
  set_modifier_indicators();
  
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case CLEAR_MODS:
      if (record->event.pressed) {
        clear_mods();
        clear_oneshot_mods();
        clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
        caps_word_off();
      }
      return false;
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
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case PRINT_RGB_COLOR:
      if (record->event.pressed) {
        // Only print if RGB Matrix is enabled
        if (rgb_matrix_is_enabled()) {
          HSV hsv = rgb_matrix_get_hsv();
          char buf[32];
          snprintf(buf, sizeof(buf), "HSV(%d, %d, %d)", hsv.h, hsv.s, hsv.v);
          send_string(buf);
        }
      }
      return false;
    }
  return true;
}




// Custom QMK here
const key_override_t paren_key_override = 
    ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_RPRN);
const key_override_t brace_key_override = 
    ko_make_basic(MOD_MASK_SHIFT, KC_LCBR, KC_RCBR);
const key_override_t slash_key_override = 
    ko_make_basic(MOD_MASK_SHIFT, KC_SLSH, KC_BSLS);
const key_override_t hash_key_override = 
    ko_make_basic(MOD_MASK_SHIFT, KC_HASH, KC_ASTR);
const key_override_t at_key_override = 
    ko_make_basic(MOD_MASK_SHIFT, KC_AT, KC_PERC);
const key_override_t colon_key_override = 
    ko_make_basic(MOD_MASK_SHIFT, KC_COLN, KC_SCLN);

const key_override_t *key_overrides[] = {
    &paren_key_override,
  &brace_key_override,
  &slash_key_override,
  &hash_key_override,
  &at_key_override,
  &colon_key_override,
    NULL
};

// Modifier LED indicator configuration
// LED positions for modifier indicators (based on physical key locations)
#define LED_GUI_POS     6   // Win/Meta key position
#define LED_CTRL_POS    25  // Ctrl key position
#define LED_ALT_POS     37  // Alt key position
#define LED_SHIFT_POS   50  // Shift key position

// Modifier indicator color (red) - Change these values to customize the color
#define MOD_INDICATOR_COLOR_R 255
#define MOD_INDICATOR_COLOR_G 0
#define MOD_INDICATOR_COLOR_B 0

/**
 * Check if any modifier keys are currently active
 * Returns true if any of Shift, Ctrl, Alt, GUI are pressed, or CAPS WORD is active
 * Supports both regular modifiers and one-shot modifiers (OSM)
 */
bool is_any_modifier_active(void) {
    uint8_t mods = get_mods();
    uint8_t oneshot_mods = get_oneshot_mods();
    
    // Check for any modifier bits (Shift, Ctrl, Alt, GUI) or CAPS WORD
    return (mods & (MOD_MASK_SHIFT | MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI)) ||
           (oneshot_mods & (MOD_MASK_SHIFT | MOD_MASK_CTRL | MOD_MASK_ALT | MOD_MASK_GUI)) ||
           is_caps_word_on();
}

/**
 * Set modifier indicator LEDs based on active modifiers
 * This function overrides specific LED colors when modifiers are active
 * Called after layer colors are set to ensure mod indicators are visible
 */
void set_modifier_indicators(void) {
    if (!is_any_modifier_active()) {
        return; // No modifiers active, let layer colors show
    }
    
    uint8_t mods = get_mods();
    uint8_t oneshot_mods = get_oneshot_mods();
    
    // Set indicator LEDs for active modifiers
    if ((mods | oneshot_mods) & MOD_MASK_GUI) {
        rgb_matrix_set_color(LED_GUI_POS, MOD_INDICATOR_COLOR_R, MOD_INDICATOR_COLOR_G, MOD_INDICATOR_COLOR_B);
    }
    
    if ((mods | oneshot_mods) & MOD_MASK_CTRL) {
        rgb_matrix_set_color(LED_CTRL_POS, MOD_INDICATOR_COLOR_R, MOD_INDICATOR_COLOR_G, MOD_INDICATOR_COLOR_B);
    }
    
    if ((mods | oneshot_mods) & MOD_MASK_ALT) {
        // Light up Alt key position (right side only)
        rgb_matrix_set_color(LED_ALT_POS, MOD_INDICATOR_COLOR_R, MOD_INDICATOR_COLOR_G, MOD_INDICATOR_COLOR_B);
    }
    
    if ((mods | oneshot_mods) & MOD_MASK_SHIFT || is_caps_word_on()) {
        rgb_matrix_set_color(LED_SHIFT_POS, MOD_INDICATOR_COLOR_R, MOD_INDICATOR_COLOR_G, MOD_INDICATOR_COLOR_B);
    }
}