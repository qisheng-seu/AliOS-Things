/*
 * Copyright (C) 2015-2020 Alibaba Group Holding Limited
 */

#ifndef __HUMITURE_H__
#define __HUMITURE_H__

#include "../menu.h"

extern MENU_TYP humiture;

int humiture_init(void);
int humiture_uninit(void);
void humiture_task(void);

static uint8_t icon_data_hygrometer_24_24[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x01, 0xFE, 0x00, 0x24, 0x24, 0x24, 0x24, 0x04, 0x80, 0xC0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x49, 0x09, 0x01, 0x00, 0x3E, 0x7F, 0x7F, 0x7F, 0x59, 0x63, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x7E, 0xFF, 0xFF, 0xFE, 0xFD, 0xFB, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
static icon_t icon_hygrometer_24_24 = {icon_data_hygrometer_24_24, 24, 24, NULL};

static uint8_t icon_data_thermometer_24_24[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x01, 0xFE, 0x00, 0x24, 0x24, 0x24, 0x24, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x49, 0x09, 0x01, 0x00, 0x04, 0x0A, 0xE4, 0x10, 0x10, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x7E, 0xFF, 0xFF, 0xFE, 0xFD, 0xFB, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x04, 0x04, 0x02, 0x00, 0x00};
static icon_t icon_thermometer_24_24 = {icon_data_thermometer_24_24, 24, 24, NULL};
#endif