#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//����strerror,�Ѵ�����ת��Ϊ��λ��Ϣ
//����perror��ֱ�Ӵ�ӡ��λ��Ϣ
// ���ȰѴ�����ת���ɴ�����Ϣ����ӡ������Ϣ������������Ϣ��
//void perror(const char* str)

#include<stdio.h>
#include<string.h>
#include<errno.h>

int main()
{
	FILE* pb = fopen("test.txt","r");//fopen,������һ���ļ����������ļ������ʹ򿪷�ʽ��r��Ϊֻ���ļ�
	//fopenҪ��ִ�гɹ�������һ���ļ�ָ�룬Ҫ��ִ��ʧ�ܣ�����NULL��ָ��
	if (pb == NULL)
	{
		printf("%s\n",strerror(errno));//errno,��¼��������Ĵ��󣬷��ش�����
		perror("fopen");
		return 1;
	}
	else
	{
		printf("�ҵ���\n");
	}
	//�ر��ļ�
	fclose(pb);
	//ָ���ÿ�
	pb = NULL;
	return 0;
}