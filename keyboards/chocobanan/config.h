// Copyright 2023 Léon Ratinckx (@leonrat)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#define SPLIT_HAND_PIN GP9
#define MASTER_LEFT
#define SOFT_SERIAL_PIN GP0
#define ENCODERS_PAD_A { GP29 }
#define ENCODERS_PAD_B { GP28 }
#define ENCODER_RESOLUTION 2
#define MOUSE_EXTENDED_REPORT
#define RGBLED_NUM 6
#define WS2812_DI_PIN GP1



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
