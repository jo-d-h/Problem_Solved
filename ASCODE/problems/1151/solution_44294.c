#pragma warning(disable:4996)
#include <stdio.h>
double FtoC(double temp_f);

int main(void)
{
	double c, f;
	scanf("%lf", &f);
	c = FtoC(f);
	printf("%.2lf\n", c);
	return 0;
}

double FtoC(double temp_f)
{
	double temp_c;
	temp_c = (5.0 * (temp_f - 32.0)) / 9.0;
	return temp_c;
}
/**************************************************************
	Problem: 1151
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

