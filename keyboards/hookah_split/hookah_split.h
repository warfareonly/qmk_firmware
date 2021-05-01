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

#include "quantum.h"

#define ___ KC_NO

#define LAYOUT_split_3x6_3( \
		L01, L02, L03, L04, L05, L06, R01, R02, R03, R04, R05, R06, \
		L07, L08, L09, L10, L11, L12, R07, R08, R09, R10, R11, R12, \
		L13, L14, L15, L16, L17, L18, R13, R14, R15, R16, R17, R18, \
			       L19, L20, L21, R19, R20, R21		    \
	) \
	{ \
		{L01, L02, L03, L04, L05, L06}, \
		{L07, L08, L09, L10, L11, L12}, \
		{L13, L14, L15, L16, L17, L18}, \
		{___, ___, ___, L19, L20, L21}, \
		{R06, R05, R04, R03, R02, R01}, \
		{R12, R11, R10, R09, R08, R07}, \
		{R18, R17, R16, R15, R14, R13}, \
		{___, ___, ___,R21, R20, R19} \
	}

#define LAYOUT LAYOUT_split_3x6_3
