#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)



//ö������
//ΪʲôҪʹ��ö�٣�ö�ٵ��ŵ�
//1.���Ӵ���Ŀɶ��ԺͿ�ά����
//2.��#define����������ȣ�ö�����������ͼ�飬�����Ͻ�
//3.��ֹ������Ⱦ����װ
//4.���ڵ���
//5.ʹ�÷��㣬���Զ�ζ���

//�ܹ�ʹ��ö�����͵ĵط��ܶ࣬ͨ���ǹ̶�����Ŀ͹���ʵ
//����

//enum origin_color//��ԭɫ,���ƵĻ������ڣ���Ф���·ݣ������ȵ�
//{
//	red,
//	green,
//	bule
//};


//������ö������ʱ����һ����Աͨ����ֵΪ0��֮��ÿ����Ա����ǰ��ĳ�Աֵ+1

//#include<stdio.h>
//
//enum origin_color
//{
//	red,//0
//	green,//0+1=1
//	bule//1+1=2
//};
//
//int main()
//{
//	printf("%d\n", red);
//	printf("%d\n", green);
//	printf("%d\n", bule);
//	return 0;
//}




//ö�����͵�ʵ��Ӧ��

//#include<stdio.h>
//
//void menu()
//{
//	printf("******��ӭʹ�ü�����******\n");
//	printf("******1.add    2.sub******\n");
//	printf("******3.mul    4.div******\n");
//	printf("*********0.exit***********\n");
//	printf("**************************\n");
//	printf("**************************\n");
//}
//
//enum option
//{
//	exit,
//	add,
//	sub,
//	mul,
//	div
//};
//
//int main()
//{
//	//���׼���������
//	int input = 0;
//	do
//	{
//		menu();
//		
//		scanf("%d", &input);
//		switch (input)
//		{
//			//��߿ɶ���
//		case add:
//			//add();
//			break;
//		case sub:
//			//sub();
//			break;
//		case mul:
//			//mul();
//			break;
//		case div:
//			//div();
//			break;
//		case exit:
//			printf("�˳�������\n");
//			break;
//		default :
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}