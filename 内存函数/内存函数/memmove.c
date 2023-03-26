#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//memmove函数，由于memcpy在复制自身数据时有着局限性，出现了memmove函数
//memmove函数可以拷贝任意位置的内存的数据

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//void* my_memmove(void* dest, const void* src, int num)
//{
//	//检验指针
//	assert(dest && src);
//	//记录目的地地址,用于返回
//	void* pb = dest;
//	//判断选择那种方法拷贝
//	if (src > dest)
//	{
//		//当dest在src前面时，前->后拷贝，类比memcpy函数
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//当dest在src后面时，后->前拷贝
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return pb;
//	
//}
//
//int main()
//{
//	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
//	//用memmove函数拷贝自身内存元素到自身
//	//memmove(arr1, arr1 + 2,20);
//
//	//实现memmove函数
//	my_memmove(arr1, arr1 + 2, 20);
//	return 0;
//}