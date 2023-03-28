#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

#define max_name 20
#define max_sex 10
#define max_tele 12
#define max_addr 20

#define MAX 1000


//�˵�����
void menu();

//����ͨѶ¼��������Ҫ�洢�˵���Ϣ���˵���Ϣ�ýṹ��洢
//����ֱ�Ӹ���ֵ���������޸ĺͺ���ά��
typedef struct peoinfo
{
	char name[max_name];
	char sex[max_sex];//male,female,screct
	int age;
	char tele[max_tele];//�绰
	char addr[max_addr];//��ַ

}peoinfo;



//ͨѶ¼�ṹ��

 typedef struct contact
{
	peoinfo data[MAX];//��
	int sz;//�������������жϺ��ҵ�����crul��λ��
}contact;


 //��ʼ��ͨѶ¼����
 void initcontact(contact* pc);

 //ͨѶ¼�������
 void addcontact(contact* pc);

 //��ӡͨѶ¼��������
 void printcontact(const contact* pc);

 //ɾ����������
 void delcontact(contact* pc);

 //���Һ���
 int findbyname(contact* pc, char* name[max_name]);

 //�޸ĺ���ʵ��
 void modifycontact(contact* pc);

 //������ʵ��
 void sortcontact(contact* pc);

 //���Һ���ʵ��
 void findcontact(const contact* pc);