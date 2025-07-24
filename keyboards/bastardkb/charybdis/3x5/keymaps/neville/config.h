/**
* Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

#ifdef VIA_ENABLE
/* VIA configuration. */
#undef DYNAMIC_KEYMAP_LAYER_COUNT
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#endif // VIA_ENABLE

#ifndef TAPPING_TERM
/**
* \brief Configure the global tapping term (default: 200ms).
* If you have a lot of accidental mod activations, crank up the tapping term.
* See docs.qmk.fm/using-qmk/software-features/tap_hold#tapping-term
*/
#define TAPPING_TERM 200
#endif  // TAPPING_TERM

#ifndef __arm__
/* Disable unused features. */
#define NO_ACTION_ONESHOT
#endif // __arm__

/* Charybdis-specific features. */

#ifdef POINTING_DEVICE_ENABLE
#define POINTING_DEVICE_SCROLL_ENABLE
#define POINTING_DEVICE_INVERT_V
// Automatically enable the pointer layer when moving the trackball.  See also:
// - `CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS`
// - `CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD`
// #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
#endif // POINTING_DEVICE_ENABLE

#define COMBO_COUNT 3 // Change this number.
#define COMBO_TERM 120

//#define RETRO_SHIFT 500
#define LAYER_STATE_8BIT

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT

//#define IGNORE_MOD_TAP_INTERRUPT
#define HOLD_ON_OTHER_KEY_PRESS
//#define PERMISSIVE_HOLD

#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR

//#define CHARYBDIS_DRAGSCROLL_REVERSE_X
#define CHARYBDIS_DRAGSCROLL_REVERSE_Y



// Cirque trackpad diameter in mm (adjust based on your model: 35 or 40)
#define CIRQUE_PINNACLE_DIAMETER_MM 40

// RP2040 SPI pin configuration for left side
#define CIRQUE_PINNACLE_SPI_CS_PIN     GP10
#define CIRQUE_PINNACLE_SPI_MOSI_PIN   GP11
#define CIRQUE_PINNACLE_SPI_MISO_PIN   GP12
#define CIRQUE_PINNACLE_SPI_SCK_PIN    GP13

// Optional: Lower update delay for smoother tracking
#define POINTING_DEVICE_TASK_THROTTLE_MS 1
