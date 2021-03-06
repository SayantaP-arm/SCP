/*
 * Arm SCP/MCP Software
 * Copyright (c) 2020, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef CLOCK_SOC_H
#define CLOCK_SOC_H

#include <fwk_macros.h>

#define CLOCK_RATE_REFCLK       (100UL * FWK_MHZ)
#define CLOCK_RATE_SYSPLLCLK    (2000UL * FWK_MHZ)

/*
 * PLL clock indexes.
 */
enum clock_pll_idx {
    CLOCK_PLL_IDX_CPU0,
    CLOCK_PLL_IDX_SYS,
    CLOCK_PLL_IDX_INTERCONNECT,
    CLOCK_PLL_IDX_DPU,
    CLOCK_PLL_IDX_PIX0,
    CLOCK_PLL_IDX_PIX1,
    CLOCK_PLL_IDX_COUNT
};

/*
 * PIK clock indexes.
 */
enum clock_pik_idx {
    CLOCK_PIK_IDX_CLUS0_CPU0,
    CLOCK_PIK_IDX_INTERCONNECT,
    CLOCK_PIK_IDX_SCP,
    CLOCK_PIK_IDX_GIC,
    CLOCK_PIK_IDX_PCLKSCP,
    CLOCK_PIK_IDX_SYSPERCLK,
    CLOCK_PIK_IDX_UARTCLK,
    CLOCK_PIK_IDX_DPU,
    CLOCK_PIK_IDX_COUNT
};

/*
 * CSS clock indexes.
 */
enum clock_css_idx {
    CLOCK_CSS_IDX_CPU_GROUP0,
    CLOCK_CSS_IDX_DPU,
    CLOCK_CSS_IDX_COUNT
};

/*
 * Clock indexes.
 */
enum clock_idx {
    CLOCK_IDX_INTERCONNECT,
    CLOCK_IDX_CPU_GROUP0,
    CLOCK_IDX_DPU,
    CLOCK_IDX_PIXEL_0,
    CLOCK_IDX_PIXEL_1,
    CLOCK_IDX_COUNT
};

#endif /* CLOCK_SOC_H */
