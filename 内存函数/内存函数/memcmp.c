#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//memcmp�ڴ�ȽϺ����������strcmp����

//memcmp�Ļ���˼·��strcmp����һģһ�����ȱȽϵ�һ��Ԫ�صĴ�С�������ͬ�ͻ�����Ƚϣ���ͬ�ͻ᷵��
//ֵ��>����������<���ظ�����=����0��
//ͬ���ͱȽϵ��ڴ�ĳ����޹أ���memcmp��Ҫ����Ƚ϶��ٸ��ֽڵĲ����������ֹͣ


#include<stdio.h>
#include<string.h>

int main()
{
	float arr1[] = { 1.0,2.0,3.0,4.0,5.0 };
	float arr2[] = { 1.0,2.0 };
	int ret = memcmp(arr1, arr2, 12);
	printf("%d\n", ret);
	return 0;
}