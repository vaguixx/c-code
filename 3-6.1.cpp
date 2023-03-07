#include <stdio.h>
//#define PAI 3.14//定义标识符常量
#define MAX(a,b) (a>b?a:b)//宏就是标识符常量定义后面换成表达式
int main()                //类似于函数的声明
{
	int a=100;
	return 0;
}









//int main() {
	//extern int g_val;//当static作用于全局变量时，改变了该值的作用域，静态全局变量只能
	                 //在自己所在源文件内部使用
	//printf("%d", g_val);//static修饰函数，改变了函数的连接属性
	//return 0;           //普通的函数具有外部连接属性，static修饰后，只能作用于当前源文件
//}











//void test() {
//static int a = 1;//static将a变成一个静态的局部变量
//a++;			//static修饰局部变量，局部变量的生命周期延长，可以简单理解为不再初始化
//printf("a=%d\n", a);
//}


//int main() {
//int i = 0;
//while (i < 5) {
//test();
//i++;
//}



//return 0;
//}