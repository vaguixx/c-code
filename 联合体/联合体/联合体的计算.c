#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//联合体的大小至少是最大成员的大小
//当最大成员的大小不是最大对齐数的整数倍时，就要对齐到最大对齐数的整数倍

//#include<stdio.h>
//
//union un1 
//{
//	char c[5];
//	int i;
//};
//
//union un2
//{
//	short c[7];
//	int i;
//};
//
//int main()
//{
//	//输出联合体的大小
//	printf("%d\n", sizeof(union un1));//8
//	printf("%d\n", sizeof(union un2));//16
//
//
//	return 0;
//}