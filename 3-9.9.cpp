//������ͣ���+1/1-1/2+1/3-1/4+����������-1/100
#include <stdio.h>

int main() {
	int i = 0;
	int flag = 1;//����һ�����Ÿı���
	double sum = 0.0;
	for (i = 1; i <= 100; i++) {
		sum += flag * 1.0 / i; //��Ҫ�õ�С�����������߱���Ҫ��С��
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}