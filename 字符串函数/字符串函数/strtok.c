#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//strtok���������ָ��ַ���
//��һ������ָ���ַ�������������0�����߶����sep��һ�����߶���ָ����ָ�ı��
//strtok�����ҵ���һ����ǣ������á�\0����β������һ��ָ�������ǵ�ָ�룬��ע�⣡strtok������ı��ַ�����
//һ�������Ŀ��Ըı����ݵ���ʱ���������в���
//strtok��һ�Ĳ�����ΪNULL�������ҵ��ַ����е�һ����ǣ�strtok�����������ַ����е�λ�ã�
//strtok��һ�Ĳ���ΪNULL������������һ�������λ�ÿ�ʼ��������һ�����
//�ַ����в����ڸ���ı�Ǿͻ᷵��NULLָ��

#include<stdio.h>
#include<string.h>

//int main()
//{
//	
//	char arr[30] = "192.168.132.88";
//	char* p = ".";
//	char tmp[30] = { 0 };
//	strcpy(tmp, arr);
//	char* ret = NULL;
//	//strtok������ʹ��
//	ret = strtok(tmp, p);//����һ��\0����192\0168.132.88\0
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);//ֱ�Ӵ���һ��\0��λ�ÿ�ʼ���ʣ����ڶ���\0��192\0168\0132.88\0
//	ret = printf("%s\n", ret);
//	ret = strtok(NULL, p);//ֱ�Ӵ���һ��\0��λ�ÿ�ʼ���ʣ���������\0��192\0168\0132\088\0
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);//���һ��
//	printf("%s\n", ret);
//	return 0;
//}

//���Է������������������Ҳ�����ʹ��
//int main()
//{
//
//	char arr[30] = "192.168.132.88";
//	char* p = ".";
//	char tmp[30] = { 0 };
//	strcpy(tmp, arr);
//	char* ret = NULL;
//	//strtok������ʹ��
//	for (ret = strtok(tmp, p); ret != NULL;ret = strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}