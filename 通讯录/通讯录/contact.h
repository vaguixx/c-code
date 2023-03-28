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


//菜单申明
void menu();

//对于通讯录，首先需要存储人的信息，人的信息用结构体存储
//但是直接给数值，不便于修改和后期维护
typedef struct peoinfo
{
	char name[max_name];
	char sex[max_sex];//male,female,screct
	int age;
	char tele[max_tele];//电话
	char addr[max_addr];//地址

}peoinfo;



//通讯录结构体

 typedef struct contact
{
	peoinfo data[MAX];//人
	int sz;//计数器，用于判断和找到数据crul的位置
}contact;


 //初始化通讯录声明
 void initcontact(contact* pc);

 //通讯录添加申明
 void addcontact(contact* pc);

 //打印通讯录函数申明
 void printcontact(const contact* pc);

 //删除函数申明
 void delcontact(contact* pc);

 //查找函数
 int findbyname(contact* pc, char* name[max_name]);

 //修改函数实现
 void modifycontact(contact* pc);

 //排序函数实现
 void sortcontact(contact* pc);

 //查找函数实现
 void findcontact(const contact* pc);