#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"game.h"
void menu()
{
	printf("******��ӭ����ɨ����Ϸ******\n");
	printf("***********1.play***********\n");
	printf("***********0.exit***********\n");
	printf("��ѡ��ѡ��\n");
	srand((unsigned int)time(NULL));

}
void game()
{
	//�����������飬һ���������ը����mine����һ��������ʾ��show��
	//ը���á�1����mine�á�0����show�á�*��
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//��ʼ���������飬mine�á�0����show�á�*��
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');

	////��ӡ����
	//Displayboard(mine, ROW, COL);
	//Displayboard(show, ROW, COL);

	//��mine�����ף����֮���ܹ���show�в�ѯ
	putboom(mine, ROW, COL);
	//��ӡ����
	Displayboard(mine, ROW, COL);//���ܰ����׵ط���¶
	Displayboard(show, ROW, COL);

	//�Ų�����
	findboom(mine,show,ROW,COL);//��mine�����Ų飬�Ų��������Ϣ��ʾ��show����

	//��Ϸ���
	//1.�㵽ը������Ϸ�˳�
	//2.�ҳ�����ը����Ϸ����


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
			printf("�뿪ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
		}
	} while (input);

	return 0;
}