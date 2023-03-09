//打印1000-2000的闰年
//闰年定义，能被4整除但是不能被100整除
//或者能被400整除也叫闰年
#include <stdio.h>

int main() {
	int count = 0;
	int year = 0;
	for (year = 1000; year <= 2000; year++) {
		if (year % 4 == 0 && year % 100 != 0) {
			printf("%d\n", year);
			count++;
		} else if (year % 400 == 0) {
			printf("%d\n", year);
			count++;
		}


	}
	printf("%d", count);





	return 0;
}