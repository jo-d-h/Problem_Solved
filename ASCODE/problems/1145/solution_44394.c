#include <stdio.h>

double CtoF(double temp_c);

int main(void)

{
	double c, f;
	scanf("%lf", &c);
	f = CtoF(c);
	printf("%.lf\n", f);
	return 0;
}

double CtoF(double temp_c)

{
	double temp_f;
	temp_f = (9.0 / 5.0) * temp_c + 32;
	return temp_f;
}
/**************************************************************
	Problem: 1145
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

