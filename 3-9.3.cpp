//��ӡ1-100֮���������ı���
//��һʱ���뵽�ľ���%
//3�ı���%3����0
#include <stdio.h>

int main() {
	int i = 0;
	int x = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}