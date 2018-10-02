#ifndef _KEY_H_
#define _KEY_H_
#include<reg52.h>
sbit key1 = P2^0;//按键控制电机正转
sbit key2 = P2^1;//停止  
sbit key3 = P2^2;//按键控制电机转动一圈

sbit DIR=P0^1; //控制电机转动方向
sbit EN=P0^2;  //使能端口
void keyscan();
void initial();

#endif