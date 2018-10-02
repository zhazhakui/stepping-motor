#ifndef _INTERRPUT_H_
#define _INTERRPUT_H_

#include<reg52.h>

sbit pwm1 = P0^0;//设定PWM波输出端口

void Timer0();
#endif