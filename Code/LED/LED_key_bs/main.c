#include"regx52.h"//����51��Ƭ��ͷ�ļ�
#include"Delayms.h"//������ʱ����


void main()  //������
{
		unsigned char LEDNum=0;
		while(1) //ѭ����ֹ�ܷ�
		{
				if(P3_1==0)
				{
					Delayms(20);//�������
					while(P3_1==0);
					Delayms(20);
					
					LEDNum++;//P2�ڸ�ֵ��ʵ�ֶ�������λ�Ĺ���
					P2=~LEDNum;
				}
		}
	
}