#include"time.h"

//Timer Configuration

//ʹ��12Mhz����

//�����ϣ�12Mhz����12��Ƶ֮��

//Ӧ����100�μ���ʱ����100us

//ͨ��ʾ����ʵ��

//ѡ��65�μ�������һ���ж�

 

void Timer0Initial()

{

	TH0 = (65536-65)/256;

	TL0 = (65536-65)%256;

} //�ó�ֵʹÿ0.1ms����һ���ж�

 

void initial_Timer()

{

	EA = 1;		   //�������ж�

	ET0 = 1;	   //����T0�ж�

	TMOD = 0x01;	//��ʱ��ģʽ��T0ʹ�ù�����ʽ1

	Timer0Initial();	  //װ��ֵ��0.1ms����һ���ж�

	TR0 = 1;			  //��T0��ʱ��

}

 

void delay(unsigned int x)

{

	unsigned int i,j;

	for(i = 0;i< x; ++i)

		for(j = 120; j >0 ; --j)

			;

}
