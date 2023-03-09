//给定两个数求他们的最大公约数
//辗转相除法的实际应用
#include <stdio.h>

int main() {
	int m = 0 ;
	int n = 0;
	int x = 0;
	printf("请输入两个数\n");
	scanf("%d%d", &m, &n);
	while (m % n) {//while循环的应用，若while循环表达式内部的值为0（假），即跳出循环
		x = m % n;//内部的值为非0（真），即继续循环
		m = n;//找到循环的诀窍是找出哪一部分是需要重复不断做的
		n = x;
	}
	printf("%d\n", n);
	return 0;
}