//求十个数中最大值
//冒泡排序基础
#include <stdio.h>

int main() {
	//int arr[10] = {0};
	//int i = 0;
	//int max = 0; //定义一个最大值，让最大值和数组里面所有值比较，如果小于，就更新max
	//printf("请输入10个数\n");
	//for (i = 0; i < 10; i++) {
	//	scanf("%d", &arr[i]);
	//}
	//for (i = 0; i < 10; i++) {
	//	if (max < arr[i]) {
	//		max = arr[i];
	//	}
	//}
	//printf("max = %d\n", max);



	//算法优化，在上面的方法中，我限定了10个数，那么取消十个数的限制呢
	//int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);//直接算出数组里面值的个数
	//int max = 0; //定义一个最大值，让最大值和数组里面所有值比较，如果小于，就更新max

	//for (i = 0; i < sz; i++) {
	//	if (max < arr[i]) {
	//		max = arr[i];
	//	}
	//}
	//printf("max = %d\n", max);

	//如果数组里面全部放复数呢，那么是不是给max初始化为0的时候，就将最大值改变了
	//所以max初始化的值最好是数组里面的值，一般为第一个
	int arr[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//直接算出数组里面值的个数
	int max = arr[0];//为了防止max引入一个数组中不存在的最大值，所以一般用数组中的值初始化

	for (i = 0; i < sz; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("max = %d\n", max);









	return 0;
}