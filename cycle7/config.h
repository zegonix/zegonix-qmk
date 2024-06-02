// Copyright 2024 zegonix (@zegonix)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

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
#define NO_ACTION_ONESHOT

/* configure clocks */
#ifdef STM32_HSECLK
#undef STM32_HSECLK
#endif // STM32_HSECLK
#define STM32_HSECLK        12000000U

#ifdef STM32_HSE_BYPASS
#undef STM32_HSE_BYPASS
#endif // STM32_HSE_BYPASS
