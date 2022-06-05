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

CDeviceMng* CDeviceMng::instance = new CDeviceMng();


CDeviceMng::CDeviceMng()
{
    //对所有的电机对象初始化
    for (int i = 0; i < NUM_MOTOR_DRV; ++i) {
        motor_drv[i] = new CMotorDrv(i);
    }
    //对所有的数字输出对象初始化
    for (int i = 0; i < NUM_IO_DRV; ++i) {
        io_drv[i] = new CIODrv(i);
    }

}

CDeviceMng::~CDeviceMng()
{

}

CDeviceMng* CDeviceMng::GetInstance()
{
    return instance;
}

int CDeviceMng::motorRun(uint8_t driver_num, uint32_t position)
{
    return motor_drv[driver_num]->run(position);
}


int CDeviceMng::ioOn(uint8_t driver_num)
{
    return io_drv[driver_num]->on();
}
int CDeviceMng::ioOff(uint8_t driver_num)
{
    return io_drv[driver_num]->off();
}

