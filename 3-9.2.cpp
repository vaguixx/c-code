//�������Ӵ�С���//�㷨�Ż���
#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int tmp = 0;//��ƿ��
	printf("������������\n");
	scanf("%d%d%d", &a, &b, &c); //Ҫ�����¾��ǰ����ֵ��a����ţ���Сֵ��c
	if (a < b) {
		tmp = b;//ð���������
		b = a;
		a = tmp;
	}
	if (a < c) {
		tmp = c;
		c = a;
		a = tmp;
	}
	if (b < c) {
		tmp = c;
		c = b;
		b = tmp;
	}


	//������Ĳ�ͬ���ǣ�������ô�仯��ֻҪ��֤a���������ֵ��c��������Сֵ����
	printf("%d %d %d\n", a, b, c); //����Ҳ�ܱ�֤���ɴ�С���

	return 0;
}