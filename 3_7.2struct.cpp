#include <stdio.h>
#include <string.h>

struct Book { //定义一个复杂的含有多种属性的个体用结构体
	char name[20];//结构体里面定义改个体拥有的元素
	char price;//结构体创建是一种类型的创建，是抽象的一类
	//还需要在函数里面实体化，具体成真实的一本书
};

int main() {
	struct Book a = {//将书类 实体化，具体到a这一本书
		//给里面具体值的过程也叫初始化
		"c语言程序设计",
		55
	};
	printf("书a的名字为%s\n", a.name);
	printf("书a的价格为%d\n", a.price);
	//可以直接在主函数访问公共的函数体数据，也可修改
	a.price = 20;
	printf("修改的书a的价格是%d\n", a.price);
	//指向单独元素的指针知道怎么定义了，指向结构体呢？
	struct Book *pb = &a;//给结构体一个指针
	printf("书a存放的地址为%p\n", pb);
	//通过结构体指针打印元素
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	printf("%s\n", pb->name );
	printf("%d\n", pb->price);
	//通过指针来改变结构体内部元素
	//pb->name = "cyuyan";首先name是数组名，数组名的本质是一个地址值不能随便修改
	//想要修改只能用string.h这个库里面的库函数strcpy来修改
	pb->price = 80;
	printf("%s\n", pb->name );
	printf("%d\n", pb->price);
	//修改a.name
	strcpy(a.name, "c++");
	printf("修改后书名为%s\n", pb->name);

	return 0;
}