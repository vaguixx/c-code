#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//打印一个数二进制的奇数位和偶数位
//#include<stdio.h>
//
// void whatof(int x)
//{
//	 int i = 0;//00000000000000000000000000001111
//	 int p = 0;
//	//先打印正数第一位 32位int打印第一位，就是右移31位，然后&1，
//	 for (i = 31; i >=1; i -= 2)
//	 {
//
//		 printf("%d  ", (x>>i) & 1);
//	 }
//	 //奇偶数项分割
//	 printf("\n");
//	 //打印偶数项
//	 for (i = 30; i >= 0; i -= 2)
//	 {
//		 printf("%d  ", (x >> i) & 1);
//	 }
//	 
//}
//
//int main()
//{
//	int a = 0;
//	printf("请输入一个数\n");
//	scanf("%d", &a);
//	whatof(a);
//}