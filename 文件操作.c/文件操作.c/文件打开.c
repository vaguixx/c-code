#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//�ļ�
//����������ͨѶ¼�ļ�ʱ������һ�����ͻᵼ��д������ݶ�ʧ
//�����ǵ�ʵ��д��c���Գ����Ƕ��ļ����ж�ȡ��д�����

//�ļ��ı��ʺʹ򿪲���
//ÿ����ʹ�õ��ļ�����ϵͳ�п�����һ���ļ���Ϣ�������ڴ���ļ�����Ӧ��Ϣ����Щ��Ϣ�Ǳ�����һ���ṹ��
//�����еģ�����ṹ����ϵͳ��������ΪFILE

//������ FILE����һ���ṹ��ָ���������ļ���Ϣ��

//#include<stdio.h>
//
//int main()
//{
//	FILE* PF;//�����ļ�ָ�����
//	return 0;
//}


//���ļ�����

//����fopen�����Դ�һ���ļ���ͬʱ����һ��FILE*��ָ��ָ����ļ���
//FILE * fopen(const char* filename, const char * mode)
//�ر��ļ�
//fclose����
// int fclose(FILE * stream)

//�ļ���

//#include<stdio.h>
//#include<errno.h>
//#include<string.h>
//int main()
//{
//	 FILE* p = fopen("test.txt", "r");//���ļ�test.txt,ֻ����read��
//	//����ļ���ʧ�ܻ᷵�ؿ�ָ��
//	 if (p == NULL)
//	 {
//		 printf("%s\n", strerror(errno));
//		 return 1;
//	 }
//	//fopen("test.txt", "w");//���ļ�test.txt,ֻд��write��
//
//	 //�򿪳ɹ����ر�
//	 fclose(p);
//	return 0;
//}

//�����뷴Ӧ����·���µ��ļ���ֻ��Ҫ���ļ���ǰ����Ӿ���·������
//FILE* p = fopen("/c/desktop/test.txt", "r");
//���ʱ��/��test.txt��t�γ���/t��Ӧʹ��//������
//FILE* p = fopen("c//desktop//test.txt", "r");

//"r",readֻ���ļ�������ļ������ڻ�����ؿ�ָ��
// 
//��w��,write ֻд�ļ�������ļ������ڻ��½�һ���ļ�
// 
//��a��,add ���ļ�β׷�����ݣ�����һ���µ��ļ�