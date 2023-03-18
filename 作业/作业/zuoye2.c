#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
////求一个数二进制位1的个数，10 1010
//#include<stdio.h>
//size_t numberof1(int x)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 32; i++)
//	{
//		if (x & 1 == 1)
//		{
//			count++;
//			x = x >> 1;
//		}
//		else
//		{
//			x = x >> 1;
//		}
//	}
//	return count;
//}
//
////老师讲的第一种有缺陷的方法
////15    00001111
////15%2  =1   这个1可以理解为二进制位最后面那个是不是1，不是1的话15%2=0
////统计了最后一位，那么就要移除它，并整体向后移1位
////15/2=7    7 = 00000111，如此重复即可
//
////但是这种方法仅限与正数；如果是-1，就不行，有很大的局限性
////size_t numberof1(int x)
////{
////	int count = 0;
////	while (x)
////	{
////		if (x % 2 == 1)
////		{
////			count++;
////		}
////		x /= 2;
////	}
////
////	return count ;
////}
//int main()
//{
//	int a = 0;
//	printf("请输入一个数：\n");
//	scanf("%d", &a);
//	numberof1(a);
//	printf("1的个数为%d\n", numberof1(a));
//
//	return 0;
//}