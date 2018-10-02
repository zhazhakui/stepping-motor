#include"time.h"

//Timer Configuration

//使用12Mhz晶振

//理论上，12Mhz晶振12分频之后

//应该是100次计数时间是100us

//通过示波器实测

//选用65次计数产生一次中断

 

void Timer0Initial()

{

	TH0 = (65536-65)/256;

	TL0 = (65536-65)%256;

} //该初值使每0.1ms产生一次中断

 

void initial_Timer()

{

	EA = 1;		   //开启总中断

	ET0 = 1;	   //允许T0中断

	TMOD = 0x01;	//定时器模式，T0使用工作方式1

	Timer0Initial();	  //装初值，0.1ms产生一次中断

	TR0 = 1;			  //打开T0定时器

}

 

void delay(unsigned int x)

{

	unsigned int i,j;

	for(i = 0;i< x; ++i)

		for(j = 120; j >0 ; --j)

			;

}
