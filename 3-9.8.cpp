//��1-100�г����˶��ٴ�����9
#include <stdio.h>

int main() {
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++) {
		//������ж�����
		if (i % 10 == 9) {//���жϸ�λ�����Ƿ���9����9��count+1
			count++;
		}
		if (i / 10 == 9) {//�ж�ʮλ�����Ƿ�Ϊ9
			count++;//ע����������if��֧���֮��Ĺ�ϵ������һ���ǲ��й�ϵ
		}//ʮλ�ϵ�����Ϊ9����λ�ϵ�����Ҳ��Ϊ9���������ǳ�����2��9����������һ���ǲ��й�ϵ
	}
	printf("%d\n", count);
	return 0;
}