#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<assert.h>
//my_strlen函数实现
int my_strlen( const char* src)//源头库不能改变
{
	assert(src != NULL);//如果src为空指针，报警
	int count = 0;
	while (*src++ != '\0')
	{
		
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "hellowhe494566";
	
	printf("%d", my_strlen(arr));
	return 0;
}
