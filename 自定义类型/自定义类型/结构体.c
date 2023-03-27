#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//
//数组是一些相同的类型的元素的集合
//结构体也是一些元素的集合，但是结构体成员可以是不同类型的元素

//结构体的定义

//#include<stdio.h>
//
////创建一个结构体类型
//struct book
//{
//	//定义结构体的成员
//	char id[10];
//	int num;
//	char name[10];
//}a1,a2,a3;//这里a1,a2,a3的用意是实体化这个结构体类型，创建3个全局变量
//
//int main()
//{
//	//这里b1，和b2的区别在于a1,a2,a3是全局变量，b1，b2是局部变量
//	struct book b1;
//	struct book b2;
//	return 0;
//}



//结构体的特殊声明


//结构体不完全声明
//#include<stdio.h>
//
////定义一个匿名结构体变量
//struct
//{
//	char id[5];
//	char name[10];
//}s1;
//
//struct
//{
//	char id[5];
//	char name[10];
//}s2;
//
//int main()
//{
//	//即使在这里两个结构体的成员是一模一样，但是由于他们是匿名结构体，系统依然会当成两个
//	//类型来处理，强行链接在一起会导致编译器警告
//
//	return 0;
//}


//结构体的自引用

//#include<stdio.h>

//结构体引用另一个结构体的示例
//struct b
//{
//	int a;
//	char c;
//
//};
//struct c
//{
//	int d;
//	struct b b1;
//};
//
//int main()
//{
//
//
//	return 0;
//}


#include<stdio.h>

//结构体自己引用自己?
//struct b
//{
//	int a;
//	struct b b1;
//
//};
//
//
//int main()
//{
//	//如果按上面的创建结构体大小是多少？
//	//明显的，这样创建的结构体是错误的
//
//	return 0;
//}



//明显结构体是不能在结构体内部直接调用自己的
//但是可以以指针的形式存放自己上次创建结构体的位置
//这样既可以找到自己这个结构体，也能够保证结构体的大小
//#include<stdio.h>
//
//
//struct b
//{
//	int a;
//	struct b* next;//这个结构体存放了上一个结构体的地址
//
//};
//
//
//int main()
//{
//
//
//	return 0;
//}


//结构体的初始化

//#include<stdio.h>
//
//struct b
//{
//	int a;
//	char c;
//	char cd;
//};
//struct c
//{
//	int d;
//	struct b b1;
//
//};
//
//int main()
//{
//	//对结构体b，进行初始化
//	struct b b1 = { 1,'a' ,'c'};
//
//	//结构体c中还包含结构体b，该怎么初始化呢
//	struct c c1 = { 2,{3,'s','b'} };
//
//	//验证结构体c是否成功初始化
//	printf("%d  %d  %c  %c\n", c1.d, c1.b1.a, c1.b1.c, c1.b1.cd);
//	//成功初始化
//
//	return 0;
//}