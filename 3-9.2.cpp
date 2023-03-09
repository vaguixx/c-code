//三个数从大到小输出//算法优化版
#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int tmp = 0;//空瓶倒
	printf("请输入三个数\n");
	scanf("%d%d%d", &a, &b, &c); //要做的事就是把最大值往a里面放，最小值放c
	if (a < b) {
		tmp = b;//冒泡排序基础
		b = a;
		a = tmp;
	}
	if (a < c) {
		tmp = c;
		c = a;
		a = tmp;
	}
	if (b < c) {
		tmp = c;
		c = b;
		b = tmp;
	}


	//和我想的不同的是，无论怎么变化，只要保证a里面是最大值，c里面是最小值即可
	printf("%d %d %d\n", a, b, c); //这样也能保证是由大到小输出

	return 0;
}