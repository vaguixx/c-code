//�۰�����㷨ģ�黯ʵ��
#include <stdio.h>

int binary_search(int arr[], int sz, int k) {//������������������ģ�麯����ʱ��
	//���������������鴫������ģ�飬ʵ���ϴ��ݵ��������һ��ֵ�ĵ�ַ��������arr[]��ָ��
	//ɸѡ�����е����֣��ҵ��˷���mid���Ҳ�������0��
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
	//�Ȳ�����Ҫ������
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 0;
	printf("������1-10Ҫ���ҵ�ֵ\n");
	scanf("%d", &k);

	//�����ҵ��˷����±꣬�Ҳ�������0��
	int ret = binary_search(arr, sz, k);
	if (ret == 0) {
		printf("�Ҳ�������");
	} else {
		printf("�ҵ����±��ǣ�%d\n", ret);
	}



	return 0;
}