#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//结构体传参最好是用指针传递结构体的地址
//1.如果直接传结构体进去，系统会直接生成一份结构体内存的临时拷贝
//若是结构体过大，则会压栈，且内存浪费严重
//2.若想要改变结构体内部的值，临时拷贝的结构体是做不到的，用指针可以做到


//结构体传参实践

//#include<stdio.h>
//
////创建结构体
//struct s
//{
//	int data[1000];
//	int num;
//};
//
//
////结构体实体化
//struct s s1 = { 0 };
//
////构造函数
//void print(struct s* pb)
//{
//	printf("%d\n", pb->num);
//}
//int main()
//{
//	//
//	return 0;
//}