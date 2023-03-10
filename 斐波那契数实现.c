#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//建立函数模块
//用循环求斐波那契数列
int fib(int x)
{
	int i = 0;
	int c = 0;
	int a = 1;
	int b = 1;
	for (i = 1; i <= x - 2; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}


int main()
{
	int n = 0;
	printf("请输入要找第几个斐波那契数：\n");//n>=3
	scanf("%d", &n);
	int ret = fib(n);
	printf("您要找的斐波那契数是：%d",ret);

}