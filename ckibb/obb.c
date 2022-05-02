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
	TMOD=0x20;	 //��ʱ��1��������ʽ2����λ��ֵ�Զ����� 	 
	TH1=0xfd;	 //���ò�����Ϊ9600
	TL1=0xfd;
	TR1=1;		 //������ʱ��1
 
	SM0=0;
	SM1=1;		 //���ô��ڹ���ģʽ1����λ���ݲ����ʿɱ�
    REN=1;		 //�����ڽ���
	EA=1;	     //�������ж�
	ES=1;		 //�������ж�
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
