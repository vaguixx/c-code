#include <stdio.h>
#include <string.h>

int BIG(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int SMALL(int x, int y) {
	if (x > y)
		return y;
	else
		return x;
}

int main() {
	int a = 62;
	int b = 89;
	int k = 4556;
	int l = 45156;
	int max = 0;
	int min = 0;
	max = BIG(a, b);
	printf("�ϴ�ֵ��%d\n", max);
	min = SMALL(k, l);
	printf("��СֵΪ%d", min);
	return 0;
}