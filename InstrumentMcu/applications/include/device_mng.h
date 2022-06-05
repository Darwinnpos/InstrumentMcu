/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-06-05     Administrator       the first version
 */
#ifndef APPLICATIONS_INCLUDE_DEVICE_MNG_H_
#define APPLICATIONS_INCLUDE_DEVICEMNG_H_

#include "motor_drv.h"

class CDeviceMng {
public:
    CDeviceMng();
    ~CDeviceMng();
private:
    CMotorDrv* motor_drv[NUM_MOTOR_DRV];
    static CDeviceMng* instance;
public:
    static CDeviceMng* GetInstance();

};





#endif /* APPLICATIONS_INCLUDE_DEVICE_MNG_H_ */
