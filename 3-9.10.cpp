//��ʮ���������ֵ
//ð���������
#include <stdio.h>

int main() {
	//int arr[10] = {0};
	//int i = 0;
	//int max = 0; //����һ�����ֵ�������ֵ��������������ֵ�Ƚϣ����С�ڣ��͸���max
	//printf("������10����\n");
	//for (i = 0; i < 10; i++) {
	//	scanf("%d", &arr[i]);
	//}
	//for (i = 0; i < 10; i++) {
	//	if (max < arr[i]) {
	//		max = arr[i];
	//	}
	//}
	//printf("max = %d\n", max);



	//�㷨�Ż���������ķ����У����޶���10��������ôȡ��ʮ������������
	//int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);//ֱ�������������ֵ�ĸ���
	//int max = 0; //����һ�����ֵ�������ֵ��������������ֵ�Ƚϣ����С�ڣ��͸���max

	//for (i = 0; i < sz; i++) {
	//	if (max < arr[i]) {
	//		max = arr[i];
	//	}
	//}
	//printf("max = %d\n", max);

	//�����������ȫ���Ÿ����أ���ô�ǲ��Ǹ�max��ʼ��Ϊ0��ʱ�򣬾ͽ����ֵ�ı���
	//����max��ʼ����ֵ��������������ֵ��һ��Ϊ��һ��
	int arr[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//ֱ�������������ֵ�ĸ���
	int max = arr[0];//Ϊ�˷�ֹmax����һ�������в����ڵ����ֵ������һ���������е�ֵ��ʼ��

	for (i = 0; i < sz; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("max = %d\n", max);









	return 0;
}