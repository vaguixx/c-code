#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//strcmp�ַ����ȽϺ���
//strcmp�ַ����ȽϹ��������һ���ַ��Ƚϣ�a����ĵ�һ���ַ�>����b�����̾ͷ���һ����ֵ
//�෴�򷵻ظ�ֵ�����������Ƚϵڶ����ַ���Ҳ����˵strcmp�����ȽϺ��ַ��������޹أ�ֻ�ڶ�Ӧλ��
//�ַ��Ĵ�С�й�

//strcmp����ʹ��

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int ret = strcmp("adha", "adbdaidhad");//��ʹ�ڶ����ַ������ȱȵ�һ���ַ�������������Ȼ�ǵ�һ���ַ�����
//	printf("%d\n", ret);
//
//
//
//	return 0;
//}


//����strcmpʵ��

//#include<stdio.h>
//#icnldue<assert.h>
//int my_strcmp(const har* s1, const char* s2)
//{
// assert(s1 != NULL);
// assert(s2 != NULL);
//	while (*s1 == *s2)
//	{
//		if (s1 != '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//
//
//}
//
//int main()
//{
//	char* p = "dahdia";
//	char* pb = "adhaid";
//	//���庯��
//	int x = my_strcmp(p, pb);
//	if (x > 0)
//	{
//		printf("p>pb\n");
//	}
//	else if (x < 0)
//	{
//		printf("p<pb\n");
//	}
//	else if (x == 0)
//	{
//		printf("p=pb\n");
//	}
//	
//	return 0;
//}