#define _CRT_SECURE_NO_WARNINGS 1
static int a, b;
static int curFactor;
void CalcCommonFactorOf(int num1, int num2)
{
	a = num1;
	b = num2;
	curFactor = a > b ? b : a;
 }

int NextCommonFactor(void)
{
	if (a <= 0 || b < 0)
		return -1;
	while (curFactor > 0)
	{
		if (a % curFactor == 0 && b % curFactor == 0)
		{
			return curFactor--;
		}
		curFactor--;
	}
	return -1;
}

int Factors(int a, int b)
{
	int ret = 0;
	while (b > 0)
	{
		ret = a % b;
		a = b;
		b = ret;
	}
	return a;
}


double Pow(int x, int y)
{
	//if (x <= 0 )
	//	return 0;
	//else if (x == 1 || y==0)
	//	return 1;
	//else
	//	return x * Pow(x, y - 1);
	if (y == 0)
		return 1;
	if (y < 0)
		return 1.0/(x * Pow(x, (-y) - 1));
	return x * Pow(x, y - 1);

}