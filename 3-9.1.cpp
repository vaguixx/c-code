//���������Ӵ�С�����
#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	printf("������������\n");
	scanf("%d", &a);//������scanf("%d%d%d",&a,&b,&c);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a > b && a > c) {
		printf("%d\n", a);
		if (b > c) {
			printf("%d\n", b);//�㷨��ǿ�������ȴ�С���������̫�����˷���Դ�ʹ�������
			printf("%d\n", c);//��Ҫ�Ż�
		} else {
			printf("%d\n", c);
			printf("%d\n", b);
		}
	}
	if (b > a && b > c) {
		printf("%d\n", b);
		if (a > c) {
			printf("%d\n", a);
			printf("%d\n", c);
		} else {
			printf("%d\n", c);
			printf("%d\n", a);
		}
	}
	if (c > b && c > a) {
		printf("%d\n", c);
		if (a > b) {
			printf("%d\n", a);
			printf("%d\n", b);
		} else {
			printf("%d\n", b);
			printf("%d\n", a);
		}
	}


	return 0;
}