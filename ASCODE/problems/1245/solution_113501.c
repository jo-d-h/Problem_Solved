#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);

		if (a + b > c && a + c > b && b + c > a)
		{
			double p = (a + b + c) / 2.0;
			double area = sqrt(p * (p - a) * (p - b) * (p - c));
			printf("%.10lf\n", area);
		}
		else
		{
			printf("No Triangle!\n");
		}
	}

	return 0;
}
/**************************************************************
	Problem: 1245
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1132 kb
****************************************************************/

