//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
////void bubble_sort(int arr[], int sz)//数组传参不可能把数组的每一个值都传，太过于浪费空间
////{													//数组传参传的是一个数组的首地址
////	//确定冒泡排序的趟数
////	int i = 0;
////	for (i = 1; i <=sz - 1; i++)
////	{
////		//定义交换函数和交换次数
////		int j = 0;
////		for(j =0; j <= sz - i; j++)
////		{
////			if (arr[j] > arr[j + 1]) 
////			{
////				int tmp = arr[j ];
////				arr[j ] = arr[j + 1];
////				arr[j+1] = tmp;
////			}
////		}
////	}
////
////}
////
////
////int main()
////{
////	//定义一个数组进行函数传参
////	int arr[] = {9, 8,7,6,5,4,3,2,1,0 };
////	//确定数组元素个数
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	//定义一个函数进行冒泡排序
////	bubble_sort(arr, sz);
////	//定义一个循环来输出数组
////	int i = 0;
////	for (i =0; i < sz; i++)
////	{
////		printf("%d  ", arr[i]);
////	}
////
////	return 0;
////}
//
//
//
//
//#include<stdio.h>
//
//void bubble_sort(int a[], int sz)
//{
//	//定义外层循环，即相邻两个数比较完之后重新开始
//	int i = 0;
//	for (i = 1; i < sz; i++)
//	{
//		//内层相邻两个数比较
//		int j = 0;//j为数组下标
//		for (j = 0; j < sz - i; j++)//j不能等于sz-i，当j=9的时候a[j+1]= a[10],但是数组中并不存在a[10]
//		{										//所以报错，数组越界
//			//满足条件交换相邻的两个数
//			if (a[j] > a[j + 1])
//			{
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	//数组初始化
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(a) / sizeof(a[0]);//sz= 10
//	int i = 0;
//	//进入函数比大小
//	bubble_sort(a,sz);
//	//定义循环输出数组
//	for (i = 0; i <= sz - 1; i++)
//	{
//		printf("%d  ",a[i]);
//	}
//	return 0;
//}