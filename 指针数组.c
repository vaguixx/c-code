#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char* str3 = "hello bit.";
//	char* str4 = "hello bit.";
//	if (str1 == str2)
//	{
//		printf("str1 str2  same\n");
//	}
//	else
//	{
//		printf("str1 str2 notsame\n");
//	}
//	if (str3 == str4)
//	{
//		printf("str3 str4  same\n");
//	}
//	else
//	{
//		printf("str3 str4 notsame\n");
//	}
//	//在这里输出的是str1str2不同，但是str3 str4相同
//	//   1.为什么str1 str2不同
//	//      当我们创建数组时，数组会在内存中开辟空间存放元素，
//	//      而str1 str2 是分别创建的，意味着在内存中开辟了两个空间，只不过他们里面存放的内容相同
//	//      str1 str2是数组名，本质上是地址，两个空间的两个首元素地址当然不同
//
//	//    2.为什么str3 str4相同
//	//       因为当我们定义str3 str4的时候，是以指针的形式创建
//	//       而后面的语句代表的是   一个常量表达“hello bit.”
//	//       当你在内存中定义两个一模一样的常量时，系统不会创建新的常量，故两个指针都指向的是
//	//       常量首字符的地址，并不是把整个字符串的地址存进去
//	return 0;
//}



//指针数组
// 指针数组的本质是数组 ，只不过这个数组存放的内容比较特殊，是指向其他元素的指针
// 

//int main()
//{
//	int a[] = { 1,2,3,4,5,6 };
//	int b[] = { 2,3,4,5,6,7 };
//	int c[] = { 3,4,5,6,7,8 };
//	//定义一个指针数组
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 6; j++)
//		{
//			printf("%d", *(arr[i] + j));
//		}
//		printf("\n");
//	}
//	//模拟生成一个二维数组，用指针数组的形式来打印多个数组内的元素
//	//但是和二维数组有着本质上的不同，因为二维数组存储元素在内存中是连续的，而上面分开定义三个数组
//	// 在内存中没有必然联系
//	return 0;
//}