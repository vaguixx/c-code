#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"game.h"


//初始化棋盘
void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			board[i][j] = set;
		}
	}
}


//打印棋盘
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----------欢迎来到扫雷游戏------------\n");
	for (i = 0; i < ROWS-1; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for(i=1;i<=row;i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----------欢迎来到扫雷游戏------------\n");
}

//埋雷操作
void putboom(char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = manyboom;
	while (count)
	{
		//随机埋雷,在mine里面埋, mine里面初始化为0；
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//判断能不能埋雷
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}


//排查雷
void findboom(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win< row * col - manyboom)
	{
		//输入坐标，判断是不是雷
	//（1）在mine上判断是雷，很遗憾loss
	//	 (2) 在mine上判断不是雷，在show上面显示附近雷的个数
		printf("请输入要排查的坐标：");
		scanf("%d%d", &x, &y);
		//判断坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾you loss\n");
				Displayboard(mine,row,col);
				break;
			}
			else
			{
				//将周围雷的个数显示在show[x][y]上面
				int count  = get_boom_count(mine,x,y);
				show[x][y] = count +'0';
				Displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标不合法，请重新输入:\n");
		}
		if (win == row * col - manyboom)
		{
			printf("you win!!\n");
			Displayboard(mine, row, col);
		}
	}
	
	
}

//统计周围雷的个数
int get_boom_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x+1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}