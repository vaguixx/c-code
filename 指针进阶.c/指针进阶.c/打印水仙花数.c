#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
//��ӡˮ�ɻ���(1~100000)
//ˮ�ɻ������壬һ��nλ�������λ��n�η�֮�͵����䱾��
//���� 153 =1^3+5^3+3^3
//#include<stdio.h>
//#include<math.h>
//
//
//
//int main()
//{
//	//����0~100000����
//	int i = 0;
//	
//	for (i = 0; i <= 100000; i++)
//	{
//		//�жϸ�����λ��
//		int n = 1;
//		int ret = i;
//		while (ret/ 10)
//		{
//			n++;
//			ret /= 10;
//		}
//
//		//�ҳ�������ÿһλ�������ж��ǲ���ˮ�ɻ���
//		ret = i;
//		int sum = 0;
//		while (ret)
//		{
//			sum += pow(ret % 10,n);
//			ret /= 10;
//
//		}
//		if (sum == i)
//		{
//			printf("%d  ", sum);
//		}
//	}
	
//	return 0;
//}