#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int  main()
{
	int arr[] = { 0 };//������Բ�����ֵȥ��ϵͳ�Լ����㣬����Ҫ��������ǳ������ʽ
	                        //�����������С��ʱ�����������ʼ��
	char arr4[] =  "a,b,c,d,e,f" ;
	printf("%d\n", sizeof(arr4));
		printf("%d\n", strlen(arr4));

		//strlen��sizeofû�й���
		//strlen --ֻ�����ַ������� --�ǿ⺯��--����ͷ�ļ�
		//sizeof -- ����������顢�ַ����Ĵ�С--��λ���ֽ� --�ǲ�����--��������ͷ�ļ�
	return 0;
}