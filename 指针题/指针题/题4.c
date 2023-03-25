#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//#include<stdio.h>
//
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	//这里考点是，当初始化数组时，如果放入的是小括号的话，括号里面应该理解为逗号表达式
//	//逗号表达式的意义是，前面的元素都会计算，但是返回值只与最后一个元素有关
//	//即这个时候数组应该是，1，3，5，0，0，0
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}