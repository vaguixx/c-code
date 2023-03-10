#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int  main()
{
	int arr[] = { 0 };//数组可以不输入值去让系统自己计算，但是要输入必须是常量表达式
	                        //不设置数组大小的时候必须给数组初始化
	char arr4[] =  "a,b,c,d,e,f" ;
	printf("%d\n", sizeof(arr4));
		printf("%d\n", strlen(arr4));

		//strlen和sizeof没有关联
		//strlen --只能求字符串长度 --是库函数--得引头文件
		//sizeof -- 求变量、数组、字符串的大小--单位是字节 --是操作符--不用引用头文件
	return 0;
}