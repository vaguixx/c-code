#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//calloc函数
//void* calloc(size_t num,size_t size)
//传给calloc，需要开辟参数的数量，和一个参数的大小，calloc函数会在堆区开辟一片空间，
//返回void* 指针指向开辟空间的首地址
//calloc除了传的参数不一样以外，calloc比molloc函数多了一个初始化的功能
//calloc函数会在堆区开辟空间的时候，将开辟的空间进行初始化

//calloc函数使用

//#include<stdio.h>
//#include<errno.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	int * p = (int*)calloc(4, 10);//开辟40个字节的空间
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int  i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ",*(p+i));
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", *(p + i));
//	}
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}