#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//打印水仙花数(1~100000)
//水仙花数定义，一个n位数，其各位的n次方之和等于其本身
//例如 153 =1^3+5^3+3^3
//#include<stdio.h>
//#include<math.h>
//
//
//
//int main()
//{
//	//生成0~100000的数
//	int i = 0;
//	
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断该数的位数
//		int n = 1;
//		int ret = i;
//		while (ret/ 10)
//		{
//			n++;
//			ret /= 10;
//		}
//
//		//找出该数的每一位数并且判断是不是水仙花数
//		ret = i;
//		int sum = 0;
//		while (ret)
//		{
//			sum += pow(ret % 10,n);
//			ret /= 10;
//
//		}
//		if (sum == i)
//		{
//			printf("%d  ", sum);
//		}
//	}
	
//	return 0;
//}