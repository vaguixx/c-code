//猜字游戏二次实现
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu() {
	printf("*****欢迎游玩本游戏*****\n");
	printf("************************\n");
	printf("****1.play *** 0.exit***\n");
	printf("************************\n");
}

void game() {
	//猜字游戏两大内容，一，生成一个随机数
	//生成随机数的函数为rand(),rand()函数基于 srand()生成随机数
	//而srand()函数是通过括号内给定的值不断生成1-32776之间的随机数
	//但是若括号内的值不改变则随机数生成还是一样
	//就需要引入一个不断变化数字的随机数，即时间
	//但是时间函数为time(),并且返回值为long型,内部括号里面必须为指针
	//这时候就需要强制内型转换unsigned int()



	int ret = 0; //将生成的随机数放入
	int guess = 0;//将猜的数放入
	srand((unsigned int)time(NULL));
	ret = rand() % 100 + 1; //rand()生成的随机数范围过大，需要将范围缩小到1-100
	//一个数取100余只能取0-99，所以再加一


	//二、判断大小，不断筛选
	//因为需要重复筛选，所以循环
	while (1) {
		printf("请猜随机数\n");
		scanf("%d", &guess);
		if (guess < ret) {
			printf("猜小了\n");
		} else if (guess > ret) {
			printf("猜大了\n");
		} else {
			printf("猜对了\n");
			break;//只有猜对了猜能跳出循环，不然就一直猜
		}
	}





}


int main() { //开头界面
	int input = 0;//定义一个界面用户输入值
	//为了游戏能够去重复游玩，猜完后应该循环到该界面继续提供选择
	do {
		menu();

		printf("请选择\n");
		scanf("%d", &input);
		switch (input) {
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误！！\n");
		}
	} while (input);

}