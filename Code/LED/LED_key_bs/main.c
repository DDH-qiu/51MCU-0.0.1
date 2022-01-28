#include"regx52.h"//引入51单片机头文件
#include"Delayms.h"//引入延时函数


void main()  //主函数
{
		unsigned char LEDNum=0;
		while(1) //循环防止跑飞
		{
				if(P3_1==0)
				{
					Delayms(20);//按键检测
					while(P3_1==0);
					Delayms(20);
					
					LEDNum++;//P2口赋值，实现二进制移位的功能
					P2=~LEDNum;
				}
		}
	
}