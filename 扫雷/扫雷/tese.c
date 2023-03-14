#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"game.h"
void menu()
{
	printf("******欢迎来到扫雷游戏******\n");
	printf("***********1.play***********\n");
	printf("***********0.exit***********\n");
	printf("请选择选项\n");
	srand((unsigned int)time(NULL));

}
void game()
{
	//创建两个数组，一个用来存放炸弹（mine），一个用来显示（show）
	//炸弹用‘1’，mine用‘0’，show用‘*’
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//初始化两个数组，mine用‘0’，show用‘*’
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');

	////打印棋盘
	//Displayboard(mine, ROW, COL);
	//Displayboard(show, ROW, COL);

	//往mine中埋雷，埋好之后能够到show中查询
	putboom(mine, ROW, COL);
	//打印棋盘
	Displayboard(mine, ROW, COL);//不能把埋雷地方暴露
	Displayboard(show, ROW, COL);

	//排查雷区
	findboom(mine,show,ROW,COL);//在mine上面排查，排查出来的信息显示在show上面

	//游戏完成
	//1.点到炸弹，游戏退出
	//2.找出所有炸弹游戏结束


	//
}



int main() {
	int input = 0;
	
	do
	{
		
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}
	} while (input);

	return 0;
}