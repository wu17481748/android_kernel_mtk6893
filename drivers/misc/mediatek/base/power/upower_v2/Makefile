
# Copyright (C) 2017 MediaTek Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 2 as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#

ifeq ($(CONFIG_MACH_MT6833),y)
    platform = mt6833
else ifeq ($(CONFIG_MACH_MT6781),y)
    platform = mt6781
else ifeq ($(CONFIG_MACH_MT6877),y)
    platform = mt6877
else
    platform = $(subst ",,$(CONFIG_MTK_PLATFORM))
endif

ccflags-y += \
	-I$(srctree)/drivers/misc/mediatek/include/mt-plat/	\
	-I$(srctree)/drivers/misc/mediatek/base/power/include/	\
	-I$(srctree)/drivers/misc/mediatek/base/power/include/upower_v2	\
	-I$(srctree)/drivers/misc/mediatek/base/power/eem_v2/$(platform)/inc	\
	-I$(srctree)/drivers/misc/mediatek/include/mt-plat/$(platform)/include/mach	\

ifeq ($(CONFIG_MTK_TINYSYS_SSPM_SUPPORT), y)
ifeq ($(CONFIG_MACH_MT6768),y)
ccflags-y += -I$(srctree)/drivers/misc/mediatek/sspm/v1/
else
ccflags-y += -I$(srctree)/drivers/misc/mediatek/sspm/
endif
ccflags-y += -I$(srctree)/drivers/misc/mediatek/sspm/$(platform)
ccflags-y += -I$(srctree)/drivers/devfreq
endif

obj-y += mtk_unified_power.o
obj-y += mtk_unified_power_internal.o
obj-y += mtk_unified_power_api.o
obj-$(CONFIG_MACH_MT6763) += mtk_unified_power_mt6763.o
obj-$(CONFIG_MACH_MT6758) += mtk_unified_power_mt6758.o
obj-$(CONFIG_MACH_MT6739) += mtk_unified_power_mt6739.o
obj-$(CONFIG_MACH_MT6765) += mtk_unified_power_mt6765.o
obj-$(CONFIG_MACH_MT6761) += mtk_unified_power_mt6761.o
obj-$(CONFIG_MACH_MT6771) += mtk_unified_power_mt6771.o
obj-$(CONFIG_MACH_MT3967) += mtk_unified_power_mt3967.o
obj-$(CONFIG_MACH_MT6779) += mtk_unified_power_mt6779.o
obj-$(CONFIG_MACH_MT6768) += mtk_unified_power_mt6768.o
obj-$(CONFIG_MACH_MT6781) += mtk_unified_power_mt6781.o
obj-$(CONFIG_MACH_MT6893) += mtk_unified_power_mt6893.o
obj-$(CONFIG_MACH_MT6873) += mtk_unified_power_mt6873.o
obj-$(CONFIG_MACH_MT6853) += mtk_unified_power_mt6853.o
obj-$(CONFIG_MACH_MT6833) += mtk_unified_power_mt6833.o
obj-$(CONFIG_MACH_MT6877) += mtk_unified_power_mt6877.o
obj-$(CONFIG_MACH_MT6885) += mtk_unified_power_mt6885.o
obj-$(CONFIG_MACH_MT6785) += mtk_unified_power_mt6785.o
