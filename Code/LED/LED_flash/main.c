#include"regx52.h"
#include"Delay.h"

void main()
{
	while(1)
	{
		P2=0xFF;
		Delayms(10);
		P2=0xFE;
		Delayms(10);
	}	
}
