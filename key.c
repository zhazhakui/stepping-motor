#include"key.h"
#include"time.h"

extern unsigned int target;
extern unsigned int angle;
unsigned int model=2;

void keyscan()//����������
{
	if(key1 == 0)
	{
    	delay(3);
    	if(key1 == 0)
    	{
	    	EN = 1;
	    	model = 1;//����ģʽ
	    	while(!key1);
    	}
	}

	if(key2 == 0)
	{
		delay(3);
		if(key2 == 0)
		{
			EN = 0;
			while(!key2);
		}
	}

	if(key3 == 0)
	{				        
    	delay(3);
    	if(key3 == 0)
    	{
     		EN = 1;
	    	model = 2;
	    	angle = 200;
	    	while(!key3);
    	}
	}
	if((model==2)&&(angle ==0))//���趨�Ƕ�ת����ֹͣ
	       EN = 0;        
}

 void initial()//��ʼ��
{
	key1 = 1;
	key2 = 1;
    key3 = 1;
	DIR=0;
	EN=0;
	initial_Timer();
}
