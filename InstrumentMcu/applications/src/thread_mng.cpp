/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-06-05     Administrator       the first version
 */

#include "thread_mng.h"
#include <vector>
using namespace std;


CThreadMng* CThreadMng::instance = new CThreadMng();

CThreadMng::CThreadMng()
{

}

CThreadMng::~CThreadMng()
{

}

CThreadMng* CThreadMng::GetInstance()
{
    return instance;
}

ErrorCode CThreadMng::InitCanThread()
{
    return NO_ERROE;
}

ErrorCode CThreadMng::InitPeripThread()
{
    return NO_ERROE;
};

ErrorCode CThreadMng::InitMotorThread()
{
    for(int i = 0; i < NUM_MOTOR_DRV; i++)
    {


    }
    return NO_ERROE;
};

ErrorCode CThreadMng::InitDrvThread(int boardType)
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

ErrorCode CThreadMng::InitComThread(int boardType)
{
    vector<ErrorCode> ret;
    ErrorCode tmp_ret;
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

ErrorCode CThreadMng::InitThread(int boardType)
{
    vector<ErrorCode> ret;
    ErrorCode tmp_ret;
    tmp_ret = InitDrvThread(boardType);
    ret.push_back(tmp_ret);
    tmp_ret = InitComThread(boardType);
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
