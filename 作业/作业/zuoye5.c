#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//��һ�仰�����������㲻���ã����磬i like beijing.     >>    beijing.like i
#include<stdio.h>
#include<stdlib.h>

void reverse(char * left, char * right)
{
	while (left <= right)
	{
		char ret = 0;
		ret = *left;
		*left = *right;
		*right = ret;
		left++;
		right--;

	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	printf("%s\n", arr);
	int len = strlen(arr);
	//������ת��
	//1.��ת�����ַ���
	reverse(arr,arr+len-1);
	printf("%s", arr);
	//2.��ת���ʣ��Կո�ָ�
	char* start = arr;//���忪ʼ����ָ��
	
	while (*start != '\0')
	{
		char* end = start;//�����ҿո��ָ��
		while (*end != ' ' && *end != '\0')
		{
			end++;

		}
		reverse(start, end - 1);
		if (*end == ' ')
		{
			start = end + 1;
		}
		else
			start = end;
	}
	printf("%s", arr);
	return 0;
}
//�������� 123456
//�±�Ϊ     012345