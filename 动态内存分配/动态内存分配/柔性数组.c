#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//��������
//1.�ṹ�������������Աǰ�����Ҫ��һ����Ա
//2.sizeof���ṹ�壩�����صĴ�С������������������ڴ�
//3.�������������Ա�Ľṹ����malloc�������ж�̬���ڴ���䣬���ҷ����
//�ڴ�Ӧ�ô��ڽṹ��Ĵ�С������Ӧ���������Ԥ�ڴ�С


//����
#include<stdio.h>
#include<stdlib.h>

struct stu
{
	int a;
	int arr[];//���������Ա
};

int main()
{
	struct stu s1;
	int* p = (int*)malloc(sizeof(struct stu) );
	printf("%d\n", sizeof(struct stu));//4,ϵͳ������������������Ա�Ĵ�С
	free(p);
	p = NULL;
	return 0;
}