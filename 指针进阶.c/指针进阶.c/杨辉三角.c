#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//打印简易杨辉三角
//1
//1 1
//1  2  1
//1  3   3   1
//1  4   6    4    1
//1  5  10  10   5   1


//#include<stdio.h>
//
//int main()
//{
//	//生成一个二维数组
//	int arr[10][10] = { 0 };
//	//给数组初始化
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)//遍历一行
//	{
//		//遍历一行的所有列
//		for (j = 0; j <= i; j++)
//		{
//			//所有第一列打印成1
//			arr[i][0] = 1;
//			//所有对角线元素打印为1
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			//计算除第一列和对角线外的其他数
//			if (i >= 2 && j>=1 )
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//
//	//打印出二维数组
//	for (i = 0; i < 10; i++)//遍历行
//	{
//		for (j = 0; j <= i; j++)//遍历列
//		{
//			printf("%d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}