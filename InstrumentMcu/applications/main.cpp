/*
 * Copyright (c) 2006-2022, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-06-04     RT-Thread    first version
 */

#include <rtthread.h>


#define DBG_TAG "main"
#define DBG_LVL DBG_LOG
#include <rtdbg.h>
using namespace std;



void InitPin()
{


}

int GetBoardType()
{
    InitPin();
    //逐位获取数据
    return 0;
}

void InitBoardPerip(int boardType)
{
    switch (boardType) {
    case 1:

        break;
    case 2:

        break;
    default:
        break;
    }
}

void InitThread(int boardType)
{
    switch (boardType) {
    case 1:

        break;
    case 2:

        break;
    default:
        break;
    }
}

int main(void)
{
    //初始化板类型引脚定义
    auto ret = GetBoardType();
    InitBoardPerip(ret);
    InitThread(ret);
    while(1)
    {
        //LED
        rt_thread_mdelay(1000);
    }
    return 0;
}
