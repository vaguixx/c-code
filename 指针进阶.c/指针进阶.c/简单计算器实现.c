#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//#include<stdio.h>
//
//void menu()
//{
//	printf("*********��ӭʹ�ü�����*********\n");
//	printf("*********1.add **  2.sub********\n");
//	printf("*********3.mul **  4.div********\n");
//	printf("***************0.exit***********\n");
//	printf("*********��ѡ���ܣ�***********\n");
//	
//
//}
//
//int add(int x, int y)
//{
//	printf("%d\n", x + y);
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	printf("%d\n", x - y);
//	return x + y;
//}
//
//int mul(int x, int y)
//{
//	printf("%d\n", x * y);
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	printf("%d\n", x / y);
//	return x / y;
//}
//
//int main()
//{
//	
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	//������
//	do {
//		
//		//���˵�
//		menu();
//		scanf("%d", &input);
//		//ѡ����
//		switch (input)
//		{
//		case 1:
//			printf("������Ҫ��ӵ�������:\n");
//			scanf("%d%d", &x, &y);
//			//�ӷ�ģ��
//			add(x, y);
//			break;
//		case 2:
//			printf("������Ҫ�����������:\n");
//			scanf("%d%d", &x, &y);
//			//����ģ��
//			sub(x, y);
//			break;
//		case 3:
//			printf("������Ҫ��˵�������:\n");
//			scanf("%d%d", &x, &y);
//			//�˷�ģ��
//			mul(x, y);
//			break;
//		case 4:
//			printf("������Ҫ�����������:\n");
//			scanf("%d%d", &x, &y);
//			//�ӷ�ģ��
//			div(x, y);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default :
//			printf("�����������������\n");
//			break;
//
//		}
//
//	} while (input);
//	return 0;
//}

//��������������أ��ú���ָ�������Ż�
//#include<stdio.h>
//
//void menu()
//{
//	printf("*********��ӭʹ�ü�����*********\n");
//	printf("*********1.add **  2.sub********\n");
//	printf("*********3.mul **  4.div********\n");
//	printf("***************0.exit***********\n");
//	printf("*********��ѡ���ܣ�***********\n");
//
//
//}
//
//int add(int x, int y)
//{
//	printf("%d\n", x + y);
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	printf("%d\n", x - y);
//	return x + y;
//}
//
//int mul(int x, int y)
//{
//	printf("%d\n", x * y);
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	printf("%d\n", x / y);
//	return x / y;
//}
//
//int main()
//{
//
//	int x = 0;
//	int y = 0;
//	int a = 0;
//	int input = 0;
//	//������
//	do {
//
//		//���˵�
//		menu();
//		//ѡ����
//		int (*pfarr[5])(int, int) = { 0,add,sub,mul,div };
//		printf("��ѡ����:\n");
//		scanf("%d", &input);
//		printf("������������\n");
//		scanf("%d%d", &x, &y);
//		int ret = (pfarr[input])(x, y);
//		printf("%d", ret);
//	} while (input);
//	return 0;
//}