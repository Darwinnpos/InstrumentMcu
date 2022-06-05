/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-06-05     Administrator       the first version
 */


#include "motor_drv.h"

CMotorDrv::CMotorDrv(uint8_t _driver_num)
{
    driver_num = _driver_num;
}

CMotorDrv::~CMotorDrv()
{

}

int CMotorDrv::run(uint32_t position)
{
    return 0;
}
