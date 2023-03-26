#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//strcmp字符串比较函数
//strcmp字符串比较规则，两组第一个字符比较，a数组的第一个字符>数组b，立刻就返回一个正值
//相反则返回负值，若是相等则比较第二个字符，也就是说strcmp函数比较和字符串长度无关，只于对应位置
//字符的大小有关

//strcmp函数使用

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int ret = strcmp("adha", "adbdaidhad");//即使第二个字符串长度比第一个字符串长，但是依然是第一个字符串长
//	printf("%d\n", ret);
//
//
//
//	return 0;
//}


//函数strcmp实现

//#include<stdio.h>
//#icnldue<assert.h>
//int my_strcmp(const har* s1, const char* s2)
//{
// assert(s1 != NULL);
// assert(s2 != NULL);
//	while (*s1 == *s2)
//	{
//		if (s1 != '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//
//
//}
//
//int main()
//{
//	char* p = "dahdia";
//	char* pb = "adhaid";
//	//定义函数
//	int x = my_strcmp(p, pb);
//	if (x > 0)
//	{
//		printf("p>pb\n");
//	}
//	else if (x < 0)
//	{
//		printf("p<pb\n");
//	}
//	else if (x == 0)
//	{
//		printf("p=pb\n");
//	}
//	
//	return 0;
//}