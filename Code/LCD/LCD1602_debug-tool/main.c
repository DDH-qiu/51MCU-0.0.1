#include"regx52.h"
#include"LCD1602.h"

void main()
{
	LCD_Init();
	LCD_ShowChar(1,1,'A');
	LCD_ShowString(1,3,"hello");
	while(1)
	{

	}	
}
