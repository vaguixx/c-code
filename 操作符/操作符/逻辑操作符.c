#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//逻辑操作符有‘&&’ ‘||’
//   &&要两边的数都是非0（真），才会输出真（1）
//  ||要两边的数都为假（0），才会输出假（0）



//面试试题
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	i = a++ && ++b && d++;
//	printf("a=%d  b = %d  c=%d  d=%d  \n", a, b, c, d);
//	//第一个考点，a++和++a,一个是先使用，再加，一个是先加再使用
//	//第二个考点就是逻辑与  &&，
//	//假设  a= 0，int c = a && b,这个表达式当a为0时对于逻辑与来说，b的值并不重要，所以根本不参与
//	//运算，同理上述表达式 ++b,d++根本不会运算
//
//
//	a = 1;
//	i = a++ || ++b || d++;
//	printf("a=%d  b = %d  c=%d  d=%d  \n", a, b, c, d);
//	//同‘&&’操作符一样 ‘||’,如果第一个值为1了，那么后面的表达式根本不会影响表达式的结果
//	//根本不会运算，只有当a为0时，表达式才可能继续运算
//
//	return 0;
//}、



//逗号表达式，和三目操作表达式

//int a =  exp1,exp2,exp3,——
//该表达式的意思式，从左往右依次计算，但是！表达式的返回值只与最后一个表达式的值相关

//三目操作表达式
//exp1 ?  exp2  :  exp3
//该表达式的意思是，如果exp1表达式为真，则返回exp2,如果exp1的表达式为假，则返回exp3
//可以简单理解为
//if(exp1)
//{
//		exp2;
//}
//else
//{
//		exp3;
//}