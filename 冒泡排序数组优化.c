#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void bubble_sort(int a[], int sz)
//{
//	
//	int i = 0;
//	for (i = 1; i < sz; i++)
//	{
//		int flag = 1;//����һ���������ж������Ƿ�˳��
//		int j = 0;
//		for (j = 0; j < sz - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//				//���������������˵������˳����Ȼ���ң���������
//				flag = 0;//��������flag���0��������
//			}
//		}
//		if (flag == 1)
//		{
//			//�����������û���κν��������ʱ�������Ѿ���˳���ˣ��������У�ֱ������ѭ��
//			break;//breakֻ������һ��ѭ����������������ֹͣѭ��
//		}
//	}
//}
//
//
//int main()
//{
//	//�����ʼ��
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(a) / sizeof(a[0]);//sz= 10
//	int i = 0;
//	//���뺯���ȴ�С
//	bubble_sort(a,sz);
//	//����ѭ���������
//	for (i = 0; i <= sz - 1; i++)
//	{
//		printf("%d  ",a[i]);
//	}
//	return 0;
//}
void bubble_sort(int a[], int sz)
{

	int i = 0;
	for (i = 1; i < sz; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}


int main()
{
	//�����ʼ��
	int a[10] = { 0 };
	int i = 0;
	//��һ���Լ�������ֵ�����
	printf("������10������\n");
	int sz = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("������ɣ���\n");
	//���뺯���ȴ�С
	bubble_sort(a, sz);
	//����ѭ���������
	printf("˳�����Ϊ��\n");
	for (i = 0; i <= sz - 1; i++)
	{
		printf("%d  ", a[i]);
	}
	return 0;
}