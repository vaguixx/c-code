#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//有20块钱，1块钱一瓶饮料，2个空瓶换一瓶饮料，问能喝多少瓶？
//能喝的瓶数(total) = 买的瓶数(money) + 换的瓶数(empty)

//#include<stdio.h>
//
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty =empty/2+ empty % 2;
//	}
//	printf("%d", total);
//
//	return 0;
//}