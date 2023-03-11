#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void bubble_sort(int a[], int sz)
//{
//	
//	int i = 0;
//	for (i = 1; i < sz; i++)
//	{
//		int flag = 1;//定义一个常量来判断数组是否顺序
//		int j = 0;
//		for (j = 0; j < sz - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//				//如果发生交换，则说明数组顺序依然混乱，继续排序
//				flag = 0;//发生交换flag变成0；继续排
//			}
//		}
//		if (flag == 1)
//		{
//			//如果这趟排序没有任何交换，这个时候数组已经是顺序了，不用排列，直接跳出循环
//			break;//break只能跳出一个循环，必须在外层才能停止循环
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
void bubble_sort(int a[], int sz)
{

	int i = 0;
	for (i = 1; i < sz; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}


int main()
{
	//数组初始化
	int a[10] = { 0 };
	int i = 0;
	//搞一个自己填充数字的数组
	printf("请输入10个数字\n");
	int sz = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("输入完成！！\n");
	//进入函数比大小
	bubble_sort(a, sz);
	//定义循环输出数组
	printf("顺序输出为：\n");
	for (i = 0; i <= sz - 1; i++)
	{
		printf("%d  ", a[i]);
	}
	return 0;
}