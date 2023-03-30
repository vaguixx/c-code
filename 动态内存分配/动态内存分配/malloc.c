#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//malloc函数，用于开辟内存空间
//void* malloc(size_t size)
//malloc返回一个void*指针，函数内部标明要申请空间的大小，单位是字节，
// 若申请失败则会返回NULL空指针
// 
// malloc函数返回的是void*指针，它并不知道你是怎么使用，使用时完全按照你的需求强转
// 
// malloc函数的返回值一定要检查，一旦未开辟，那么返回就是空指针也叫野指针
// 
//当用malloc函数申请空间，必须在使用后用free函数释放空间，再将指针置空
//不然会造成内存泄露
// 
// 
// 
//系统处理malloc函数申请空间后释放只有两种情况
//1.程序运行结束   2.free函数释放
// free函数，前面必须有动态内存开辟，不然free函数的行为是未定义的
// 如果传给free函数的参数是NULL，函数什么都不会做
// 
//



//malloc  free使用

//#include<stdio.h>
//#include<stdlib.h>
//#include<errno.h>
//
//int main()
//{
//	int * p =(int*)malloc(40);
//	//检查是否开辟成功
//	if (p == NULL)
//	{
//		perror(errno);
//		return 1;
//	}
//	//成功
//	int i = 0;
//	//初始化
//	for (i = 0; i < 10; i++)
//	{
//		*(p+i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	//使用完记得释放空间，指针置空
//	free(p);
//	p = NULL;
//	return 0;
//}



//那么动态开辟空间的特点，与正常开辟有什么不同呢
//存储空间不同，int ，char，arr数组常量是在栈区开辟空间，而动态开辟内存是在堆区开辟


