//让三个数从大到小输出；
#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入三个数\n");
	scanf("%d", &a);//可以用scanf("%d%d%d",&a,&b,&c);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a > b && a > c) {
		printf("%d\n", a);
		if (b > c) {
			printf("%d\n", b);//算法勉强能做到比大小输出，但是太过于浪费资源和代码量高
			printf("%d\n", c);//需要优化
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