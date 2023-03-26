#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//strstr函数在一个字符串中找另一个字符串



//strstr函数使用
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char* p = "adhaiud";
//	char* pb = "iud";
//	char* ret = strstr(p, pb);
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("字符串存在为%s\n", ret);
//	}
//	return 0;
//}

//创建strstr函数
//#include<stdio.h>
//
//char* my_strstr(str1, str2)
//{
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	char* cp = str1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char* p = "adhaiud";
//	char* pb = "iud";
//	char* ret = my_strstr(p, pb);
//	if (ret == NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("字符串存在为%s\n", ret);
//	}
//	return 0;
//}