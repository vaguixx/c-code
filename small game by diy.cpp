//������Ϸ����ʵ��
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu() {
	printf("*****��ӭ���汾��Ϸ*****\n");
	printf("************************\n");
	printf("****1.play *** 0.exit***\n");
	printf("************************\n");
}

void game() {
	//������Ϸ�������ݣ�һ������һ�������
	//����������ĺ���Ϊrand(),rand()�������� srand()���������
	//��srand()������ͨ�������ڸ�����ֵ��������1-32776֮��������
	//�����������ڵ�ֵ���ı�����������ɻ���һ��
	//����Ҫ����һ�����ϱ仯���ֵ����������ʱ��
	//����ʱ�亯��Ϊtime(),���ҷ���ֵΪlong��,�ڲ������������Ϊָ��
	//��ʱ�����Ҫǿ������ת��unsigned int()



	int ret = 0; //�����ɵ����������
	int guess = 0;//���µ�������
	srand((unsigned int)time(NULL));
	ret = rand() % 100 + 1; //rand()���ɵ��������Χ������Ҫ����Χ��С��1-100
	//һ����ȡ100��ֻ��ȡ0-99�������ټ�һ


	//�����жϴ�С������ɸѡ
	//��Ϊ��Ҫ�ظ�ɸѡ������ѭ��
	while (1) {
		printf("��������\n");
		scanf("%d", &guess);
		if (guess < ret) {
			printf("��С��\n");
		} else if (guess > ret) {
			printf("�´���\n");
		} else {
			printf("�¶���\n");
			break;//ֻ�в¶��˲�������ѭ������Ȼ��һֱ��
		}
	}





}


int main() { //��ͷ����
	int input = 0;//����һ�������û�����ֵ
	//Ϊ����Ϸ�ܹ�ȥ�ظ����棬�����Ӧ��ѭ�����ý�������ṩѡ��
	do {
		menu();

		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input) {
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("������󣡣�\n");
		}
	} while (input);

}