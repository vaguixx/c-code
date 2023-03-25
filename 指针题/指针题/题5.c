#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//#include<stdio.h>
//
//int main()
//{
//	int a[5][5];
//	//定义一个未初始化的数组
//	int(*p)[4];
//	//这样定义会将p定义成有权限读取4个字节的指针
//	//定义一个数组指针
//	p = a;
//	//p指向a数组，这个指针刚好指向二维数组中第4个数组，即a[4][0],a[4][1],a[4][2],a[4][3],a[4][4]
//	printf("%p  %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}