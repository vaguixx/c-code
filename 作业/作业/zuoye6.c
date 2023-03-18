#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//求最小公倍数
//#include<stdio.h>
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数\n");
//	scanf("%d%d", &a, &b);
//	int min = a > b ? a : b;
//	while (1)
//	{
//		if (min % a == 0 && min % b == 0)
//		{
//			printf("%d", min);
//			break;
//		}
//		min++;
//	}
//	return 0;
//}


////法二
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf("%d%d", &a, &b);
//	
//	for (i = 1;; i++)
//	{
//		if ((a * i) % b == 0)
//		{
//			printf("%d\n", a*i);
//			break;
//		}
//	}
//	return 0;
//}