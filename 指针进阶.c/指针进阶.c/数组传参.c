#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


//int * pb[10];  这个代表的是，pb首先和[]结合，表示一个数组，再加上int*，
//符合数组定义  （数组元素类型）数组名[],即这句话表示一个数组，而数组里面放着的是int*型指针

//int (*pb)[10];这句话表示，一个数组指针叫pb,整个数组的元素是int型

//int  ( *pb[ 10 ] ) [ 5 ]，单独把pb[10]去除，int  ( *  x ) [ 5 ]，这个表达式为一个数组大小为5的数组指针，但是里面
//为pb[10]是一个数组，也就是说，这句话的意思是，一个储存大小为10的数组pb，存放了10个数组指针，这10个数组
//指针指向的是元素类型为int 型 ，大小为5的数组

//一维数组传参

//这里的重点是，你传了什么，用什么来接收这个数据，比如你传了一个数组，那么你是用另外一个数组来接收
// 还是用一个简单的首元素指针来接收，还是用数组指针来接收

//二维数组传参
//首先，二维数组在创建传参的时候，只能省略行，而不能省略列，可以不知道有多少行，但是不能不知到一行多少元素