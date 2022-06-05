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
#include "io_drv.h"

#include <string>
using namespace std;

class CDeviceMng {
public:
    CDeviceMng();
    ~CDeviceMng();
private:
    CMotorDrv* motor_drv[NUM_MOTOR_DRV];
    CIODrv* io_drv[NUM_IO_DRV];
    static CDeviceMng* instance;
public:
    static CDeviceMng* GetInstance();
    //一些关于电机的控制函数
    int motorRun(uint8_t driver_num, uint32_t position);
    int motorCfg(uint8_t driver_num, string cfgParamName, float param);
    int motorCfg(uint8_t driver_num, uint8_t cfgParamIndex, float param);
    //一些关于IO的控制函数
    int ioOn(uint8_t driver_num);
    int ioOff(uint8_t driver_num);
};





#endif /* APPLICATIONS_INCLUDE_DEVICE_MNG_H_ */
