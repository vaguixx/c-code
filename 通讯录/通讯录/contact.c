#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include"contact.h"

//菜单实现

void menu()
{
	printf("**********欢迎使用通讯录*********\n");
	printf("********1.add       2.del********\n");
	printf("******3.search    4.modify*******\n");
	printf("*******5.sort      6.print*******\n");
	printf("**************0.exit*************\n");
	printf("*********************************\n");
	printf("***********请选择选项***********\n");
}


//初始化通讯录函数
void initcontact(contact* pc)
{
	//初始化sz
	pc->sz = 0;
	//初始化整个数组,使用memset，初始化data这一整片空间的数据
	memset(pc->data, 0, sizeof(pc->data));
	//在上面，pc是指向通讯录的指针，pc->data,相当于数组名data单独存在，此时指的是整个数组的地址，
	//所以可以直接用sizeof计算整个数组的大小
	
}


//通讯录添加函数实现
void addcontact(contact* pc)
{
	//通讯录中两个元素，data sz
	//通讯录已满
	if (pc->sz == MAX)
	{
		printf("通讯录已满\n");
		return;
	}
	//通讯录未满
	printf("请输入姓名->\n");
	//找出数组中sz下标的位置，进行添加
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入姓别->\n");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入年龄->\n");
	scanf("%d", &(pc->data[pc->sz].age));
	//name,sex,tele,addr都是以数组形式创建的，也就是说这些name,sex,tele,addr，都是数组名，具有地址属性
	//而age是以整形变量的形式创建的，是需要&才能够输入
	printf("请输入电话号码->\n");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址->\n");
	scanf("%s", pc->data[pc->sz].addr);
	//添加完，sz后移
	pc->sz++;

	//添加完成
	printf("添加成功\n");
}


//打印通讯录函数实现
void printcontact(const contact* pc)
{
	
		assert(pc);
		printf("%-15s %-5s %-5s %-12s %-30s\n", "姓名", "性别", "年龄", "电话", "地址");
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
		printf("通讯录为空，无需删除\n");
			return;
	}
	
	printf("请输入要查找的人\n");
	scanf("%s", &name);
	//1.查找要删除的人
	int pos = findbyname(pc,name);//有返回1，没有返回-1
	if (pos == -1)
	{
		printf("查无此人\n");
		return;
	}
	//删除
	int i = 0;
	for (i = pos; i < pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}


}


//查找函数实现
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
	//输入要查找的人的名字
	char name[max_name];
	printf("请输入要修改的人的名字\n");
	scanf("%s", &name);
	int pos = findbyname(pc, name);//有返回1，没有返回-1
	if (pos == -1)
	{
		printf("查无此人\n");
		return;
	}
	else
	{
		printf("请输入姓名->\n");
		scanf("%s", pc->data[pos].name);
		printf("请输入姓别->\n");
		scanf("%s", pc->data[pos].sex);
		printf("请输入年龄->\n");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入电话号码->\n");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址->\n");
		scanf("%s", pc->data[pos].addr);
	}
}


//排序函数实现
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


//查找函数实现
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