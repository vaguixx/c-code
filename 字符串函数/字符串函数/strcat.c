#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//strcat �������ַ���׷��
//char* strcat (char * destanation ,const char * source)
//1.Ŀ�Ŀռ�������㹻�Ŀռ�׷���ַ���
//2.Դ�ַ�����Ŀ���ַ���ĩβ�����С�\0��
//3.Ŀ��ռ������޸�
//4.�ַ����Լ�׷���Լ���Σ�
//��Ȼ�ǲ��еģ���һ��׷��ʱ�Ͱ�ĩβ��\0�ı��ˣ������Ҳ��������ı�־������ѭ��



//strcat����ʹ��

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world!!";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
// 	return 0;
//}



//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcat(char* dest, const char* src)
//{
//	//ȷ��ָ����ȷ
//	assert(dest != NULL);
//	assert(dest != NULL);
//	//���巵��char*��λ��
//	char* ret = dest;
//	//�ҵ�Ŀ���ַ��ġ�\0��
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//��Ŀ���ַ�����׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world!!";
//	//my_strcat(arr1, arr2);
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}