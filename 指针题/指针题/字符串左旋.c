#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//�ú���ʵ���ַ�������

//#include<stdio.h>
//#include<string.h>
//
//void leftxuan(char* arr, int sz,int k)
//{
//	//��������ʵ��
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		//ת���ַ�
//		char tmp = 0;
//		tmp = *arr;
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + sz - 1) = tmp;
//	}
//
//}
//
//int main()
//{
//	//��һ���ַ���
//	char arr[20] = "abcdefghi";
//	//��Ӧ�����ַ������ȣ�Ӧ����Ԫ�ظ���
//	int sz = strlen(arr);
//	//�����ַ��ĸ���
//	int k = 3;
//	//������������
//	leftxuan(arr,sz,k );
//	//��ӡ�ַ���
//	printf("%s\n", arr);
//	return 0;
//}

//������ת��ʵ���ַ�������

//#include<stdio.h>
//#include<string.h>
//void reverse(char* left, char*right)
//{
//	
//	//���彻���õĿ�ƿ
//	char tmp = 0;
//	//ʵ�ַ�ת
//	while (left<right)
//	{
//		//����������
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		//ָ���ƶ�
//		left++;
//		right--;
//	}
//
//}


int main()
{
	//�����ַ���
	char arr[20] = "abcdefghi";
	//�����ַ�������
	int n =strlen(arr);
	//��ָ��
	char* left = arr;
	//��ָ��
	char* right = arr + n - 1;
	//���巭ת����reverse
	reverse(left,right);
	//�������η�ת����
	//��ӡ�ַ���
	printf("%s\n", arr);
	return 0;
}