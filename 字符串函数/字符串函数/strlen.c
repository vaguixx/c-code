#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//strlen���������ַ������ȵĺ���
//strlen�����ԡ�\0��Ϊ������־��������ǡ�\0��֮ǰ���ַ����ĸ���
// strlen�������ص���size_t ,��     �޷�����
//������ڡ�\0�������ܽ���

//strlen��ʹ��
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[10] = "dhaiudh";
//	char arr2[10] = "dhai\0udh";
//	int len1 = strlenarr1);
//	printf("%d\n", len1);
//	int len2 = strlenarr2);
//	printf("%d\n", len2);
//	return 0;
//}


//ģ��ʵ��strlen����
//1.�������汾
//2.�ݹ�汾
//3.ָ��-ָ��汾

//#include<stdio.h>
//#include<assert.h>
//
//int my_strlen(const char* arr)
//{
//	//���ָ���Ƿ�����
//	assert(arr != NULL);
//	int count = 0;//������
//	char* p = arr; //ָ��ָ�����飻
//		while (1)
//		{
//			if (*p != '\0')
//			{
//				count++;
//				p++;
//			}
//			else
//				return count;
//		}
//}
//
//int main()
//{
//	char arr[20] = "dahnkdoa";
//	//�����ҵ�strlen����
//	my_strlen(arr); 
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

