//��ӡ1000-2000������
//���궨�壬�ܱ�4�������ǲ��ܱ�100����
//�����ܱ�400����Ҳ������
#include <stdio.h>

int main() {
	int count = 0;
	int year = 0;
	for (year = 1000; year <= 2000; year++) {
		if (year % 4 == 0 && year % 100 != 0) {
			printf("%d\n", year);
			count++;
		} else if (year % 400 == 0) {
			printf("%d\n", year);
			count++;
		}


	}
	printf("%d", count);





	return 0;
}