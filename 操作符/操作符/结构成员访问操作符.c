#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//#include<stdio.h>
//
//struct book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	int a = 0;
//	struct book b = { "c语言","c2023315","515" };
//	//结构体访问操作符    结构体 . 变量名
//	printf("%s\n", b.name);
//	printf("%s\n", b.id);
//	printf("%d\n", b.price);
//
//	//用指针操作结构体
//	struct book* pb = &b;
//	printf("%s\n", (*pb).name);
//	printf("%s\n", (*pb).id);
//	printf("%d\n", (*pb).price);
//
//	//结构体访问操作符   结构体指针->成员
//	printf("%s\n", pb->name);//“->”操作符必须用于指针
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->name);
//	return 0;
//}
