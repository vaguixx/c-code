#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


#include"contact.h"

//用于生成界面和简单测试

//定义一个选项枚举
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
	//初始界面
	int input = 0;
	do
	{
		//生成菜单
		menu();



		//创建一人的结构体，用数组的形式创建，就是data这个数组能装1000个人结构体数据
		peoinfo data[MAX];


		//当通讯录存储数据的时候不仅要创建这个通讯录，还必须要知道通讯录当前有几个元素
		//不然怎么判断，已满，未满，添加位置，也就是说通讯录不仅要有人（peoinfo）,还要有计数器（sz)
		//创建通讯录
		contact con;

		//初始化通讯录
		initcontact(&con);



		//选择选项
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//增加函数
			addcontact(&con);
			break;
		case DEL:
			//删除函数
			delcontact(&con);
			break;
		case MODIFY:
			//修改函数
			modifycontact(&con);
			break;
		case SEARCH:
			//查找函数实现
			searchcontact(&con);
			break;
		case PRINT:
			//打印当前通讯录信息
			printcontact(&con);
			break;
		case SORT:
			//排序通讯录
			sortcontact(&con);
			break;
		case EXIT :
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}