#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//求两个数二进制位中，有多少个位不同
//10 1010   15  1111    5  0101
//#include<stdio.h>
//
//int  def_number(int x)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 32; i++)
//	{
//		if (x & 1 == 1)
//		{
//			count++;
//			
//		}
//		x = x >> 1;
//	}
//	return count;
//}
//
//int main()
//{
//	
//	printf("请输入两个正整数：\n");
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	c = a ^ b;
//	
//	printf("不同的位数为%d", def_number(c));
//
//	return 0;
//}