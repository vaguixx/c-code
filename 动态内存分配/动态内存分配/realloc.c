#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//realloc�����������Ķ�̬���ٿռ�
//�е�ʱ���������ռ�̫С�����е�ʱ���ֻ�̫��realloc�ܹ�����������
//void* realloc ��void* ptr,size_t  size��;
//ptr��Ҫ�ı���ڴ��С�ĵ�ַ��size��Ҫ�ı�Ĵ�С���޸���ɺ󷵻�void*ָ��ָ����Ƭ�ռ�


//realloc�����޸Ķ�̬���ٿռ�ʱ���������
//1.����ռ���ռ�ã��ܹ���������
//2.����ռ�ʹ�ó�ͻ�������������٣����ʱ��realloc�������ں����ҵ��㹻�Ŀռ俪��
//   ��ָ��ָ��ÿռ䣬���ҽ�֮ǰ���ٵĿռ��ͷ�


//reallocʹ��

//#include<stdio.h>
//#include<stdlib.h>
//#include<errno.h>
//
//int main()
//{
//	//����malloc���ٿռ䡢
//	int * p =(int*)malloc(40);
//	//�ж�
//	if (p == NULL)
//	{
//		perror(errno);
//		return 1;
//	}
//	//��ʼ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	p = (int *)realloc(p, 80);
//	//�ͷ�
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}