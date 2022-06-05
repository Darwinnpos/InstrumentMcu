/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-06-05     Administrator       the first version
 */
#ifndef APPLICATIONS_INCLUDE_IO_DRV_H_
#define APPLICATIONS_INCLUDE_IO_DRV_H_

#include "define.h"
#include <stdint.h>

class CIODrv
{
public:
    CIODrv(uint8_t _driver_num);
    ~CIODrv();
private:
    uint8_t driver_num;//驱动器号码
public:
    int on();
    int off();
};



#endif /* APPLICATIONS_INCLUDE_IO_DRV_H_ */
