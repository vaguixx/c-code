//�ж����꺯��ģ��
#include <stdio.h>

int is_run(int m) {
	//�ж��Ƿ�Ϊ����
	//������4���ǲ�������100������������400������
	if (m % 4 == 0 && m % 100 != 0) {
		return 1;
	} else if (m % 400 == 0) {
		return 1;
	} else {
		return 0;
	}
}



int main() {
	int n = 0;
	for (n = 1000; n <= 2000; n++)
		//����ģ�飬�����귵��1�����Ƿ���0��
	{
		if (is_run(n) == 1) {
			printf("%d������\n", n);
		} else if (is_run(n) == 0) {
			printf("%d��������\n", n);
		}
	}



	return 0;

}