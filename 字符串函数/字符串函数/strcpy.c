#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//strcpy����ʹ�ù���
//char* strcpy (char * destanation ,const char * source)
//1.Դ�ַ��������ַ���\0������
//2.�ὫԴ�ַ�����'\0'�������ַ��ռ�
//3.Ŀ��ռ�����㹻���ܹ�����Դ�ַ���
//4.Ŀ��ռ������Ըı�


//strcpyʹ��
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char p1[] = "abcdef";
//	char* p2 = "hello";//���ڳ������������޸ģ����ǿɶ�
//	strcpy(p1, p2);
//	printf("%s\n", p1);
//	printf("%s\n", p2);
//	return 0;
//}


//strcpyʵ��


//#include<stdio.h>
//#include<string.h>
//void MyStrcpy(char* dst, const char* src)
//{
//	while (*src)
//	{
//		*dst = *src;
//		++src;
//		++dst;
//	}
//	*dst = '\0';
//}
//int main()
//{
//	char p1[] = "abcdef";
//	const char* p2 = "hello";
//	MyStrcpy(p1, p2);
//	printf("%s\n", p1);
//	printf("%s\n", p2);
//	return 0;
//}
