//定义一个函数判断是否为素数
//用之前的100-200之间的素数题
#include <stdio.h>

int is_prime(int n) { //判断素数，返回1或0
	int j = 2;
	//让n / 2-(n-1)
	//j的范围为2- n-1
	for (j = 2; j < n; j++) {
		if (n % j == 0) {
			return 0;
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