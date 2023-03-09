//打印1-100之间所有三的倍数
//第一时间想到的就是%
//3的倍速%3都是0
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