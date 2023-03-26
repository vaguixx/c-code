#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//strtok函数用来分割字符串
//第一个参数指定字符串，它包含了0个或者多个由sep中一个或者多个分隔符分割的标记
//strtok函数找到下一个标记，将其用’\0‘结尾，返回一个指向这个标记的指针，（注意！strtok函数会改变字符串）
//一般用它的可以改变内容的临时拷贝来进行操作
//strtok第一的参数不为NULL，函数找到字符串中第一个标记，strtok将保存它在字符串中的位置，
//strtok第一的参数为NULL，函数将从上一个保存的位置开始，查找下一个标记
//字符串中不存在更多的标记就会返回NULL指针

#include<stdio.h>
#include<string.h>

//int main()
//{
//	
//	char arr[30] = "192.168.132.88";
//	char* p = ".";
//	char tmp[30] = { 0 };
//	strcpy(tmp, arr);
//	char* ret = NULL;
//	//strtok函数的使用
//	ret = strtok(tmp, p);//塞第一个\0，即192\0168.132.88\0
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);//直接从上一个\0的位置开始访问，塞第二个\0，192\0168\0132.88\0
//	ret = printf("%s\n", ret);
//	ret = strtok(NULL, p);//直接从上一个\0的位置开始访问，塞第三个\0，192\0168\0132\088\0
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);//最后一个
//	printf("%s\n", ret);
//	return 0;
//}

//明显发现上面代码冗余过大，且不方便使用
//int main()
//{
//
//	char arr[30] = "192.168.132.88";
//	char* p = ".";
//	char tmp[30] = { 0 };
//	strcpy(tmp, arr);
//	char* ret = NULL;
//	//strtok函数的使用
//	for (ret = strtok(tmp, p); ret != NULL;ret = strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}