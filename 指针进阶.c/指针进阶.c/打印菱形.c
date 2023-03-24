#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//打印菱形
//#include<stdio.h>
//
//int main()
//{
//	//打印菱形的大小用line控制
//	int line = 0;
//	scanf("%d", &line);//以题目7为例
//	//上半
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < line;i++)
//	{
//		//打印空格
//		
//		for (j = 0; j <line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		//换行
//		printf("\n");
//	}
//	//下半
//	
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}