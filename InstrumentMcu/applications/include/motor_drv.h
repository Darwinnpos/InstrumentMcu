/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-06-05     Administrator       the first version
 */
#ifndef APPLICATIONS_INCLUDE_MOTOR_DRV_H_
#define APPLICATIONS_INCLUDE_MOTOR_DRV_H_


#include "define.h"
#include <stdint.h>

class CMotorDrv
{
public:
    CMotorDrv(uint8_t _driver_num);
    ~CMotorDrv();
private:
    uint8_t driver_num;//驱动器号码

public:
    int run(uint32_t position);


};







#endif /* APPLICATIONS_INCLUDE_MOTOR_DRV_H_ */
