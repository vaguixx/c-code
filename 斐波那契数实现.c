#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��������ģ��
//��ѭ����쳲���������
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
	printf("������Ҫ�ҵڼ���쳲���������\n");//n>=3
	scanf("%d", &n);
	int ret = fib(n);
	printf("��Ҫ�ҵ�쳲��������ǣ�%d",ret);

}