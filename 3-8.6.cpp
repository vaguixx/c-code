//�۰�����㷨�Ļ���ʵ��
//ǰ�ᣬ����Ϊ˳�����У����ڿ���ʹ��ð������Ľ�
#include <stdio.h>

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	int right = sz - 1;
	int mid = (left + right) / 2;
	printf("%d\n", mid);
	int k = 7;//kΪ���ҵ���ֵ
	while (left <= right) {
		if (k > arr[mid]) {
			left = mid + 1;
		} else if (k < arr[mid]) {
			right = mid - 1;
		} else {
			printf("��Ҫ�ҵ�ֵ���±���%d", mid);
			break;
		}
	}
	if (left > right) {
		printf("���ҵ�����������������");
	}









	return 0;
}