#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//realloc函数是真正的动态开辟空间
//有的时候觉得申请空间太小，；有的时候又会太大，realloc能够解决这个问题
//void* realloc （void* ptr,size_t  size）;
//ptr是要改变的内存大小的地址，size是要改变的大小，修改完成后返回void*指针指向那片空间


//realloc函数修改动态开辟空间时有两种情况
//1.后面空间无占用，能够正常开辟
//2.后面空间使用冲突，不能正常开辟，这个时候realloc函数会在后面找到足够的空间开辟
//   将指针指向该空间，并且将之前开辟的空间释放


//realloc使用

//#include<stdio.h>
//#include<stdlib.h>
//#include<errno.h>
//
//int main()
//{
//	//先用malloc开辟空间、
//	int * p =(int*)malloc(40);
//	//判断
//	if (p == NULL)
//	{
//		perror(errno);
//		return 1;
//	}
//	//初始化
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	p = (int *)realloc(p, 80);
//	//释放
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}