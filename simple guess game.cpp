//������Ϸʵ��
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menu() {
	printf("*******��ӭ����������Ϸ********\n");
	printf("***  1.play *** 2.exit*********\n");
	printf("*******************************\n");
	printf("*******************************\n");


}


void game() {
	//����һ�������
	int ret = 0;
	int guess = 0;

	ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	//�ж����Һ��Ƿ���ȷ

	while (1) {
		printf("����������");
		scanf("%d", &guess);
		if (guess < ret) {
			printf("��С��\n");

		} else if (guess > ret) {
			printf("�´���\n");

		} else {
			printf("�¶���\n");
			break;
		}
	}
}


int main() {

	int input = 0;
	srand((unsigned int)time(NULL));

	//ֻҪ������0���Ϳ��Բ�ͣ�������Ϸ��Ϊѭ��
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
				printf("������󣡣�");
		}
	} while (input);








	return 0;

}