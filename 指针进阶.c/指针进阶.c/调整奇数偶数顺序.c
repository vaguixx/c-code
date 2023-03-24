#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//给一组数据，以函数的方式实现，将所有奇数放到偶数前面去

//#include<stdio.h>
//
//void move(int* arr, int sz)
//{
//	int* left =arr;
//	int* right = arr + sz - 1;
//	//交换奇数偶数的位置
//	while (left <= right)
//	{
//		//左指针找偶数
//		while (left <= right && *left % 2 == 1)
//		{
//			left++;
//		}
//		//右指针找奇数
//		while (left <= right && *right % 2 == 0)
//		{
//			right--;
//		}
//		//左右指针交换
//		if (left < right)
//		{
//			int tmp = 0;
//			tmp = *right;
//			*right = *left;
//			*left = tmp;
//		}
//		
//	}
//}
//
//void print(int* arr,int  sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}