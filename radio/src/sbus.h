/*
 * Copyright (C) OpenTX
 *
 * Based on code named
 *   th9x - http://code.google.com/p/th9x 
 *   er9x - http://code.google.com/p/er9x
 *   gruvin9x - http://code.google.com/p/gruvin9x
 *
 * License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _SBUS_H_
#define _SBUS_H_

#define SBUS_BAUDRATE         100000
#define SBUS_MIN_FRAME_SIZE   23
#define SBUS_MAX_FRAME_SIZE   28

void processSbusInput();
void processSbusFrame(uint8_t * sbus, int16_t * pulses, uint32_t size);

#endif // _SBUS_H_
