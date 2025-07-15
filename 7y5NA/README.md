# 7y5NA Custom Features

## Modifier LED Indicators

The keymap includes a custom modifier LED indicator system that provides visual feedback when modifier keys are active:

- **Supported Modifiers**: Shift, Ctrl, Alt, and GUI (Windows/Cmd key)
- **Visual Feedback**: When any modifier is pressed or held, specific LEDs light up in red to indicate their status
- **Key Positions**: 
  - GUI: Win/Meta key position (LED 6)
  - Ctrl: Ctrl key position (LED 25)
  - Alt: Alt key position (LED 37)
  - Shift: Shift key position (LED 50)
- **Layer Compatibility**: Works across all layers and is not overwritten by layer changes
- **One-Shot Mod Support**: Fully compatible with one-shot modifiers (OSM) and mod-tap keys (MT)

The indicator responds immediately to modifier state changes and coexists with the existing per-layer RGB lighting system.

## Implementation Details

### Core Functions

1. **`is_any_modifier_active()`**: Checks if any modifier is currently pressed using both `get_mods()` and `get_oneshot_mods()`
2. **`set_modifier_indicators()`**: Sets the appropriate LEDs to red when modifiers are active
3. **Enhanced `rgb_matrix_indicators_user()`**: Applies modifier indicators after layer colors to ensure visibility

### Technical Approach

- Uses QMK's RGB Matrix API for LED control
- Integrates seamlessly with existing `set_layer_color()` and layer switching logic
- Modifier indicators are applied after layer colors to ensure they're always visible
- Supports both regular modifiers and one-shot modifiers
- Color is easily customizable via `MOD_INDICATOR_COLOR_*` constants

## Usage

The feature works automatically once the firmware is flashed. When you press and hold any modifier key:
- The corresponding LED will immediately light up in red
- Multiple modifiers can be indicated simultaneously
- The indicator persists while the modifier is held
- Works with both regular key presses and one-shot modifier activations

This enhancement significantly improves the user experience by providing clear visual feedback about modifier state, making it easier to confirm which modifiers are active during complex key combinations.