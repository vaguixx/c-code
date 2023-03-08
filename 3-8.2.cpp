#include <stdio.h>

int main() {
	int day = 0;
	scanf("%d", &day);
	//使用switch case语句实现多分枝
	switch (day) {//switch（整形表达式），即括号内部必须是整形；

		case 1://case后面必须是整形常量表达式；即整形
			printf("xingqiyi\n");//switch 决定的是入口，如果不加break则会一直执行；
			//break决定出口
			break;
		case 2:
			printf("xingqier\n");
			break;
		case 3:
			printf("xingqisan\n");
			break;
		case 4:
			printf("xingqisi\n");
			break;
		case 5:
			printf("xingqiwu\n");
			break;
		case 6:
			printf("xingqiliu\n");
			break;
		case 7:
			printf("xingqitian\n");
			break;

		default:
			printf("输入error\n");
			break;
	}





	//if (1 == day) {//使用if选择语句实现多分枝
	//	printf("xingqiyi", day);
	//} else if (2 == day) {
	//	printf("xingqier", day);
	//} else if (3 == day) {
	//	printf("xingqisan", day);
	//} else if (4 == day) {
	//	printf("xingqisi", day);
	//} else if (5 == day) {
	//	printf("xingqiwu", day);
	//} else if (6 == day) {
	//	printf("xingqiliu", day);
	//} else if (7 == day) {
	//	printf("xingqiqi", day);
	//}









	return 0;
}