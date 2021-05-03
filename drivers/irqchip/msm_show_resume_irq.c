// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (c) 2011, 2014-2016, 2018, The Linux Foundation. All rights reserved.
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#ifdef CONFIG_MACH_XIAOMI_SM8250
int msm_show_resume_irq_mask = 1;
#else
int msm_show_resume_irq_mask;
#endif

module_param_named(
	debug_mask, msm_show_resume_irq_mask, int, 0664);
