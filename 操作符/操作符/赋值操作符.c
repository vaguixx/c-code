#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//赋值操作符
//直接赋值操作符‘=’
//间接赋值操作符‘+=’，‘-=’，‘*=’，‘/=’，‘>>=’,  '<<='  ,  '&='   ,  '  |='   ,'^='
//     '   %=   '
//每一个操作符的展开形式都差不多
//a= a+b  完全等价  a+=b
//a= a-b  完全等价   a-=b
//a= a*b  完全等价   a*=b
//a= a/b  完全等价  a/=b
//a= a&b  完全等价  a&=b
//a= a|b  完全等价  a|=b
//a= a^b  完全等价  a^=b
//a= a>>b  完全等价  a>>=b
//a= a<<b  完全等价  a<<=b
//a= a%b  完全等价  a%=b

//最值得注意的点的是’=‘是赋值  ，’==‘是判断