#include <stdio.h>
#include <math.h>

//算法优化
int is_prime(int n) { //判断素数，返回1或0
	int j = 2;
	//让n % 2-(n-1)
	//j的范围为2- n-1
	for (j = 2; j < sqrt(n); j++) {//因为素数要除所有2-n-1的数，比如16=2*8；除2和除8效果相同
		if (n % j == 0) {
			return 0;         //故可以优化
		}

	}
	return 1;//如果循环完了都无法输出0；则它是素数，直接返回1就行
}


int main() {
	//定义循环依次判断
	int i = 0;

	for (i = 100; i <= 200; i++) {
		is_prime(i);//定义函数，是素数返回1，不是素数返回0；
		if (is_prime(i) == 1) {
			printf("%d是素数\n", i);
		} else if (is_prime(i) == 0) {
			printf("%d不是素数\n", i);
		}
	}



	return 0;
}