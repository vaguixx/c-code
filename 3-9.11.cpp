//在屏幕上面输出乘法表
#include <stdio.h>

int main() {
	int i = 0; //首先确定只能一行一行的打印，打印完成后换行
	for (i = 1; i < 10; i++) { //打印9行
		int j = 1; //每打印一行，需要从该行第一个打印，即需要初始化j
		for (j = 1; j <= i; j++) { //用行数来控制一行的数的个数
			printf("%d*%d=%-4d", j, i, i * j);
		}
		printf("\n");//一行打印完成，换行
	}
	return 0;
}