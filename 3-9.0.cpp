#include <stdio.h>

//��������ϵͳ
int main() {
	char password[] = {0};
	printf("����������\n");
	scanf("%s", &password[]);
	if (strcmp(password, "123456") == 0) {
		printf("������ȷ\n");
	} else {
		printf("�������\n");
	}

}