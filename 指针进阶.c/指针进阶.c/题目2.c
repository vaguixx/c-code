#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//使用指针打印数组内容
//arr为整形一维数组，写一个打印arr数组函数，不适用下表，使用函数

//#include<stdio.h>
//
//void print(int * p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", *(p+i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,88,7,9,78,21 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}