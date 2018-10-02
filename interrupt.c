#include"interrput.h"
#include"time.h"
unsigned int percent=0;
unsigned int target=5;
unsigned int angle;
#define tim 100//调节周期，步进电机的速度是与频率有关
void Timer0() interrupt 1 using 0
{
	
	percent += 1;

	if(percent == tim)

	{

		percent = 0;
		
		pwm1 = 1;
		angle--;
	
	}

	if(percent == target)

	{

		pwm1 = 0;

	}
	
	Timer0Initial();

 

}

