//猜字游戏实现
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menu() {
	printf("*******欢迎来到猜字游戏********\n");
	printf("***  1.play *** 2.exit*********\n");
	printf("*******************************\n");
	printf("*******************************\n");


}


void game() {
	//生成一个随机数
	int ret = 0;
	int guess = 0;

	ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	//判断左右和是否正确

	while (1) {
		printf("请猜随机数：");
		scanf("%d", &guess);
		if (guess < ret) {
			printf("猜小了\n");

		} else if (guess > ret) {
			printf("猜大了\n");

		} else {
			printf("猜对了\n");
			break;
		}
	}
}


int main() {

	int input = 0;
	srand((unsigned int)time(NULL));

	//只要不输入0；就可以不停的玩该游戏，为循环
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
				printf("输入错误！！");
		}
	} while (input);








	return 0;

}