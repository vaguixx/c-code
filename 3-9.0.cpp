#include <stdio.h>

//密码输入系统
int main() {
	char password[] = {0};
	printf("请输入密码\n");
	scanf("%s", &password[]);
	if (strcmp(password, "123456") == 0) {
		printf("密码正确\n");
	} else {
		printf("密码错误\n");
	}

}