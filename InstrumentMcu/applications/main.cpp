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
#include "define.h"
#include <vector>

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

ErrorCode InitCanThread()
{
    return NO_ERROE;
}
ErrorCode InitPeripThread(){return NO_ERROE;};
ErrorCode InitMotorThread()
{
    for(int i = 0; i < 5; i++)
    {


    }
    return NO_ERROE;
};

ErrorCode InitThread(int boardType)
{
    //根据单板资源创建驱动线程
    vector<ErrorCode> ret;
    ErrorCode tmp_ret;
    switch (boardType) {
    case 1:
        tmp_ret = InitPeripThread();
        ret.push_back(tmp_ret);
        tmp_ret = InitMotorThread();
        ret.push_back(tmp_ret);
        break;
    case 2:

        break;
    default:
        break;
    }
    //创建公共线程
    //can 通信
    tmp_ret = InitCanThread();
    ret.push_back(tmp_ret);
    //检查 整体的错误情况
    for(auto iter = ret.begin(); iter != ret.end(); iter++)
    {
        if(*iter != NO_ERROE)
        {
            return ERROR;
        }
    }
    return NO_ERROE;
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
