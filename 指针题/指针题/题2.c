#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//#include<stdio.h>
//
//struct test 
//{
//	int num;//4
//	char* pcname;//4/8
//	short sdate;//2
//	char cha[2];//2
//	short sba[4];//4
//}*p;
//
//int main()
//{
//	//本题考察的是指针类型决定了指针的计算
//	printf("%p\n",p);
//	printf("%p\n", p + 0x1);
//	//在这里p指针是指向的整个结构体，结构体的大小为20，故结果是0x10000+20
//	printf("%p\n",(unsigned long) p + 0x1);
//	//在这里p指针被强制类型转换成了一个long型数据，long和int型差不多，直接+1就可
//	printf("%p\n", (unsigned int*)p + 0x1);
//	//在这里，p指针被强制转换成了一个int*指针类型，指针+1加四个字节，即+4
//	return 0;
//}