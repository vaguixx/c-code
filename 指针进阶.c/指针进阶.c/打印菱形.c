#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//��ӡ����
//#include<stdio.h>
//
//int main()
//{
//	//��ӡ���εĴ�С��line����
//	int line = 0;
//	scanf("%d", &line);//����Ŀ7Ϊ��
//	//�ϰ�
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < line;i++)
//	{
//		//��ӡ�ո�
//		
//		for (j = 0; j <line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		//����
//		printf("\n");
//	}
//	//�°�
//	
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}