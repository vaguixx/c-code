#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//memset���� ��Ŀ�ĵ�ַ��num���ֽڵ�Ԫ�أ����óɡ�value��
//int cmp (const void* ptr,value,num)


#include<stdio.h>
#include<string.h>

int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 20);//���ֽ�Ϊ��λ�����ڴ�
	return 0;
}