#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"game.h"


//��ʼ������
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


//��ӡ����
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----------��ӭ����ɨ����Ϸ------------\n");
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
	printf("-----------��ӭ����ɨ����Ϸ------------\n");
}

//���ײ���
void putboom(char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = manyboom;
	while (count)
	{
		//�������,��mine������, mine�����ʼ��Ϊ0��
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//�ж��ܲ�������
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}


//�Ų���
void findboom(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win< row * col - manyboom)
	{
		//�������꣬�ж��ǲ�����
	//��1����mine���ж����ף����ź�loss
	//	 (2) ��mine���жϲ����ף���show������ʾ�����׵ĸ���
		printf("������Ҫ�Ų�����꣺");
		scanf("%d%d", &x, &y);
		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź�you loss\n");
				Displayboard(mine,row,col);
				break;
			}
			else
			{
				//����Χ�׵ĸ�����ʾ��show[x][y]����
				int count  = get_boom_count(mine,x,y);
				show[x][y] = count +'0';
				Displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("���겻�Ϸ�������������:\n");
		}
		if (win == row * col - manyboom)
		{
			printf("you win!!\n");
			Displayboard(mine, row, col);
		}
	}
	
	
}

//ͳ����Χ�׵ĸ���
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