#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//1.对NULL的指针的解引用

//#include<stdio.h>
//#include<stdlib.h>
//#include<errno.h>
//
//int main()
//{
//	int * p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror(errno);
//	}
//	*p;//如果没有上面的判断，  p为NULL指针，对空指针解引用会报错
//
//	return 0;
//}


//2.对动态开辟空间的越界访问

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	//越界访问
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//	//一旦越界访问，程序就直接死机
//
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//3.对非动态开辟的空间进行释放

//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	return 0;
//}


//4.使用free释放一部分动态开辟的内存

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	int i = 0;
//		for (i = 0; i < 20; i++)
//		{
//			*p = i;
//			p++;
//		}
//		//释放
//		free(p);//释放一部分动态开辟的空间
//		p = NULL;
//		return 0;
//}


//对同一块内存进行多次释放
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*p = i;
//			 p++;
//		}
//		//释放
//		free(p);//释放一部分动态开辟的空间
//		//重复释放
//		free(p);
//		return 0;
//}


//动态开辟内存的空间忘记释放



