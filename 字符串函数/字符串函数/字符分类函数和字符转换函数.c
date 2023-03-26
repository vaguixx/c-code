#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

//字符分类函数
// 以下函数如果符合条件就返回真
// iscntrl函数     控制任何字符
// isspace函数   存在空白字符，换页‘\f’,换行‘\n’,回车‘\r’，制表符‘\t’，垂直制表符‘\v’
// isdigit函数      是否是数字字符（0~9）
// isxdigit函数     是否是16进制数，包括所有10进制数字，小写字母a~f,大写字母A~F
// islower函数     是否小写，小写字符（a~z)
// isupper函数     是否大写，大写字符（A~Z）
// isalpha函数     小写字符（a~z)大写字符（A~Z）
// isalnum函数      小写字符（a~z)大写字符（A~Z）数字字符（0~9）
// ispunct函数        标点符号，任何不属于字母和数字的图形字符
// isgraph函数       任何图形字符
// isprint函数        打印任何字符，包括空白字符和图形字符
// 
// 
// 
// 字符转换函数
// 
// tolower函数         字符大写转小写，小写不变
// toupper函数        字符小写转大写，大写不变
// 
//