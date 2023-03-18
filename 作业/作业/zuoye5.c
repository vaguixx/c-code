#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//将一句话倒置输出，标点不倒置，比如，i like beijing.     >>    beijing.like i
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
	//三步反转法
	//1.翻转整个字符串
	reverse(arr,arr+len-1);
	printf("%s", arr);
	//2.反转单词，以空格分割
	char* start = arr;//定义开始数组指针
	
	while (*start != '\0')
	{
		char* end = start;//定义找空格的指针
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
//假设数组 123456
//下标为     012345