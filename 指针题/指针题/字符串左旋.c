#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//用函数实现字符串左旋

//#include<stdio.h>
//#include<string.h>
//
//void leftxuan(char* arr, int sz,int k)
//{
//	//左旋函数实现
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		//转移字符
//		char tmp = 0;
//		tmp = *arr;
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + sz - 1) = tmp;
//	}
//
//}
//
//int main()
//{
//	//给一个字符串
//	char arr[20] = "abcdefghi";
//	//不应该是字符串长度，应该是元素个数
//	int sz = strlen(arr);
//	//左旋字符的个数
//	int k = 3;
//	//定义左旋函数
//	leftxuan(arr,sz,k );
//	//打印字符串
//	printf("%s\n", arr);
//	return 0;
//}

//三步翻转法实现字符串左旋

//#include<stdio.h>
//#include<string.h>
//void reverse(char* left, char*right)
//{
//	
//	//定义交换用的空瓶
//	char tmp = 0;
//	//实现翻转
//	while (left<right)
//	{
//		//两个数交换
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		//指针移动
//		left++;
//		right--;
//	}
//
//}


int main()
{
	//给定字符串
	char arr[20] = "abcdefghi";
	//计算字符串长度
	int n =strlen(arr);
	//左指针
	char* left = arr;
	//右指针
	char* right = arr + n - 1;
	//定义翻转函数reverse
	reverse(left,right);
	//定义三次翻转函数
	//打印字符串
	printf("%s\n", arr);
	return 0;
}