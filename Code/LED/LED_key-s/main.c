#include"regx52.h"
#include"Delayms.h"

unsigned char LEDNum;
void main()
{
	
	while(1)
	{
		LEDNum=0x7F;
		if(P3_1==0)
		{
			Delayms(20);
			while(P3_1==0);
			Delayms(20);
			
			LEDNum++;
			if(LEDNum>=8)
				LEDNum=0;
			P2=~(0x01<<LEDNum);
		}
		if(P3_0==0)
		{
			Delayms(20);
			while(P3_0==0);
			Delayms(20);

			if(LEDNum==0)
				LEDNum=7;
			else 
				LEDNum--;
			P2=~(0x01<<LEDNum);
		}
	}	
}
