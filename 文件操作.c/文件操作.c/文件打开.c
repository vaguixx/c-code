#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//文件
//当我们运行通讯录文件时，程序一结束就会导致写入的数据丢失
//而我们的实际写的c语言程序都是对文件进行读取，写入操作

//文件的本质和打开操作
//每个被使用的文件都在系统中开辟了一个文件信息区，用于存放文件的相应信息，这些信息是保存在一个结构体
//变量中的，这个结构体由系统申明，名为FILE

//可以用 FILE定义一个结构体指针来访问文件信息区

//#include<stdio.h>
//
//int main()
//{
//	FILE* PF;//定义文件指针变量
//	return 0;
//}


//打开文件操作

//函数fopen，可以打开一个文件，同时返回一个FILE*型指针指向该文件区
//FILE * fopen(const char* filename, const char * mode)
//关闭文件
//fclose函数
// int fclose(FILE * stream)

//文件打开

//#include<stdio.h>
//#include<errno.h>
//#include<string.h>
//int main()
//{
//	 FILE* p = fopen("test.txt", "r");//打开文件test.txt,只读（read）
//	//如果文件打开失败会返回空指针
//	 if (p == NULL)
//	 {
//		 printf("%s\n", strerror(errno));
//		 return 1;
//	 }
//	//fopen("test.txt", "w");//打开文件test.txt,只写（write）
//
//	 //打开成功，关闭
//	 fclose(p);
//	return 0;
//}

//若是想反应其他路径下的文件，只需要在文件名前面添加绝对路径即可
//FILE* p = fopen("/c/desktop/test.txt", "r");
//这个时候/和test.txt的t形成了/t，应使用//来消除
//FILE* p = fopen("c//desktop//test.txt", "r");

//"r",read只读文件，如果文件不存在会出错返回空指针
// 
//”w“,write 只写文件，如果文件不存在会新建一个文件
// 
//”a“,add 向文件尾追加数据，建立一个新的文件