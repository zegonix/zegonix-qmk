
#pragma once

#include_next <mcuconf.h>

/* set up clocks */
#undef STM32_PLLM_VALUE
#define STM32_PLLM_VALUE 6