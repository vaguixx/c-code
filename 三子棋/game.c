#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"game.h"
//ʵ�ֳ�ʼ������
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

//ʵ�ִ�ӡ���̺���
void Display(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		//��ӡ������
		for (j = 0; j < COL; j++)
		{
			printf(" %c ",board[i][j]);
			if(j<COL-1)
			printf("|");
		}
		//�����д�ӡ��ɣ�����
		printf("\n");
		//��ӡ�ָ���
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
					printf("|");
			}
		}
		//�ָ��д�ӡ��ɣ�����
		printf("\n");
		
	}
	
}

//���ִ�庯��
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("���ִ��\n");
	printf("������Ҫ�������ӵ�����:");
	scanf("%d%d", &x, &y);
	//�ж������Ƿ�Ϸ����Ƿ��ܷ��룩
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
				printf("�������ѱ�ռ��\n");
			}
		}
		else
		{
			printf("��ַ�Ƿ�,����������\n");
		}
	 }//�����ַ���Ϸ���Ҫһֱ�ظ����룬����ɹ�������ѭ����
}

//����ִ�庯��ʵ��
void Computermove(char board[ROW][COL], int row, int col)
{
	printf("����ִ��\n");
	int x = 0;
	int y = 0;
	//�������������ɵ���ִ������
	while (1) {
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
		
	}
	
	

	//�жϵ���ִ���Ƿ�Ϸ���
}


//�ж������Ƿ����
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


//�ж���Ϸ�Ƿ����
char iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		//�����ж�
		if (board[i][0] == '*' && board[i][1] == '*' && board[i][2] == '*')
		{
			return '*';
		}
		if(board[i][0] == '#' && board[i][1] == '#' && board[i][2] == '#')
		{
			return '*';
		}
	}
	//�����ж�
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
	//�����Խ����ж�
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
	//��������ƽ��
	isfull(board,ROW,COL);
	if (1 == isfull(board, ROW, COL))
	{
		printf("ƽ��\n");
		return 'q';
	}
	else
	{
		return 'p';
	}
}