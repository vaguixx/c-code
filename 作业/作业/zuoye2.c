#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
////��һ����������λ1�ĸ�����10 1010
//#include<stdio.h>
//size_t numberof1(int x)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 32; i++)
//	{
//		if (x & 1 == 1)
//		{
//			count++;
//			x = x >> 1;
//		}
//		else
//		{
//			x = x >> 1;
//		}
//	}
//	return count;
//}
//
////��ʦ���ĵ�һ����ȱ�ݵķ���
////15    00001111
////15%2  =1   ���1�������Ϊ������λ������Ǹ��ǲ���1������1�Ļ�15%2=0
////ͳ�������һλ����ô��Ҫ�Ƴ����������������1λ
////15/2=7    7 = 00000111������ظ�����
//
////�������ַ��������������������-1���Ͳ��У��кܴ�ľ�����
////size_t numberof1(int x)
////{
////	int count = 0;
////	while (x)
////	{
////		if (x % 2 == 1)
////		{
////			count++;
////		}
////		x /= 2;
////	}
////
////	return count ;
////}
//int main()
//{
//	int a = 0;
//	printf("������һ������\n");
//	scanf("%d", &a);
//	numberof1(a);
//	printf("1�ĸ���Ϊ%d\n", numberof1(a));
//
//	return 0;
//}