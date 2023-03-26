#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//memcmp内存比较函数，类比于strcmp函数

//memcmp的基本思路和strcmp函数一模一样，先比较第一个元素的大小，如果相同就会继续比较，不同就会返回
//值，>返回正数，<返回负数，=返回0；
//同样和比较的内存的长度无关，且memcmp需要传入比较多少个字节的参数，比完会停止


#include<stdio.h>
#include<string.h>

int main()
{
	float arr1[] = { 1.0,2.0,3.0,4.0,5.0 };
	float arr2[] = { 1.0,2.0 };
	int ret = memcmp(arr1, arr2, 12);
	printf("%d\n", ret);
	return 0;
}