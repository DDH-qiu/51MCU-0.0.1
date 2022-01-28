#include "REGX52.h"//52单片机的头文件
#include "Delayms.h"//引入延时函数

void main()
{
	while(1)
	{
		if(P3_1==0)
		{
			Delayms(100);//消除抖动
			while(P3_1==0)//判断松开是否
			Delayms(100);//消除抖动
			P2_0=~P2_0;//控制LED灯的亮灭
		}
	}
	
}