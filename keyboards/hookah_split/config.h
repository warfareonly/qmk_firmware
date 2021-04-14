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
	{B0, B1, B6, B7, B8, B9}, \
	{B12, B13, B14, B15, A2, A3}, \
	{A4, A5, A6, A7, B4, B5}, \
	{NO_PIN, NO_PIN, NO_PIN, B10, A0, A1} \
}

#define UNUSED_PINS


#define SOFT_SERIAL_PIN A15
#define SELECT_SOFT_SERIAL_SPEED 1

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5


/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
