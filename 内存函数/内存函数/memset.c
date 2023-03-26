#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//memset函数 把目的地址的num个字节的元素，设置成“value”
//int cmp (const void* ptr,value,num)


#include<stdio.h>
#include<string.h>

int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 20);//以字节为单位设置内存
	return 0;
}