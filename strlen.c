#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<assert.h>
//my_strlen����ʵ��
int my_strlen( const char* src)//Դͷ�ⲻ�ܸı�
{
	assert(src != NULL);//���srcΪ��ָ�룬����
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
