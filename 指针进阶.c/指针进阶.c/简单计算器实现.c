#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//#include<stdio.h>
//
//void menu()
//{
//	printf("*********欢迎使用计算器*********\n");
//	printf("*********1.add **  2.sub********\n");
//	printf("*********3.mul **  4.div********\n");
//	printf("***************0.exit***********\n");
//	printf("*********请选择功能：***********\n");
//	
//
//}
//
//int add(int x, int y)
//{
//	printf("%d\n", x + y);
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	printf("%d\n", x - y);
//	return x + y;
//}
//
//int mul(int x, int y)
//{
//	printf("%d\n", x * y);
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	printf("%d\n", x / y);
//	return x / y;
//}
//
//int main()
//{
//	
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	//主界面
//	do {
//		
//		//主菜单
//		menu();
//		scanf("%d", &input);
//		//选择功能
//		switch (input)
//		{
//		case 1:
//			printf("请输入要相加的两个数:\n");
//			scanf("%d%d", &x, &y);
//			//加法模块
//			add(x, y);
//			break;
//		case 2:
//			printf("请输入要相减的两个数:\n");
//			scanf("%d%d", &x, &y);
//			//减法模块
//			sub(x, y);
//			break;
//		case 3:
//			printf("请输入要相乘的两个数:\n");
//			scanf("%d%d", &x, &y);
//			//乘法模块
//			mul(x, y);
//			break;
//		case 4:
//			printf("请输入要相除的两个数:\n");
//			scanf("%d%d", &x, &y);
//			//加法模块
//			div(x, y);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default :
//			printf("输入错误，请重新输入\n");
//			break;
//
//		}
//
//	} while (input);
//	return 0;
//}

//上面代码冗余严重，用函数指针数组优化
//#include<stdio.h>
//
//void menu()
//{
//	printf("*********欢迎使用计算器*********\n");
//	printf("*********1.add **  2.sub********\n");
//	printf("*********3.mul **  4.div********\n");
//	printf("***************0.exit***********\n");
//	printf("*********请选择功能：***********\n");
//
//
//}
//
//int add(int x, int y)
//{
//	printf("%d\n", x + y);
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	printf("%d\n", x - y);
//	return x + y;
//}
//
//int mul(int x, int y)
//{
//	printf("%d\n", x * y);
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	printf("%d\n", x / y);
//	return x / y;
//}
//
//int main()
//{
//
//	int x = 0;
//	int y = 0;
//	int a = 0;
//	int input = 0;
//	//主界面
//	do {
//
//		//主菜单
//		menu();
//		//选择功能
//		int (*pfarr[5])(int, int) = { 0,add,sub,mul,div };
//		printf("请选择功能:\n");
//		scanf("%d", &input);
//		printf("请输入两个数\n");
//		scanf("%d%d", &x, &y);
//		int ret = (pfarr[input])(x, y);
//		printf("%d", ret);
//	} while (input);
//	return 0;
//}