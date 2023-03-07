#include <stdio.h>
#include <string.h>
#define max 10

enum SEX {
	MALE,
	FEMALE,
	SECRET
};

int main() {
	printf("%d\n", strlen("c:\test\32\test.c"));


	//每个字符串末尾都会默认有“\0”，\0是字符串结束的标志，若没有结束标志/0，则打印乱码
	//\t为水平制表符，作用类似与键盘table键
	//想要打印\可以在前面加上一个\来取消\的意思，例如想打印\n可以用\\n来打印





	//枚举语法,其中MALE,FEMALE,SECRET 被称为枚举常量
	//enum SEX s = MALE;
	//enum SEX a = FEMALE;
	//enum SEX b = SECRET;



	//int a, sum;
	//a = 10;
	//sum = a + max;
	//printf("%d", sum);





	//const int n = 10;//n确实是变量，但是具有常属性
	//int arr[n] = {0};





	//const int num = 4;//const赋值的变量不可改变，为只读常量
	//printf("%d\n", num);
	//num = 8;
	//printf("%d\n", num);
	return 0;
}