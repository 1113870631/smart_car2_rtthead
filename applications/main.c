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
#include <motrol_dir.h>




int main(void)
{


    /*
     *
     * */

    rt_device_t pwm_dev;
    pwm_dev = (struct rt_device_pwm *)rt_device_find("pwm3");
    rt_pwm_enable(pwm_dev, 1);
    dir_init(pwm_dev);
    //ch_dir(0 ,1,pwm_dev);
     set_motrol_pin();
     motrol_1_con(MOTROL_FORHEAD , 1);
     motrol_2_con(MOTROL_FORHEAD , 1);
     rt_thread_delay(5000);
     thead_creat();
     return RT_EOK;
}
