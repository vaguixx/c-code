//分数求和，求+1/1-1/2+1/3-1/4+。。。。。-1/100
#include <stdio.h>

int main() {
	int i = 0;
	int flag = 1;//定义一个符号改变量
	double sum = 0.0;
	for (i = 1; i <= 100; i++) {
		sum += flag * 1.0 / i; //想要得到小数，除号两边必须要有小数
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}