#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//strlen是用来求字符串长度的函数
//strlen函数以‘\0’为结束标志，计算的是‘\0’之前的字符串的个数
// strlen函数返回的是size_t ,是     无符号数
//必须存在‘\0’，才能结束

//strlen的使用
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[10] = "dhaiudh";
//	char arr2[10] = "dhai\0udh";
//	int len1 = strlenarr1);
//	printf("%d\n", len1);
//	int len2 = strlenarr2);
//	printf("%d\n", len2);
//	return 0;
//}


//模拟实现strlen函数
//1.计数器版本
//2.递归版本
//3.指针-指针版本

//#include<stdio.h>
//#include<assert.h>
//
//int my_strlen(const char* arr)
//{
//	//检查指针是否正常
//	assert(arr != NULL);
//	int count = 0;//计数器
//	char* p = arr; //指针指向数组；
//		while (1)
//		{
//			if (*p != '\0')
//			{
//				count++;
//				p++;
//			}
//			else
//				return count;
//		}
//}
//
//int main()
//{
//	char arr[20] = "dahnkdoa";
//	//定义我的strlen函数
//	my_strlen(arr); 
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

