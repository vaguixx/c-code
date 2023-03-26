#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//strcpy函数使用规则
//char* strcpy (char * destanation ,const char * source)
//1.源字符必须以字符‘\0’结束
//2.会将源字符串的'\0'拷贝到字符空间
//3.目标空间必须足够大，能够放入源字符串
//4.目标空间必须可以改变


//strcpy使用
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char p1[] = "abcdef";
//	char* p2 = "hello";//放在常量区，不可修改，但是可读
//	strcpy(p1, p2);
//	printf("%s\n", p1);
//	printf("%s\n", p2);
//	return 0;
//}


//strcpy实现


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
