#include <stdio.h>
#include <string.h>

struct Book { //����һ�����ӵĺ��ж������Եĸ����ýṹ��
	char name[20];//�ṹ�����涨��ĸ���ӵ�е�Ԫ��
	char price;//�ṹ�崴����һ�����͵Ĵ������ǳ����һ��
	//����Ҫ�ں�������ʵ�廯���������ʵ��һ����
};

int main() {
	struct Book a = {//������ ʵ�廯�����嵽a��һ����
		//���������ֵ�Ĺ���Ҳ�г�ʼ��
		"c���Գ������",
		55
	};
	printf("��a������Ϊ%s\n", a.name);
	printf("��a�ļ۸�Ϊ%d\n", a.price);
	//����ֱ�������������ʹ����ĺ��������ݣ�Ҳ���޸�
	a.price = 20;
	printf("�޸ĵ���a�ļ۸���%d\n", a.price);
	//ָ�򵥶�Ԫ�ص�ָ��֪����ô�����ˣ�ָ��ṹ���أ�
	struct Book *pb = &a;//���ṹ��һ��ָ��
	printf("��a��ŵĵ�ַΪ%p\n", pb);
	//ͨ���ṹ��ָ���ӡԪ��
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	printf("%s\n", pb->name );
	printf("%d\n", pb->price);
	//ͨ��ָ�����ı�ṹ���ڲ�Ԫ��
	//pb->name = "cyuyan";����name�����������������ı�����һ����ֵַ��������޸�
	//��Ҫ�޸�ֻ����string.h���������Ŀ⺯��strcpy���޸�
	pb->price = 80;
	printf("%s\n", pb->name );
	printf("%d\n", pb->price);
	//�޸�a.name
	strcpy(a.name, "c++");
	printf("�޸ĺ�����Ϊ%s\n", pb->name);

	return 0;
}