//求素数优化算法
#include <stdio.h>
#include <math.h>

int main() {//以16举例，16=4*4=2*8，3-9.6的算法16除完4，16还会去除一边8；
	int i = 0;//然而这是完全没有必要的，浪费资源
	int j = 0;//所以就想，16只除以4，并不需要再除一遍8，即缩小判断是否为素数的范围，j的范围
	int count = 0;//由数学可知一个数有两个因素，其中一个因数一定是小于等于sqrt（i）
	for (i = 100; i <= 200; i++) {

		for (j = 2; j <= sqrt(i); j++) {//这样的算法让计算机少运算了很多不必要的计算

			if (i % j == 0) {
				break;
			}

		}

		if (j > sqrt(i) ) {
			printf("%d ", i);
			count++;
		}


	}
	printf("%d", count);
	return 0;
}