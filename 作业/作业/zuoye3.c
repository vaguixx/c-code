#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//��ӡһ���������Ƶ�����λ��ż��λ
//#include<stdio.h>
//
// void whatof(int x)
//{
//	 int i = 0;//00000000000000000000000000001111
//	 int p = 0;
//	//�ȴ�ӡ������һλ 32λint��ӡ��һλ����������31λ��Ȼ��&1��
//	 for (i = 31; i >=1; i -= 2)
//	 {
//
//		 printf("%d  ", (x>>i) & 1);
//	 }
//	 //��ż����ָ�
//	 printf("\n");
//	 //��ӡż����
//	 for (i = 30; i >= 0; i -= 2)
//	 {
//		 printf("%d  ", (x >> i) & 1);
//	 }
//	 
//}
//
//int main()
//{
//	int a = 0;
//	printf("������һ����\n");
//	scanf("%d", &a);
//	whatof(a);
//}