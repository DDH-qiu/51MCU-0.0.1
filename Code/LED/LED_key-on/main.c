#include "REGX52.h"//52��Ƭ����ͷ�ļ�
#include "Delayms.h"//������ʱ����

void main()
{
	while(1)
	{
		if(P3_1==0)
		{
			Delayms(100);//��������
			while(P3_1==0)//�ж��ɿ��Ƿ�
			Delayms(100);//��������
			P2_0=~P2_0;//����LED�Ƶ�����
		}
	}
	
}