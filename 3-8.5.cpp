//for循环
#include <stdio.h>

//第一，不要在for循环循环体内改变循环值，容易死循环
//第二，一般将循环变量的范围写成  前闭后开区间
int main() {
	//int i = 0;
	//for (i = 1; i <= 10; i++) {
	//	printf("%d\n", i);
	//}

//for循环变种
//1.for循环的初始化，判断条件，循环量改变都可以省略
//一旦省略，即可看作括号内部恒为真
//2.
	//int x = 0;
	//int y = 0;
	//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) {
	//	printf("hehe\n");
	//}
//do while循环
//	int i = 1;
//	do {
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);

//n的阶乘
//n！=1*2*3*。。。。n
	//int n = 1;
	//int i = 1;
	//int rem = 1;
	//printf("请输入n的值\n");
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++) {
	//	rem = i * rem;
	//}
	//printf("n的阶乘rem是%d\n", rem);

//计算1！+2！+3！++++++10!
	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//int sum = 0;
	//for (n = 1; n <= 3; n++) {         //n=1;i=1;n=i;ret=1*1=1;sum=0+ret=1
	//	for (i = 1; i <= n; i++) {		//n=2;i=1;i<n;ret=1*1=1;
	//		ret = i * ret;				//    i=2;i=n;ret=(1*1)*2=2;sum=ret+1=3
	//	}								//n=3;i=1;i<n;ret=(1*1*2)*1=2;
	//    i=2;i<n;ret=(1*1*2*1)*2=4;
	//	sum = sum + ret;				//    i=3;i=n;ret=(1*1*2*1*2)*3=12;sum=3+12=15
	//}									//该算法最大的错误就是当第二遍循环时ret的值已经改变
	//printf("%d\n", sum);				//而里面求阶乘的算法一直都是默认ret为1


	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//int sum = 0;
	//for (n = 1; n <= 3; n++) {         //知道了上面的错误之后更改算法，加入初始化ret的值
	//	ret = 1;							//那么问题又出现了，为什么一定要加到内层循环外面；
	//	for (i = 1; i <= n; i++) {		//而不是在使用ret之前直接初始化
	//		ret = i * ret;				//因为ret在第二层循环时ret=2，继续循环强行改变成1了
	//	}
	//	sum = sum + ret;
	//}
	//printf("%d\n", sum);
//上述求阶乘和算法优化
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	n = 10;
	for (i = 1; i <= n; i++) {//上述算法每算一次阶乘就会重新从1*到n
		ret = ret * i;        //这样浪费太多资源，而n！=（n-1）*n
		sum = ret + sum;      //1！+2！+3！+4!=1!+1!*2+2!*3+3!*4;
	}

	printf("%d\n", sum);





	return 0;
}

