//二分查找算法复习
#include <stdio.h>

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int k = 7;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	printf("%d", right);
	int mid = (left + right) / 2;
	while (left <= right) {
		if (arr[mid] < k) {
			left = mid + 1;
			mid = (left + right) / 2;
		} else if (arr[mid] > k) {
			right = mid - 1;
			mid = (left + right) / 2;
		} else if (arr[mid] = k) {
			printf("%d", mid);
			break;
		}

	}
	if (left > right) {
		printf("您要找的数不在数组中");
	}
	return 0;
}