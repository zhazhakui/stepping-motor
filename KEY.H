#ifndef _KEY_H_
#define _KEY_H_
#include<reg52.h>
sbit key1 = P2^0;//�������Ƶ����ת
sbit key2 = P2^1;//ֹͣ  
sbit key3 = P2^2;//�������Ƶ��ת��һȦ

sbit DIR=P0^1; //���Ƶ��ת������
sbit EN=P0^2;  //ʹ�ܶ˿�
void keyscan();
void initial();

#endif