#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//#include<stdio.h>
//
//struct test 
//{
//	int num;//4
//	char* pcname;//4/8
//	short sdate;//2
//	char cha[2];//2
//	short sba[4];//4
//}*p;
//
//int main()
//{
//	//���⿼�����ָ�����;�����ָ��ļ���
//	printf("%p\n",p);
//	printf("%p\n", p + 0x1);
//	//������pָ����ָ��������ṹ�壬�ṹ��Ĵ�СΪ20���ʽ����0x10000+20
//	printf("%p\n",(unsigned long) p + 0x1);
//	//������pָ�뱻ǿ������ת������һ��long�����ݣ�long��int�Ͳ�ֱ࣬��+1�Ϳ�
//	printf("%p\n", (unsigned int*)p + 0x1);
//	//�����pָ�뱻ǿ��ת������һ��int*ָ�����ͣ�ָ��+1���ĸ��ֽڣ���+4
//	return 0;
//}