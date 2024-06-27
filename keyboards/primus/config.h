// Copyright 2024 leon ratinckx (@leonrat)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#define SPLIT_HAND_PIN B12
#define SERIAL_USART_TX_PIN A6    // The GPIO pin that is used split communication.
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
