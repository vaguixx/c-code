#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


#include"contact.h"

//�������ɽ���ͼ򵥲���

//����һ��ѡ��ö��
enum option
{
	EXIT,//0
	ADD,
	DEL,
	MODIFY,
	SEARCH,
	SORT,
	PRINT
};
int main()
{
	//��ʼ����
	int input = 0;
	do
	{
		//���ɲ˵�
		menu();



		//����һ�˵Ľṹ�壬���������ʽ����������data���������װ1000���˽ṹ������
		peoinfo data[MAX];


		//��ͨѶ¼�洢���ݵ�ʱ�򲻽�Ҫ�������ͨѶ¼��������Ҫ֪��ͨѶ¼��ǰ�м���Ԫ��
		//��Ȼ��ô�жϣ�������δ�������λ�ã�Ҳ����˵ͨѶ¼����Ҫ���ˣ�peoinfo��,��Ҫ�м�������sz)
		//����ͨѶ¼
		contact con;

		//��ʼ��ͨѶ¼
		initcontact(&con);



		//ѡ��ѡ��
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//���Ӻ���
			addcontact(&con);
			break;
		case DEL:
			//ɾ������
			delcontact(&con);
			break;
		case MODIFY:
			//�޸ĺ���
			modifycontact(&con);
			break;
		case SEARCH:
			//���Һ���ʵ��
			searchcontact(&con);
			break;
		case PRINT:
			//��ӡ��ǰͨѶ¼��Ϣ
			printcontact(&con);
			break;
		case SORT:
			//����ͨѶ¼
			sortcontact(&con);
			break;
		case EXIT :
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}