#include <reg52.h>
#include <stdio.h>
#define lt 0x06;
#define rt 0x09;
#define stop 0x00;
#define st 0x0a;
#define rev 0x05;

unsigned int a ;
void delay(unsigned int t)
{
	int i;
	int j;
	for(i=0;i<t;i++)
{	
	for(j=0;j<1275;j++);
	
}
}

void main()
{
	while(1)
	{
  	a=P1&0x03;
		if(a==0x01)
		{
	  	P2=rev;
			P0=rev;
			delay(50);
			P2=stop;
			P0=stop;
			delay(50);
		  P2=lt;
		  P0=lt;
			delay(50);
		}
			
	if(a==0x02)
	{
		P2=rev;
		P0=rev;
		delay(50);
		P2=stop;
		P0=stop;
		delay(50);
		P2=rt;
		P0=rt;
		delay(50);
	}
	 
	if(a==0x03)
	{
		P2=rev;
		P0=rev;
		delay(50);
		P2=stop;
		P0=stop;
		delay(50);
		P2=rt;
		P0=rt;
		delay(50);
	}
	if(a==0x00)
	{
		P2=st;
		P0=st;
	}
}
}