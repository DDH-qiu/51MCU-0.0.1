#include"regx52.h"


void main()  //主函数
{
		while(1) //循环防止跑飞
		{
			if(P3_1==0) //按键检测输入值是否等于0，如果接地就置零
			{
				P2_0=0;//如果按键按下，LED端口就置零使LED亮
			}
			else
			{
				P2_0=1;//按键未按下（端口默认为1）LED端口置1，LED灭
			}
			
		}
		
}