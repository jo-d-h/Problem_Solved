#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>
int main(void)
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		int a;
		scanf("%d", &a);

		double area = (sqrt(3.0) / 4.0) * pow(a, 2.0);

		printf("%.5lf\n", area);
	}

	return 0;
}
/**************************************************************
	Problem: 1207
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

