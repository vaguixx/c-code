//����һ�������ж��Ƿ�Ϊ����
//��֮ǰ��100-200֮���������
#include <stdio.h>

int is_prime(int n) { //�ж�����������1��0
	int j = 2;
	//��n / 2-(n-1)
	//j�ķ�ΧΪ2- n-1
	for (j = 2; j < n; j++) {
		if (n % j == 0) {
			return 0;
		}

	}
	return 1;//���ѭ�����˶��޷����0��������������ֱ�ӷ���1����
}


int main() {
	//����ѭ�������ж�
	int i = 0;
	for (i = 100; i <= 200; i++) {
		is_prime(i);//���庯��������������1��������������0��
		if (is_prime(i) == 1) {
			printf("%d������\n", i);
		} else if (is_prime(i) == 0) {
			printf("%d��������\n", i);
		}
	}



	return 0;
}