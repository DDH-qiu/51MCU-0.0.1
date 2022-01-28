#include"regx52.h"
#include"Delayms.h"

void main()
{
	while(1)
	{
		P2=0xFE;
			Delayms(100);
			P2=0xFD;
			Delayms(100);
			P2=0xFB;
			Delayms(100);
			P2=0xF7;
			Delayms(100);
			P2=0xEF;
			Delayms(100);
			P2=0xDF;
			Delayms(100);
			P2=0xBF;
			Delayms(100);
			P2=0x7F;
			Delayms(100);
	}	
}

