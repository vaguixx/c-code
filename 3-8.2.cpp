#include <stdio.h>

int main() {
	int day = 0;
	scanf("%d", &day);
	//ʹ��switch case���ʵ�ֶ��֦
	switch (day) {//switch�����α��ʽ�����������ڲ����������Σ�

		case 1://case������������γ������ʽ��������
			printf("xingqiyi\n");//switch ����������ڣ��������break���һֱִ�У�
			//break��������
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
			printf("����error\n");
			break;
	}





	//if (1 == day) {//ʹ��ifѡ�����ʵ�ֶ��֦
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