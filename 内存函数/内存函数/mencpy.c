#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//�ڴ濽������(string.h)
//��һƬ�ڴ�ռ��Ԫ�ؿ�������һ�ڴ�ռ䣬�������ڿ��������ľ��޲��ܿ��������Ԫ��
// c�����й涨memcpy���ܿ����ص����������ڱ������Ĳ�ͬ����һ�����ǿ����ص�������
//char* memcpy(void* dest ,const void* src,num)
//�������������ɺ󷵻�Ŀ�ĺ�������Ԫ�ص�ַ��void*�����κ����͵�ָ�붼���Խ��ܣ�num����Ҫ�������ֽ���

//ע������void*���͵�ָ������û�й̶������� ���ǲ��ܹ����н����ò�����*����++��--�ģ�
//��Ϊ���ܹ�ȷ��Ҫ���ʵ��ֽ���


//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//void* my_memcpy(void* dest, void* src, int num)
//{
//	//����ֵchar*���Ƿ���Ŀ�ĵ�ַ
//	//����void*�������ԣ����뽫��ת�����ܹ��ƶ��ͽ����õ�ָ��
//	//��Ϊnum�����ֽ�Ϊ��λ����ô����Ҳ���ֽ�Ϊ��λ����������ǿ��ת����char*
//
//	assert(dest && src);
//
//	void* pb = dest;//��¼Ŀ�ĵص�ַ�����ڷ���
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;//��һ���ֽڵ����ݿ���
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return pb;
//}
//
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	//����strcpy����ֻ�ܿ����ַ�����������̫ǿ��������Ҫmemcpy����������
//
//	//memcpy������ʹ��
//	//memcpy(arr2, arr1, 20);
//
//	//memcpy��ʵ��
//	my_memcpy(arr2, arr1, 20);
//	return 0;
//}