/* Copyright 2022 @ Keychron (https://www.keychron.com)
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

/* Key matrix pins */
#define MATRIX_ROW_PINS \
    { B5, B4, B3, A15, A14, A13 }
#define MATRIX_COL_PINS \
    { A10, A9, A8, B1, B0, A7, A6, A5, A4, A3, A2, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, C14 }

/* RGB Matrix Driver Configuration */
#define DRIVER_COUNT 1
#define DRIVER_ADDR_1 0b1110100
#define CKLED2001_CURRENT_TUNE \
    { 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0, 0xA0 }

/* RGB Matrix Configuration */
#define DRIVER_1_LED_TOTAL 108
#define LED_MATRIX_LED_COUNT DRIVER_1_LED_TOTAL

/* Enable indicator LED*/
#define NUM_LOCK_LED_INDEX 16
#define CAPS_LOCK_LED_INDEX 17
#define MAC_OS_LED_INDEX 18
#define WIN_OS_LED_INDEX 19

/* turn off effects when suspended */
#define LED_DISABLE_WHEN_USB_SUSPENDED

// LED Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_led_matrix?id=led-matrix-effects
#define ENABLE_LED_MATRIX_NONE
#define ENABLE_LED_MATRIX_SOLID // Static single val, no speed support
// #define ENABLE_LED_MATRIX_ALPHAS_MODS              // Static dual val, speed is val for LEDs marked as modifiers
#define ENABLE_LED_MATRIX_BREATHING // Cycling brightness animation
// #define ENABLE_LED_MATRIX_BAND                     // Band fading brightness scrolling left to right
#define ENABLE_LED_MATRIX_BAND_PINWHEEL    // 3 blade spinning pinwheel fades brightness
#define ENABLE_LED_MATRIX_BAND_SPIRAL      // Spinning spiral fades brightness
#define ENABLE_LED_MATRIX_CYCLE_LEFT_RIGHT // Full gradient scrolling left to right
#define ENABLE_LED_MATRIX_CYCLE_UP_DOWN    // Full gradient scrolling top to bottom
#define ENABLE_LED_MATRIX_CYCLE_OUT_IN     // Full gradient scrolling out to in
#define ENABLE_LED_MATRIX_DUAL_BEACON      // Full gradient spinning around center of keyboard
// #if defined(LED_MATRIX_KEYPRESSES) || defined(LED_MATRIX_KEYRELEASES)
#define LED_MATRIX_KEYPRESSES
#define LED_MATRIX_KEYRELEASES

#define ENABLE_LED_MATRIX_SOLID_REACTIVE_SIMPLE // Pulses keys hit then fades out
// #define ENABLE_LED_MATRIX_SOLID_REACTIVE_WIDE       // Value pulses near a single key hit then fades out
#define ENABLE_LED_MATRIX_SOLID_REACTIVE_MULTIWIDE // Value pulses near multiple key hits then fades out
#define ENABLE_LED_MATRIX_SOLID_REACTIVE_CROSS     // Value pulses the same column and row of a single key hit then fades out
// #define ENABLE_LED_MATRIX_SOLID_REACTIVE_MULTICROSS // Value pulses the same column and row of multiple key hits then fades out
// #define ENABLE_LED_MATRIX_SOLID_REACTIVE_NEXUS      // Value pulses away on the same column and row of a single key hit then fades out
// #define ENABLE_LED_MATRIX_SOLID_REACTIVE_MULTINEXUS // Value pulses away on the same column and row of multiple key hits then fades out
#define ENABLE_LED_MATRIX_SOLID_SPLASH      // Value pulses away from a single key hit then fades out
#define ENABLE_LED_MATRIX_SOLID_MULTISPLASH // Value pulses away from multiple key hits then fades out
// #endif
#define ENABLE_LED_MATRIX_WAVE_LEFT_RIGHT // Sine wave scrolling from left to right
#define ENBALE_LED_MATRIX_WAVE_UP_DOWN    // Sine wave scrolling from up to down
// #define ENABLE_LED_MATRIX_EFFECT_MAX
