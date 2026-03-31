/*
 * Copyright (C) 2017 ROCKCHIP, Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _DT_BINDINGS_SOC_ROCKCHIP_SYSTEM_STATUS_H
#define _DT_BINDINGS_SOC_ROCKCHIP_SYSTEM_STATUS_H

#define RK_SYS_STATUS_NORMAL		(1 << 0)
#define RK_SYS_STATUS_SUSPEND		(1 << 1)
#define RK_SYS_STATUS_IDLE		(1 << 2)
#define RK_SYS_STATUS_REBOOT		(1 << 3)
#define RK_SYS_STATUS_VIDEO_4K		(1 << 4)
#define RK_SYS_STATUS_VIDEO_1080P	(1 << 5)
#define RK_SYS_STATUS_GPU		(1 << 6)
#define RK_SYS_STATUS_RGA		(1 << 7)
#define RK_SYS_STATUS_CIF0		(1 << 8)
#define RK_SYS_STATUS_CIF1		(1 << 9)
#define RK_SYS_STATUS_LCDC0		(1 << 10)
#define RK_SYS_STATUS_LCDC1		(1 << 11)
#define RK_SYS_STATUS_BOOST		(1 << 12)
#define RK_SYS_STATUS_PERFORMANCE	(1 << 13)
#define RK_SYS_STATUS_ISP		(1 << 14)
#define RK_SYS_STATUS_HDMI		(1 << 15)
#define RK_SYS_STATUS_VIDEO_4K_10B	(1 << 16)
#define RK_SYS_STATUS_LOW_POWER		(1 << 17)

#define RK_SYS_STATUS_VIDEO		(RK_SYS_STATUS_VIDEO_4K | \
					 RK_SYS_STATUS_VIDEO_1080P | \
					 RK_SYS_STATUS_VIDEO_4K_10B)
#define RK_SYS_STATUS_DUALVIEW		(RK_SYS_STATUS_LCDC0 | RK_SYS_STATUS_LCDC1)

#endif
