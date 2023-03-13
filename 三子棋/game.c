#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"game.h"
//实现初始化函数
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] =' ';
		}
	}
}

//实现打印棋盘函数
void Display(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		//打印数据行
		for (j = 0; j < COL; j++)
		{
			printf(" %c ",board[i][j]);
			if(j<COL-1)
			printf("|");
		}
		//数据行打印完成，换行
		printf("\n");
		//打印分割行
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
					printf("|");
			}
		}
		//分割行打印完成，换行
		printf("\n");
		
	}
	
}

//玩家执棋函数
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家执棋\n");
	printf("请输入要放入棋子的坐标:");
	scanf("%d%d", &x, &y);
	//判断坐标是否合法（是否能放入）
	while (1) {
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已被占用\n");
			}
		}
		else
		{
			printf("地址非法,请重新输入\n");
		}
	 }//如果地址不合法就要一直重复输入，输入成功就跳出循环；
}

//电脑执棋函数实现
void Computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑执棋\n");
	int x = 0;
	int y = 0;
	//生成随机数，变成电脑执棋坐标
	while (1) {
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
		
	}
	
	

	//判断电脑执棋是否合法；
}


//判断棋盘是否放满
int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
			{
				return '0';
			}
			
		}
	}
	return 1;
}


//判断游戏是否结束
char iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		//三行判断
		if (board[i][0] == '*' && board[i][1] == '*' && board[i][2] == '*')
		{
			return '*';
		}
		if(board[i][0] == '#' && board[i][1] == '#' && board[i][2] == '#')
		{
			return '*';
		}
	}
	//三列判断
	for (j = 0; j < COL; j++)
	{
		if (board[0][j] == '*' && board[1][j] == '*' && board[2][j] == '*')
		{
			return '*';
		}
		if (board[0][j] == '#' && board[1][j] == '#' && board[2][j] == '#')
		{
			return '#';
		}
	}
	//两条对角线判断
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == '*')
	{
		return '*';
	}
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] == '*')
	{
		return '*';
	}
	else if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == '#')
	{
		return '#';
	}
	else if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] == '#')
	{
		return '#';
	}
	//棋盘已满平局
	isfull(board,ROW,COL);
	if (1 == isfull(board, ROW, COL))
	{
		printf("平局\n");
		return 'q';
	}
	else
	{
		return 'p';
	}
}