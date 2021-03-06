/*
 * Arm SCP/MCP Software
 * Copyright (c) 2020, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "tc0_scmi.h"

#include <mod_scmi_perf.h>

#include <fwk_module.h>

#include <stdint.h>

static const struct mod_scmi_perf_domain_config domains[] = {
    [0] = {
    },
};

const struct fwk_module_config config_scmi_perf = {
    .elements = FWK_MODULE_DYNAMIC_ELEMENTS(NULL),
    .data = &((struct mod_scmi_perf_config){
        .domains = &domains,
        .fast_channels_alarm_id = FWK_ID_NONE_INIT,
    }),
};
