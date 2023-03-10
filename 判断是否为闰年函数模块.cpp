//判断闰年函数模块
#include <stdio.h>

int is_run(int m) {
	//判断是否为闰年
	//能整除4但是不能整除100，或者能整除400是闰年
	if (m % 4 == 0 && m % 100 != 0) {
		return 1;
	} else if (m % 400 == 0) {
		return 1;
	} else {
		return 0;
	}
}



int main() {
	int n = 0;
	printf("请输入年份\n");
	scanf("%d", &n);
	//函数模块，是闰年返回1，不是返回0；
	if (is_run(n) == 1) {
		printf("是闰年\n");
	} else if (is_run(n) == 0) {
		printf("不是闰年\n");
	}



	return 0;

}