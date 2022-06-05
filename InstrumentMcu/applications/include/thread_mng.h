/*
 * Copyright (c) 2006-2021, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-06-05     Administrator       the first version
 */
#ifndef APPLICATIONS_INCLUDE_THREAD_MNG_H_
#define APPLICATIONS_INCLUDE_THREAD_MNG_H_

#include "define.h"

//线程管理的单例类
class CThreadMng {
public:
    CThreadMng();
    ~CThreadMng();
private:
    static CThreadMng* instance;
    ErrorCode InitCanThread();
    ErrorCode InitPeripThread();
    ErrorCode InitMotorThread();
    ErrorCode InitComThread(int boardType);
    ErrorCode InitDrvThread(int boardType);
public:
    //获取线程管理单例类
    static CThreadMng* GetInstance();
    //初始化所有线程
    ErrorCode InitThread(int boardType);
};



#endif /* APPLICATIONS_INCLUDE_THREAD_MNG_H_ */
