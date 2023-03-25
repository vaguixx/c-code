#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//#include<stdio.h>
//
//int main()
//{
//	char* a[] = {"work","at","alibaba"};
//	//这句代码的意思是，a先跟[]结合，说明a为一个数组，char*代表里面的元素是char*类型的指针
//	//而指针指向的是work，at ，alibaba
//	char** pa = a;
//	//这里a代表的是首元素的地址，也就是说用一个指针来指向这个数组，这个指针类型是char**
//	pa++;
//	//pa向后移动一个元素
//	printf("%s", *pa);
//	return 0;
//}