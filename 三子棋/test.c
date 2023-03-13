#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include"game.h"

void game() {
	//游戏生成第一步生成数组
	char board[ROW][COL] = { 0 };
	//游戏生成第二步，数组初始化
	InitBoard(board, ROW, COL);
	//测试初始化是否成功
	/*int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%c\n", board[i][j]);
		}
	}
*///初始化成功
//游戏第三步，生成棋盘
	Display(board, COL, ROW);
	//棋盘生成完毕，第四步，开始游戏
	while (1)
	{
		//玩家执棋
		PlayerMove(board, ROW, COL);
		//玩家执棋完成，打印棋盘显示状态
		Display(board, COL, ROW);
		//判断游戏是否结束
		iswin(board,COL,ROW);
		int ret = iswin(board, COL, ROW);
		if (ret == '*')
		{
			printf("玩家胜！\n");
			break;
		}
		else if(ret == '#')
		{
			printf("电脑胜！\n");
			break;
		}
		else if(ret == 'q')
		{
			printf("平局！\n");
			break;
		}
		else if (ret == 'p')
		{
			;
		}

		//电脑执棋
		Computermove(board, COL, ROW);
		Display(board, COL, ROW);
		iswin(board,COL,ROW);
		int ort = iswin(board, COL, ROW);
		if (ort == '*')
		{
			printf("玩家胜！\n");
			break;
		}
		else if (ort == '#')
		{
			printf("电脑胜！\n");
			break;
		}
		else if (ort == 'q')
		{
			printf("平局！\n");
			break;
		}
		else if (ort == 'p')
		{
			;
		}
		//当游戏完成后，游戏结束
		//游戏结束有四种状态，玩家胜（结束）'*'，电脑胜（结束）'#'，平局（结束）'q'，游戏继续'p'
		
	}

}
void menu() 
{
	int input = 0;
	do
	{
		printf("*****欢迎来到三子棋游戏*****\n");
		printf("******1.play***0.exit*******\n");
		printf("****************************\n");
		printf("****************************\n");
		scanf("%d", &input);
		srand((unsigned int)time(NULL));
		switch (input)
		{
		case 1:
			printf("欢迎来到三子棋游戏！\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default :
			printf("输入错误！！\n");
			break;
		}
	} while (input);
}

int main()
{
	//写菜单
	menu();
	
	return 0;
}