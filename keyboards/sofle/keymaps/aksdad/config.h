 /* Copyright 2021 Dane Evans
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
#define RGBLIGHT_LIMIT_VAL 100
#define RGBLIGHT_HUE_STEP  10
#define RGBLIGHT_SAT_STEP  17
#define RGBLIGHT_VAL_STEP  17
#define TAPPING_TERM 350
#undef SPLIT_TRANSPORT_MIRROR

#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100

#define RGB_MATRIX_HUE_STEP 8
#define RGB_MATRIX_SAT_STEP 8
#define RGB_MATRIX_VAL_STEP 8
#define RGB_MATRIX_SPD_STEP 10

/* Disable the animations you don't want/need.  You will need to disable a good number of these    *
 * because they take up a lot of space.  Disable until you can successfully compile your firmware. */
 #   undef ENABLE_RGB_MATRIX_ALPHAS_MODS
 #   undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
 #   undef ENABLE_RGB_MATRIX_BREATHING
 #   undef ENABLE_RGB_MATRIX_CYCLE_ALL
 #   undef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
 #   undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
 #   undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
 #   undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
 #   undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
 #   undef ENABLE_RGB_MATRIX_DUAL_BEACON
 #   undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
 #   undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
 #   undef ENABLE_RGB_MATRIX_RAINDROPS
 #   undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
 #   undef ENABLE_RGB_MATRIX_TYPING_HEATMAP
 #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE
 #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
 #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
 #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
 #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
 #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
 #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
 #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
 #   undef ENABLE_RGB_MATRIX_SPLASH
 #   undef ENABLE_RGB_MATRIX_MULTISPLASH
 #   undef ENABLE_RGB_MATRIX_SOLID_SPLASH
 #   undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
