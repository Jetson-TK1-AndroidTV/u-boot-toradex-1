/*
 * Copyright (C) 2015
 * Bhuvanchandra DV, Toradex, Inc.
 *
 * SPDX-License-Identifier:	GPL-2.0
 */

#ifndef __ASM_ARCH_VF610_GPIO_H
#define __ASM_ARCH_VF610_GPIO_H

#define VYBRID_GPIO_COUNT		32
#define VF610_GPIO_DIRECTION_IN		0x0
#define VF610_GPIO_DIRECTION_OUT	0x1

/* GPIO registers */
struct vybrid_gpio_regs {
	u32 gpio_pdor;
	u32 gpio_psor;
	u32 gpio_pcor;
	u32 gpio_ptor;
	u32 gpio_pdir;
};

struct vybrid_gpio_platdata {
	unsigned int chip;
	u32 base;
};
#endif	/* __ASM_ARCH_VF610_GPIO_H */