//����ģ����ü�������ÿ����һ�κ�������������1
#include <stdio.h>

//û���õ�a�������ص�ֵ������void
void A(int *sum) {//ֻ�аѵ�ַ����ģ�麯������������ͨ��ָ�����ģ�����������
	(*sum)++;//++���ȼ���*��
}

int main() {
	//�������һ��a���������ؼ�������ֵ
	int sum;
	A(&sum);
	printf("%d\n", sum);
	A(&sum);
	printf("%d\n", sum);
	A(&sum);
	printf("%d\n", sum);
	A(&sum);
	printf("%d\n", sum);




	return 0;
}