#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"cmnfctr.h"
//5.12设计一个模块cmnfctr, 计算给定的两个整数的所有公约数。CalcCommonFactaorOf()用来设定被算的两个整数，
//然后每调用一次NexCommonFactor()得到一个公约数， 按照从大到小的顺序给出。用下面定的代码调用此模块。

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


//递归求最大公约数值
//int main(void)
//{
//	int ret = Factors(100, 50);
//	printf("%d\n", ret);
//	return 0;
//}

//递归求x得y次方
int main(void)
{
	int x = 0;
	int y = 0;
	scanf("%d%d", &x, &y);
	double ret = Pow(x, y);
	printf("%f\n", ret);
	return 0;
}



