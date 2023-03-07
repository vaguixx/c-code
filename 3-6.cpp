#include <stdio.h>

int main() {
	int a = 0 ;
	int b = ~a;//"~"是按位取反的符号
	printf("%d", b);//对于b这个数值输出的就是-1
	//为什么b的输出值为-1；
	//计算机打印输出的一般为原码，而一个负数通常是由补码的形式存储在电脑中
	//原码，反码，补码的关系
	//补码=反码+1，反码=~原码
	//就有 a=0，即 a=00000000000000（原码）
	//              =11111111111111（反码）
	//              =10000000000001（补码）
	//第一个数字为符号位（0为+，1为负）
	//a++ 先使用a的值，然后a自增
	//++a 先a自增，再使用a加的值
	//条件操作符
	//exp1?exp2:exp3 如果exp1为真，那么exp2的值就是整个表达式的值
	//   如果exp2为假，那么exp3的值就是整个表达式的值

	return 0;
}