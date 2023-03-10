//折半查找算法模块化实现
#include <stdio.h>

int binary_search(int arr[], int sz, int k) {//当数组在主函数传到模块函数的时候
	//做不到将整个数组传到函数模块，实际上传递的是数组第一个值的地址，本质上arr[]是指针
	//筛选数组中的数字，找到了返回mid，找不到返回0；
	int left = 0;
	int right = sz - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (k < arr[mid]) {
			right = mid - 1;
		} else if (k > arr[mid]) {
			left = mid + 1;
		} else {
			return mid;
		}

	}
	return 0;


}



int main() {
	//先查找需要的数据
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 0;
	printf("请输入1-10要查找的值\n");
	scanf("%d", &k);

	//假设找到了返回下标，找不到返回0；
	int ret = binary_search(arr, sz, k);
	if (ret == 0) {
		printf("找不到数字");
	} else {
		printf("找到了下标是：%d\n", ret);
	}



	return 0;
}