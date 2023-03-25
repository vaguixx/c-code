#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//#include<stdio.h>
//
//int main()
//{
//	char* c[] = {"enter","new","point","first"};
//	//创建c数组，里面存放char*指针，指针指向 里面元素enter，new，point，first
//	//指针里面存的是各个元素首元素的地址
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	//创建一个cp数组，里面存放char**指针，分别指向c+3，c+2，c+1，c
//	//*++cpp得到里面的c+1，然后**，改变了cp数组的指针分别指向c+3，c+2，c，c
//	char*** cpp = cp;
//	//用一个char***型的指针来指向，cp这个数组
//	printf("%s\n",**++cpp);//point
//	//运算符++，优先级大于*，++cpp就是指向了c+2，*++cpp就是c+2，**++cpp对c+2解引用即point
//	printf("%s\n",*--  * ++cpp +3);
//	//此时cpp指向c+2，++cpp就是指向c+1，对++cpp进行解引用，就是c+1，对c+1进行--操作，即c+1被改成c
//	//对c解引用就是拿出enter首元素地址，然后+3，向后移3个，即指向e，此时打印字符串就显示er
//	printf("%s\n",*cpp[-2] +3);
//	//cpp[-2]的意思可以等同于，*(cpp-2),cpp指向第一个c，左移2个，就是指向c+3，解引用就是
//	//first的首元素地址，然后+3即指向st，打印字符串为st
//	printf("%s\n",cpp[-1][-1] +1);
//	//cpp此时指向第一个c，cpp[-1] == *(cpp-1) == c+2,*((c+2)-1)== new,+1再打印字符串为ew
//	return 0;
//}