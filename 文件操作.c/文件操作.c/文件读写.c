#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//���ļ�

//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//
//int main()
//{
//	FILE* p = fopen("E:\\dev\\code\\test.txt", "r");
//	if (p == NULL)
//	{
//		perror("file:");
//		return 1;
//	}
//	//д��
//	/*int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		fputc('c', p);
//	}*/
//
//	//��ȡ�ַ�
//	//�����Ҫ��ȡ�ַ������뽫�ļ��Ĵ򿪷�ʽ�ı�
//	/*int ch = fgetc(p);
//	printf("%c\n", ch);*/
//
//
//	//дһ������
//	//fputs("hello bit!", p);
//	//������ļ�����ֻд����ʱ���Ὣ�ļ�ǰ��д��Ķ������
//	//�����������ļ���Ҫѡ��a��,�������ݺ���׷��
//
//
//	//��ȡһ������
//	char arr[20];
//	fgets(arr, 20, p);
//	printf("%s", arr);
//	//����ȡhelloʱ��ֻ��ȡ5���ֽڣ���ΪҪ��ֹ���У�fgets������һ����\0��,
//	//��ȡʧ�ܷ���NULLָ��
//
//
//	/*fputc('c', p);*/
//	//�ر��ļ�
//	fclose(p);
//	p = NULL;
//	return 0;
//}


//��ʽ�����뺯��
// fscanf
//��ʽ���������
//fprintf
//


//#include<stdio.h>
//
//struct peo
//{
//	char arr[20];
//	int age;
//	char tele[12];
//};
//
//int main()
//{
//	FILE* p = fopen("E:\\dev\\code\\test.txt", "w");
//	//���
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	
//	struct peo p1 = { "zhangsan",21,"1314" };
//	//д�ļ�,����ָ����ʽ
//	fprintf(p,"%s  %d  %s\n", p1.arr, p1.age, p1.tele);
//
//
//	//�ر�
//	fclose(p);
//	return 0;
//}


//#include<stdio.h>
//
//struct peo
//{
//	char arr[20];
//	int age;
//	char tele[12];
//};
//
//int main()
//{
//	FILE* p = fopen("E:\\dev\\code\\test.txt", "r");
//	//���
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	struct peo p1 = { 0 };
//	//���ļ�
//	fscanf(p, "%s  %d  %s\n", p1.arr, &(p1.age), p1.tele);
//	printf("%s  %d  %s\n", p1.arr,p1.age, p1.tele);
//
//
//	//�ر�
//	fclose(p);
//	return 0;
//}


//Ϊʲôд������fprintf����������fscanf
//��ʵ��û�з��������������ڴ��е�����Ϊ��һ�˳ƣ����ڴ��е����ݴ�ӡ���ļ����治����fprintf
//�����ݾ��ǰ��ļ������ݣ���ȡ���ڴ��м������ǿ�������fscanf


//ÿ������c���Գ���ʱ��ϵͳ��Ĭ�ϴ�������
//FILE* stdin   -- ��׼������
//FILE* stdout --��׼�����
//FILE* stderr  --��׼������

//�����������Ļ����ϣ����������л�����c���Բ���
//��fprintf�������κ�������������������Դ�ӡ��Ϣ���ļ��������Դ�ӡ��Ϣ����Ļ


//#include<stdio.h>
//
//struct peo
//{
//	char arr[20];
//	int age;
//	char tele[12];
//};
//
//int main()
//{
//	FILE* p = fopen("E:\\dev\\code\\test.txt", "w");
//	//���
//	if (p == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	struct peo p1 = { "zhangsan",21,"1314" };
//	//��ӡ���ļ�
//	//fprintf(p, "%s  %d  %s\n", p1.arr, p1.age, p1.tele);
//	//��ӡ����Ļ
//	fprintf(stdout, "%s  %d  %s\n", p1.arr, p1.age, p1.tele);
//
//
//	//�ر�
//	fclose(p);
//	return 0;
//}



//������Щ����ȫ�����ǿ��Զ�����������������������
//������������������ֻ�ܹ����ļ����в���

//#include<stdio.h>
//
//struct S
//{
//	char name[20];
//	int age;
//	char tele[12];
//};
//
//int main()
//{
//	struct S s = {"zhangsan",54,"5465"};
//	//�Զ����Ƶ���ʽд���ļ�
//	FILE* p =fopen("E:\\dev\\code\\test.txt", "wb");//wb�����Ƶ�write
//
//	//д���ļ�
//	fprintf(p, "%s  %d  %s", s.name, s.age, s.tele);
//
//	//�����Ʒ�ʽд
//	fwrite(&s ,sizeof(struct S), 1, p);
//	
//
//	//�ر�
//	fclose(p);
//	p = NULL;
//	return;
//}


//scanf����Ա�׼����ĸ�ʽ���������
//printf����Ա�׼����ĸ�ʽ��������
// 
// fscanf����������������ĸ�ʽ���������
// fprintf���������������ĸ�ʽ��������
// 
// sscanf���������ֻ����ַ���
// sscanf�Ǵ�һ���ַ�����ת����һ����ʽ��������
// sprintf�ǰ�һ����ʽ��������ת�����ַ�
//