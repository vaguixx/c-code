#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//memmove����������memcpy�ڸ�����������ʱ���ž����ԣ�������memmove����
//memmove�������Կ�������λ�õ��ڴ������

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//void* my_memmove(void* dest, const void* src, int num)
//{
//	//����ָ��
//	assert(dest && src);
//	//��¼Ŀ�ĵص�ַ,���ڷ���
//	void* pb = dest;
//	//�ж�ѡ�����ַ�������
//	if (src > dest)
//	{
//		//��dest��srcǰ��ʱ��ǰ->�󿽱������memcpy����
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//��dest��src����ʱ����->ǰ����
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return pb;
//	
//}
//
//int main()
//{
//	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
//	//��memmove�������������ڴ�Ԫ�ص�����
//	//memmove(arr1, arr1 + 2,20);
//
//	//ʵ��memmove����
//	my_memmove(arr1, arr1 + 2, 20);
//	return 0;
//}