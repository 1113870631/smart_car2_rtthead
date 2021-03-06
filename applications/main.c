/*
 * Copyright (c) 2006-2022, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-01-01     RT-Thread    first version
 */

#include <rtthread.h>
#define DBG_TAG "main"
#define DBG_LVL DBG_LOG
#include <rtdbg.h>
#include <rtdevice.h>
#include <thead_creat.h>
#include <motrol.h>





int main(void)
{

     rt_thread_delay(5000);
     set_motrol_pin();
     thead_creat();
     return RT_EOK;
}
