#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//calloc����
//void* calloc(size_t num,size_t size)
//����calloc����Ҫ���ٲ�������������һ�������Ĵ�С��calloc�������ڶ�������һƬ�ռ䣬
//����void* ָ��ָ�򿪱ٿռ���׵�ַ
//calloc���˴��Ĳ�����һ�����⣬calloc��molloc��������һ����ʼ���Ĺ���
//calloc�������ڶ������ٿռ��ʱ�򣬽����ٵĿռ���г�ʼ��

//calloc����ʹ��

//#include<stdio.h>
//#include<errno.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	int * p = (int*)calloc(4, 10);//����40���ֽڵĿռ�
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//ʹ��
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
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}