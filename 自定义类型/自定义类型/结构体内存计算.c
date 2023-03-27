#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//1.结构体第一个成员在结构体偏移量为0的地址处
//2.其他成员变量要对齐到某个数字（对齐数）的整数倍地址处
//vs编译器默认对齐数为8，而linux系统没有对齐数
//.对齐数 = 编译器默认的对齐数 与 该成员变量大小的  较小值
//结构体的总大小为最大对齐数（每个成员都有一个对齐数）的整数倍
//如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，
//结构体的总体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍 



//为什么要内存对齐
//1.不是所有平台都是能够访问所有内存的数据的，它们一般通过特定的方式来访问数据
//比如指针，int*指针一次访问4个字节，char*指针一次访问1个字节，如果没有对齐，那么访问全部乱套，抛出硬件异常
//2.性能原因，数据结构上面，尤其是栈，应该尽可能的在自然边界上面对齐，原因在于，为了访问未对齐的内存，
//处理器需要两次内存访问，而对齐的内存访问仅需要一次访问

//总的来说，内存对齐是用空间换取时间的方法


//结构体内存计算


//#include<stdio.h>
//
//struct s
//{
//	char c1;
//	int i;
//	char c2;
//
//};
//
//struct s1
//{
//	char c1;
//	int i;
//	double d;
//};
//
//struct s2
//{
//	char c1;
//	char c2;
//	double d;
//};
//
//struct s3
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//int main()
//{
//	//结构体实体化；
//	struct s s = { 0 };
//	struct s1 s1 = { 0 };
//	struct s2 s2 = { 0 };
//	struct s3 s3 = { 0 };
//	printf("%d\n", sizeof(s));
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	printf("%d\n", sizeof(s3));
//	return 0;
//}


//那么该怎么样即能够保证时间的同时，还能够尽可能的节省空间呢
//1.把占用空间小的尽量聚集在一起定义
//2.用pragma pack()函数来修改编译器默认对齐数


//#include<stdio.h>
//
//struct s
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//int main()
//{
//	struct s s1 = { 0 };
//	printf("%d\n", sizeof(s1));//没修改默认对齐数是12
//	return 0;
//}




//#include<stdio.h>
////修改默认对齐数
//#pragma pack(2)
//struct s
//{
//	char c1;
//	int a;
//	char c2;
//};
//#pragma pack()//将对齐数修改回默认值
//int main()
//{
//	struct s s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	//没修改默认对齐数是12
//	//修改默认对齐数是8
//	return 0;
//}

//#include<stdio.h>
////修改默认对齐数为1
//#pragma pack(1)
//struct s
//{
//	char c1;
//	int a;
//	char c2;
//};
//#pragma pack()//将对齐数修改回默认值
//int main()
//{
//	struct s s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	//没修改默认对齐数是12
//	//修改默认对齐数是8
//	//修改默认对齐数为1时，相当于没有对齐数，全部放一起，这时空间为6
//	return 0;
//}