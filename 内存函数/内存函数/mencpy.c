#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//内存拷贝函数(string.h)
//将一片内存空间的元素拷贝到另一内存空间，但是由于拷贝方法的局限不能拷贝自身的元素
// c语言中规定memcpy不能拷贝重叠，但是由于编译器的不同，有一部分是可以重叠拷贝的
//char* memcpy(void* dest ,const void* src,num)
//这个函数拷贝完成后返回目的函数的首元素地址，void*代表任何类型的指针都可以接受，num代表要拷贝的字节数

//注！！，void*类型的指针由于没有固定的类型 ，是不能够进行解引用操作（*）和++，--的，
//因为不能够确定要访问的字节数


//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//void* my_memcpy(void* dest, void* src, int num)
//{
//	//返回值char*，是返回目的地址
//	//由于void*的特殊性，必须将它转换成能够移动和解引用的指针
//	//因为num是以字节为单位，那么函数也以字节为单位拷贝，必须强制转换成char*
//
//	assert(dest && src);
//
//	void* pb = dest;//记录目的地地址，用于返回
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;//将一个字节的数据拷贝
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return pb;
//}
//
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	//由于strcpy函数只能拷贝字符串，局限性太强，于是需要memcpy函数来拷贝
//
//	//memcpy函数的使用
//	//memcpy(arr2, arr1, 20);
//
//	//memcpy的实现
//	my_memcpy(arr2, arr1, 20);
//	return 0;
//}