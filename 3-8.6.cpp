//折半查找算法的基础实现
//前提，必须为顺序排列，后期可以使用冒泡排序改进
#include <stdio.h>

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	int right = sz - 1;
	int mid = (left + right) / 2;
	printf("%d\n", mid);
	int k = 7;//k为想找的数值
	while (left <= right) {
		if (k > arr[mid]) {
			left = mid + 1;
		} else if (k < arr[mid]) {
			right = mid - 1;
		} else {
			printf("您要找的值的下标是%d", mid);
			break;
		}
	}
	if (left > right) {
		printf("您找的数不存在于数组中");
	}









	return 0;
}