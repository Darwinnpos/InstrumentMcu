/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-06-05     Administrator       the first version
 */
#include <device_mng.h>

CDeviceMng* instance = new CDeviceMng();


CDeviceMng::CDeviceMng()
{
    for (int i = 0; i < NUM_MOTOR_DRV; ++i) {
        motor_drv[i] = new CMotorDrv(i);
    }
}

CDeviceMng::~CDeviceMng()
{

}

CDeviceMng* CDeviceMng::GetInstance()
{
    return instance;
}
