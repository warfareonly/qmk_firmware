/* Copyright 2020 Thys de Wet
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

#include "config_common.h"


/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x7812
#define DEVICE_VER 0x0001
#define MANUFACTURER BHARAT
#define PRODUCT Hookah Split

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

#define DIRECT_PINS { \
	{B12, B13, B14, B15, B10, B1}, \
	{B0, A7, A6, A5, A4, B4}, \
	{A3, B5, A2, B6, A1, B7}, \
	{NO_PIN, NO_PIN, NO_PIN, A0, B8, B9} \
}

#define UNUSED_PINS


#define MASTER_LEFT
#define SOFT_SERIAL_PIN A15
#define SELECT_SOFT_SERIAL_SPEED 1

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5


/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
