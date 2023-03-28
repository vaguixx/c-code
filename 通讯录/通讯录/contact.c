#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include"contact.h"

//�˵�ʵ��

void menu()
{
	printf("**********��ӭʹ��ͨѶ¼*********\n");
	printf("********1.add       2.del********\n");
	printf("******3.search    4.modify*******\n");
	printf("*******5.sort      6.print*******\n");
	printf("**************0.exit*************\n");
	printf("*********************************\n");
	printf("***********��ѡ��ѡ��***********\n");
}


//��ʼ��ͨѶ¼����
void initcontact(contact* pc)
{
	//��ʼ��sz
	pc->sz = 0;
	//��ʼ����������,ʹ��memset����ʼ��data��һ��Ƭ�ռ������
	memset(pc->data, 0, sizeof(pc->data));
	//�����棬pc��ָ��ͨѶ¼��ָ�룬pc->data,�൱��������data�������ڣ���ʱָ������������ĵ�ַ��
	//���Կ���ֱ����sizeof������������Ĵ�С
	
}


//ͨѶ¼��Ӻ���ʵ��
void addcontact(contact* pc)
{
	//ͨѶ¼������Ԫ�أ�data sz
	//ͨѶ¼����
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼����\n");
		return;
	}
	//ͨѶ¼δ��
	printf("����������->\n");
	//�ҳ�������sz�±��λ�ã��������
	scanf("%s", pc->data[pc->sz].name);
	printf("�������ձ�->\n");
	scanf("%s", pc->data[pc->sz].sex);
	printf("����������->\n");
	scanf("%d", &(pc->data[pc->sz].age));
	//name,sex,tele,addr������������ʽ�����ģ�Ҳ����˵��Щname,sex,tele,addr�����������������е�ַ����
	//��age�������α�������ʽ�����ģ�����Ҫ&���ܹ�����
	printf("������绰����->\n");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ->\n");
	scanf("%s", pc->data[pc->sz].addr);
	//����꣬sz����
	pc->sz++;

	//������
	printf("��ӳɹ�\n");
}


//��ӡͨѶ¼����ʵ��
void printcontact(const contact* pc)
{
	
		assert(pc);
		printf("%-15s %-5s %-5s %-12s %-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		for (int i = 0; i < pc->sz; i++)
		{
			printf("%-15s %-5s %-5d %-12s %-30s\n", 
				pc->data[i].name, 
				pc->data[i].sex,
				pc->data[i].age, 
				pc->data[i].tele, 
				pc->data[i].addr);
		}

}


void delcontact(contact* pc)
{
	char name[max_name] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ��\n");
			return;
	}
	
	printf("������Ҫ���ҵ���\n");
	scanf("%s", &name);
	//1.����Ҫɾ������
	int pos = findbyname(pc,name);//�з���1��û�з���-1
	if (pos == -1)
	{
		printf("���޴���\n");
		return;
	}
	//ɾ��
	int i = 0;
	for (i = pos; i < pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}


}


//���Һ���ʵ��
static int findbyname(contact* pc, char* name[max_name])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return 1;
		}
		
	}
	return -1;
}
	


void modifycontact(contact* pc)
{
	//����Ҫ���ҵ��˵�����
	char name[max_name];
	printf("������Ҫ�޸ĵ��˵�����\n");
	scanf("%s", &name);
	int pos = findbyname(pc, name);//�з���1��û�з���-1
	if (pos == -1)
	{
		printf("���޴���\n");
		return;
	}
	else
	{
		printf("����������->\n");
		scanf("%s", pc->data[pos].name);
		printf("�������ձ�->\n");
		scanf("%s", pc->data[pos].sex);
		printf("����������->\n");
		scanf("%d", &(pc->data[pos].age));
		printf("������绰����->\n");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ->\n");
		scanf("%s", pc->data[pos].addr);
	}
}


//������ʵ��
void sortcontact(contact* pc)
{
	
		int i = 0;
		int j = 0;
		int flag = 0;
		assert(pc);
		for (i = 0; i < pc->sz - 1; i++)
		{
			for (j = 0; j < pc->sz - i - 1; j++)
			{
				if (strcmp(pc->data[j].name, pc->data[j + 1].name) > 0)
				{
					peoinfo tmp = pc->data[j];
					pc->data[j] = pc->data[j + 1];
					pc->data[j + 1] = tmp;
					flag = 1;
				}
			}
			if (flag == 0)
				break;
		}
		printf("SORT SUCCESS!\n");
}


//���Һ���ʵ��
void searchcontact(const contact* pc)
{
	int ret = 0;
	assert(pc);
	ret = Find_Peoinfo(pc);
	if (ret == -1)
	{
		printf("SEARCH FAILURE, CAN'T FIND!\n");
	}
	else
	{
		printf("%10s %5s %5s %15s %25s\n", "Name", "Sex", "Age", "Tele", "Addr");
		printf("%10s %5s %5d %15s %25s\n", pc->data[ret].name, pc->data[ret].sex, pc->data[ret].age, pc->data[ret].tele, pc->data[ret].addr);
	}
}