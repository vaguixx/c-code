#include <stdio.h>

int main() {
	char ch = getchar();//getchar只能得到一个字符，
	//putchar作用和printf打印字符一模一样，但是简洁
	putchar(ch);//getchar 里面输入一个ctrl + z就会往里面填入一个EOF ,即end of file
	            //文件结束标志，EOF == -1
	printf("%c", ch);









	//int i = 1;
	//while (i <= 10) {//break的作用是直接跳出循环
	//contiune的作用是跳过本次循环直接返回到while判断
	//	if (5 == i)
	//continue;break;
	//	printf("%d\n", i);
	//	i++;
	//}




	//while (i <= 10) {
	//	printf("%d\n", i);
	//	i++;
	//}









	return 0;
}