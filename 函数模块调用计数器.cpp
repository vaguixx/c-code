//函数模块调用计数器，每调用一次函数，计数器加1
#include <stdio.h>

//没有用到a函数返回的值，定义void
void A(int *sum) {//只有把地址传到模块函数中来，才能通过指针操作模块外面的数据
	(*sum)++;//++优先级比*高
}

int main() {
	//假设调用一个a函数，返回计数器的值
	int sum;
	A(&sum);
	printf("%d\n", sum);
	A(&sum);
	printf("%d\n", sum);
	A(&sum);
	printf("%d\n", sum);
	A(&sum);
	printf("%d\n", sum);




	return 0;
}