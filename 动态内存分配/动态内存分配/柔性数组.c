#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//柔性数组
//1.结构体中柔性数组成员前面必须要有一个成员
//2.sizeof（结构体），返回的大小并不包括柔性数组的内存
//3.包含柔性数组成员的结构体用malloc函数进行动态的内存分配，并且分配的
//内存应该大于结构体的大小，以适应柔性数组的预期大小


//例如
#include<stdio.h>
#include<stdlib.h>

struct stu
{
	int a;
	int arr[];//柔性数组成员
};

int main()
{
	struct stu s1;
	int* p = (int*)malloc(sizeof(struct stu) );
	printf("%d\n", sizeof(struct stu));//4,系统并不会计算柔性数组成员的大小
	free(p);
	p = NULL;
	return 0;
}