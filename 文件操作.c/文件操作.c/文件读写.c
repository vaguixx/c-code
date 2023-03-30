#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//打开文件

//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//
//int main()
//{
//	FILE* p = fopen("E:\\dev\\code\\test.txt", "r");
//	if (p == NULL)
//	{
//		perror("file:");
//		return 1;
//	}
//	//写入
//	/*int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		fputc('c', p);
//	}*/
//
//	//读取字符
//	//如果想要读取字符，必须将文件的打开方式改变
//	/*int ch = fgetc(p);
//	printf("%c\n", ch);*/
//
//
//	//写一行数据
//	//fputs("hello bit!", p);
//	//当你对文件进行只写操作时，会将文件前面写入的东西清空
//	//如果不想清空文件，要选“a”,即在数据后面追加
//
//
//	//读取一行数据
//	char arr[20];
//	fgets(arr, 20, p);
//	printf("%s", arr);
//	//当读取hello时，只读取5个字节，因为要终止运行，fgets会塞入一个‘\0’,
//	//读取失败返回NULL指针
//
//
//	/*fputc('c', p);*/
//	//关闭文件
//	fclose(p);
//	p = NULL;
//	return 0;
//}


//格式化输入函数
// fscanf
//格式化输出函数
//fprintf
//


//#include<stdio.h>
//
//struct peo
//{
//	char arr[20];
//	int age;
//	char tele[12];
//};
//
//int main()
//{
//	FILE* p = fopen("E:\\dev\\code\\test.txt", "w");
//	//检查
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	
//	struct peo p1 = { "zhangsan",21,"1314" };
//	//写文件,可以指定格式
//	fprintf(p,"%s  %d  %s\n", p1.arr, p1.age, p1.tele);
//
//
//	//关闭
//	fclose(p);
//	return 0;
//}


//#include<stdio.h>
//
//struct peo
//{
//	char arr[20];
//	int age;
//	char tele[12];
//};
//
//int main()
//{
//	FILE* p = fopen("E:\\dev\\code\\test.txt", "r");
//	//检查
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	struct peo p1 = { 0 };
//	//读文件
//	fscanf(p, "%s  %d  %s\n", p1.arr, &(p1.age), p1.tele);
//	printf("%s  %d  %s\n", p1.arr,p1.age, p1.tele);
//
//
//	//关闭
//	fclose(p);
//	return 0;
//}


//为什么写数据是fprintf，读数据是fscanf
//其实并没有反过来。都是以内存中的数据为第一人称，把内存中的数据打印到文件里面不就是fprintf
//读数据就是把文件的数据，提取到内存中间让我们看到就是fscanf


//每次运行c语言程序时，系统会默认打开三个流
//FILE* stdin   -- 标准输入流
//FILE* stdout --标准输出流
//FILE* stderr  --标准错误流

//在这三个流的基础上，我们能运行基本的c语言操作
//而fprintf可以在任何流上面操作，不仅可以打印信息到文件，还可以打印信息到屏幕


//#include<stdio.h>
//
//struct peo
//{
//	char arr[20];
//	int age;
//	char tele[12];
//};
//
//int main()
//{
//	FILE* p = fopen("E:\\dev\\code\\test.txt", "w");
//	//检查
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	struct peo p1 = { "zhangsan",21,"1314" };
//	//打印到文件
//	//fprintf(p, "%s  %d  %s\n", p1.arr, p1.age, p1.tele);
//	//打印到屏幕
//	fprintf(stdout, "%s  %d  %s\n", p1.arr, p1.age, p1.tele);
//
//
//	//关闭
//	fclose(p);
//	return 0;
//}



//上面这些函数全部都是可以对所有流进行输入或者输出的
//而接下来的两个函数只能够对文件进行操作

//#include<stdio.h>
//
//struct S
//{
//	char name[20];
//	int age;
//	char tele[12];
//};
//
//int main()
//{
//	struct S s = {"zhangsan",54,"5465"};
//	//以二进制的形式写入文件
//	FILE* p =fopen("E:\\dev\\code\\test.txt", "wb");//wb二进制的write
//
//	//写入文件
//	fprintf(p, "%s  %d  %s", s.name, s.age, s.tele);
//
//	//二进制方式写
//	fwrite(&s ,sizeof(struct S), 1, p);
//	
//
//	//关闭
//	fclose(p);
//	p = NULL;
//	return;
//}


//scanf是针对标准输入的格式化输入语句
//printf是针对标准输出的格式化输出语句
// 
// fscanf是针对所有输入流的格式化输入语句
// fprintf是针对所有输出流的格式化输出语句
// 
// sscanf不针对流，只针对字符串
// sscanf是从一个字符串中转化成一个格式化的数据
// sprintf是把一个格式化的数据转化成字符
//