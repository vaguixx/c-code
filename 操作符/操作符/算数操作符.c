#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//#include<stdio.h>
//算数操作符 ‘+’，‘-’，‘*’，‘/’，‘%’
//#include<stdio.h>
//int main()
//{
//	int a = 3 / 5;//0.6
//	printf("%d\n", a);//但是打印出来是0，是int a导致的输出0吗？
//
//	float b = 3 / 5;//改用float a试试
//	printf("%f\n", b);//发现打印出来依然是0；发现根本问题并不在参数的类型上面
//
//	float c = 3.0 / 5;//打印出来发现是0.6，关键根本在于  '/' 操作符中
//	printf("%f\n", c);//整数除整数只能得到一个整数，要想‘/’输出浮点数必须让 除数和被除数之间
//									//有一个浮点数，属于是‘/’操作符的特性
//
//	//此外，如果一个数直接在后面加‘.0’想让他变成浮点数，系统会默认成double类型
//	//如果以float类型输出会影响精度，想要解决应该在后面加‘.0f’
//	return 0;
//}


////%操作符
//int main()
//{
//	int a = 0;
//	a = 5 % 3;//%操作符两边必须是整数，不然会报错
//	printf("%d", a);
//	return 0;
//}


