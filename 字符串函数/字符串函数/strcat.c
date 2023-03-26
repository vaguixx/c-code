#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//strcat 函数叫字符串追加
//char* strcat (char * destanation ,const char * source)
//1.目的空间必须有足够的空间追加字符串
//2.源字符串和目的字符串末尾必须有’\0‘
//3.目标空间必须可修改
//4.字符串自己追加自己如何？
//当然是不行的，第一次追加时就把末尾的\0改变了，后面找不到结束的标志，会死循环



//strcat函数使用

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world!!";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
// 	return 0;
//}



//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcat(char* dest, const char* src)
//{
//	//确保指针正确
//	assert(dest != NULL);
//	assert(dest != NULL);
//	//定义返回char*的位置
//	char* ret = dest;
//	//找到目的字符的’\0‘
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//在目的字符后面追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world!!";
//	//my_strcat(arr1, arr2);
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}