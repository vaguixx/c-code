#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//单目操作符是对单个的个体进行运算的操作符
//1.   ！逻辑卷取反操作符
//一般的值，0为假，非0即为真
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	if (a)//如果a为真则输出haha
//	{
//		printf("haha\n");
//	}
//	a = 0;
//	if (!a)//如果非a为真，即a为假即输出hehe
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//负值’-‘和整值操作符’+‘

//sizeof操作符
//我一直以为sizeof是函数库<stdio.h>,中自带的函数
//但是sizeof是一个求一个值占用空间大小的操作符，大小以字节为单位
//   sizeof本质一定是操作符，不是函数，所以sizeof内部定义的表达式根本不会运算
//#include<stdio.h>
//int main()
//{
//	short s = 5;
//	int k = 10;
//	printf("%d\n", sizeof(s = k + 2));//表达式s=k+2根本不会运算和进行赋值
//	printf("%d\n", s);
//	return 0;
//}

//按二进制位取反操作符”~“


//单目操作符’++‘ ’--‘
//前置’++‘ ’--‘，即++a，先++再使用
//后置’++‘ ’--‘，即a++，先使用再++
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	printf("%d\n", a--);
//	printf("%d\n", a);
//	return 0;
//}

//取地址操作符‘&’和间接访问操作符 ‘*’
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//取地址操作符是取一个单位的地址值放入，
//							//取地址操作符实际上和逻辑与操作符是同一个字符，但是逻辑与需要两个操作数
//							//而取地址操作符是单目操作符
//	int* pa = &a;  //*pa,*是间接访问操作符 ，pa代表的是一个指针，int表示的是指针指向的数的类型
//	//在这里值得一提的是，指针是用来存放地址的，sizeof（指针）的结果不会因为存放的数的类型改变
//	//而改变
//	*pa = 20;//
//	printf("%d", a);//通过指针来改变函数值
//
//	return 0;
//}

//(类型)，强制类型转换操作符