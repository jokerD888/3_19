#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"cmnfctr.h"
//5.12���һ��ģ��cmnfctr, ����������������������й�Լ����CalcCommonFactaorOf()�����趨���������������
//Ȼ��ÿ����һ��NexCommonFactor()�õ�һ����Լ���� ���մӴ�С��˳������������涨�Ĵ�����ô�ģ�顣

//int main(void)
//{
//	int sub;
//	CalcCommonFactorOf(100, 50);
//	while ((sub = NextCommonFactor()) > 0)
//	{
//		static int counter = 1;
//		printf("Common factor %d is %d\n", counter++, sub);
//	}
//	return 0;
//}


//�ݹ������Լ��ֵ
//int main(void)
//{
//	int ret = Factors(100, 50);
//	printf("%d\n", ret);
//	return 0;
//}

//�ݹ���x��y�η�
int main(void)
{
	int x = 0;
	int y = 0;
	scanf("%d%d", &x, &y);
	double ret = Pow(x, y);
	printf("%f\n", ret);
	return 0;
}



