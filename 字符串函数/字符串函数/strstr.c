#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//strstr������һ���ַ���������һ���ַ���



//strstr����ʹ��
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
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ַ�������Ϊ%s\n", ret);
//	}
//	return 0;
//}

//����strstr����
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
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ַ�������Ϊ%s\n", ret);
//	}
//	return 0;
//}