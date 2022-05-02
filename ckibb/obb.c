#include <regx51.h>
#include <intrins.h>
#define uint unsigned int
#define uc unsigned char

uc a,flag,num;
sbit beep = P2^5;

/*void delay(uint xms)
{
   uc i, j;
   while(xms--) 
  {
	i = 2;
	j = 239;
	do { while (--j); }
	while (--i);
  }
}  */

void delay(uint i)
{
	while(i--);
}

void init()
{
	TMOD=0x20;	 //定时器1，工作方式2，八位初值自动重载 	 
	TH1=0xfd;	 //设置波特率为9600
	TL1=0xfd;
	TR1=1;		 //开启定时器1
 
	SM0=0;
	SM1=1;		 //设置串口工作模式1，八位数据波特率可变
    REN=1;		 //允许串口接收
	EA=1;	     //允许总中断
	ES=1;		 //允许串口中断
}

void main()
{
	init();
	while(1)
	{
		if(a=='1')
		{
			beep=0;
			delay(500);
			beep=1;
			delay(500);
		}
		if(a=='2')
		{
			TR0=0;
			beep=1;
		}
	}	
}
void  ser() interrupt 4
{
	ES=0;
	RI=0;
	a=SBUF;
	if(a=='2')
	{
		flag=1;
	}  
	ES=1;
}
