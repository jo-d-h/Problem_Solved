#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

int main(void)
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);

		int d = pow(b, 2) - 4 * a * c;

		if (a == 0)
			printf("No quadratic\n");

		else if (d > 0)
		{
			float x1 = (-b + sqrt(pow(b, 2) - 4 * (a * c))) / (2 * a);
			float x2 = (-b - sqrt(pow(b, 2) - 4 * (a * c))) / (2 * a);

			if (x1 > x2)
				printf("%.3lf %.3lf\n", x1, x2);
			else
				printf("%.3lf %.3lf\n", x2, x1);
		}

		else if (d == 0)
		{
			float x = -b / (2 * a);

			printf("%.3lf\n", x);
		}

		else if (d < 0)
			printf("Imaginary\n");
	}

	return 0;
}
/**************************************************************
	Problem: 1208
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1136 kb
****************************************************************/

