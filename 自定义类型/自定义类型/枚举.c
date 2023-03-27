#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)



//枚举类型
//为什么要使用枚举，枚举的优点
//1.增加代码的可读性和可维护性
//2.和#define定义类型相比，枚举类型有类型检查，更加严谨
//3.防止命名污染，封装
//4.便于调试
//5.使用方便，可以多次定义

//能够使用枚举类型的地方能多，通常是固定不变的客观事实
//如下

//enum origin_color//三原色,类似的还有星期，生肖，月份，天气等等
//{
//	red,
//	green,
//	bule
//};


//当定义枚举类型时，第一个成员通常是值为0，之后每个成员都是前面的成员值+1

//#include<stdio.h>
//
//enum origin_color
//{
//	red,//0
//	green,//0+1=1
//	bule//1+1=2
//};
//
//int main()
//{
//	printf("%d\n", red);
//	printf("%d\n", green);
//	printf("%d\n", bule);
//	return 0;
//}




//枚举类型的实际应用

//#include<stdio.h>
//
//void menu()
//{
//	printf("******欢迎使用计算器******\n");
//	printf("******1.add    2.sub******\n");
//	printf("******3.mul    4.div******\n");
//	printf("*********0.exit***********\n");
//	printf("**************************\n");
//	printf("**************************\n");
//}
//
//enum option
//{
//	exit,
//	add,
//	sub,
//	mul,
//	div
//};
//
//int main()
//{
//	//简易计算器界面
//	int input = 0;
//	do
//	{
//		menu();
//		
//		scanf("%d", &input);
//		switch (input)
//		{
//			//提高可读性
//		case add:
//			//add();
//			break;
//		case sub:
//			//sub();
//			break;
//		case mul:
//			//mul();
//			break;
//		case div:
//			//div();
//			break;
//		case exit:
//			printf("退出计算器\n");
//			break;
//		default :
//			printf("输入错误请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}