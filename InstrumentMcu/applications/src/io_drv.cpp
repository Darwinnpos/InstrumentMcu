/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-06-05     Administrator       the first version
 */

#include "io_drv.h"

CIODrv::CIODrv(uint8_t _driver_num)
{
    driver_num = _driver_num;
}

CIODrv::~CIODrv()
{

}

int CIODrv::on()
{
    return 0;
}

int CIODrv::off()
{
    return 0;
}
