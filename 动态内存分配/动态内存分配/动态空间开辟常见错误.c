#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//1.��NULL��ָ��Ľ�����

//#include<stdio.h>
//#include<stdlib.h>
//#include<errno.h>
//
//int main()
//{
//	int * p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror(errno);
//	}
//	*p;//���û��������жϣ�  pΪNULLָ�룬�Կ�ָ������ûᱨ��
//
//	return 0;
//}


//2.�Զ�̬���ٿռ��Խ�����

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	//Խ�����
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		*(p + i) = i;
//	}
//	//һ��Խ����ʣ������ֱ������
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//3.�ԷǶ�̬���ٵĿռ�����ͷ�

//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	return 0;
//}


//4.ʹ��free�ͷ�һ���ֶ�̬���ٵ��ڴ�

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	int i = 0;
//		for (i = 0; i < 20; i++)
//		{
//			*p = i;
//			p++;
//		}
//		//�ͷ�
//		free(p);//�ͷ�һ���ֶ�̬���ٵĿռ�
//		p = NULL;
//		return 0;
//}


//��ͬһ���ڴ���ж���ͷ�
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*p = i;
//			 p++;
//		}
//		//�ͷ�
//		free(p);//�ͷ�һ���ֶ�̬���ٵĿռ�
//		//�ظ��ͷ�
//		free(p);
//		return 0;
//}


//��̬�����ڴ�Ŀռ������ͷ�



