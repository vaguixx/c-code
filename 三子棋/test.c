#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include"game.h"

void game() {
	//��Ϸ���ɵ�һ����������
	char board[ROW][COL] = { 0 };
	//��Ϸ���ɵڶ����������ʼ��
	InitBoard(board, ROW, COL);
	//���Գ�ʼ���Ƿ�ɹ�
	/*int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%c\n", board[i][j]);
		}
	}
*///��ʼ���ɹ�
//��Ϸ����������������
	Display(board, COL, ROW);
	//����������ϣ����Ĳ�����ʼ��Ϸ
	while (1)
	{
		//���ִ��
		PlayerMove(board, ROW, COL);
		//���ִ����ɣ���ӡ������ʾ״̬
		Display(board, COL, ROW);
		//�ж���Ϸ�Ƿ����
		iswin(board,COL,ROW);
		int ret = iswin(board, COL, ROW);
		if (ret == '*')
		{
			printf("���ʤ��\n");
			break;
		}
		else if(ret == '#')
		{
			printf("����ʤ��\n");
			break;
		}
		else if(ret == 'q')
		{
			printf("ƽ�֣�\n");
			break;
		}
		else if (ret == 'p')
		{
			;
		}

		//����ִ��
		Computermove(board, COL, ROW);
		Display(board, COL, ROW);
		iswin(board,COL,ROW);
		int ort = iswin(board, COL, ROW);
		if (ort == '*')
		{
			printf("���ʤ��\n");
			break;
		}
		else if (ort == '#')
		{
			printf("����ʤ��\n");
			break;
		}
		else if (ort == 'q')
		{
			printf("ƽ�֣�\n");
			break;
		}
		else if (ort == 'p')
		{
			;
		}
		//����Ϸ��ɺ���Ϸ����
		//��Ϸ����������״̬�����ʤ��������'*'������ʤ��������'#'��ƽ�֣�������'q'����Ϸ����'p'
		
	}

}
void menu() 
{
	int input = 0;
	do
	{
		printf("*****��ӭ������������Ϸ*****\n");
		printf("******1.play***0.exit*******\n");
		printf("****************************\n");
		printf("****************************\n");
		scanf("%d", &input);
		srand((unsigned int)time(NULL));
		switch (input)
		{
		case 1:
			printf("��ӭ������������Ϸ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("������󣡣�\n");
			break;
		}
	} while (input);
}

int main()
{
	//д�˵�
	menu();
	
	return 0;
}