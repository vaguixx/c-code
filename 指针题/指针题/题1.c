#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//#include<stdio.h>
//
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	//这里&a，是取整个数组的地址，即&a+1这个时候是数组外第一个int型元素的地址
//	//然后强制类型转换为int*型
//	//相当于用ptr指针指向了数组外第一个int型元素
//	printf("%d %d", (*a + 1), *(ptr - 1));
//	//*a+1,很简单理解，a这里没有单独存在或者&a，代表的是首元素的地址，*a+1为第二个元素
//	//ptr-1， 因为ptr是int*型指针，-1向后移四个字节，即指向5
//	return 0;
//}