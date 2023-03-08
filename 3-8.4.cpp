//c语言中，0为假，非0都是真
//getchar 和scanf 理解,以一个简易的密码输入为例
#include <stdio.h>

int main() {
	int ch = 0;
	int ret = 0;
	//char password[20] = {0};
	//printf("请输入密码\n", password);
	//scanf("%s", &password);//首先，输入函数，你是输入东西到数据缓冲区，然后scanf和getchar
	//getchar();				//到数据缓冲区去获取所需要的数据，在输入scanf后，通常会回车，这个
	//printf("请确认\n");    //回车也会被存到数据缓冲区，只不过scanf不会读取回车，但是getchar会
	//ch = getchar();			//所以只有将数据缓冲区清除之后再输入，getchar就会得到需要的值
	//if (ch == 'Y')			//至于怎么样清除缓冲区，也是用getchar
	//	printf("已确认\n");     //另外，scanf最后一定是回车，一直清除到回车即可清除缓冲区
	//else if (ch == 'N')
	//	printf("未确认\n");



	//scanf("%s", &password);
	//while ((ret = getchar()) != '\n' ) //这句代码是整个清除数据缓冲区域的核心
	//{									//用getchar去数据缓冲区消除字符
	//将消除的字符给ret，如果ret不是回车，则一直消除
	//;								//以此来消除数据缓冲区域
	//}
	//printf("请确认");
	//ch = getchar();						//最后用getchar来获得想得到的信息
	//if (ch == 'Y')
	//printf("已确认\n");
	//else if (ch == 'N')
	//	printf("未确认\n");

	//简单的筛选字符的getchar应用
	printf("请输入一段含大小写和数字的字符串\n");
	while ((ch = getchar()) != EOF) {//利用while循环来获取字符串
		if ('0' > ch || ch > '9') {//在循环里面加上判断可以筛选字符并输出
			continue;
		} else {//那么问题来了！怎么筛选区分字母大小写，字符和数字；
			putchar(ch);
		}
//第一种，筛出字母，保留数字
//需要  ch<'A' && ch>'Z' || ch<'a' && ch>'z'
//第二种，区分大小写
	}








	return 0;
}