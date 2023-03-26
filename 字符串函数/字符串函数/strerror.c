#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//函数strerror,把错误码转换为错位信息
//函数perror，直接打印错位信息
// 首先把错误码转换成错误信息，打印错误信息（包含错误信息）
//void perror(const char* str)

#include<stdio.h>
#include<string.h>
#include<errno.h>

int main()
{
	FILE* pb = fopen("test.txt","r");//fopen,用来打开一个文件，后面是文件名，和打开方式“r”为只读文件
	//fopen要是执行成功，返回一个文件指针，要是执行失败，返回NULL空指针
	if (pb == NULL)
	{
		printf("%s\n",strerror(errno));//errno,记录最近发生的错误，返回错误码
		perror("fopen");
		return 1;
	}
	else
	{
		printf("找到了\n");
	}
	//关闭文件
	fclose(pb);
	//指针置空
	pb = NULL;
	return 0;
}