#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

int pyta(int m)
{
	int a, b, c;

	for (a = 1; a < m; a++)
	{
		for (b = a; b < m; b++)
		{
			c = (int)sqrt(a * a + b * b);

			if (a * a + b * b == c * c && a + b + c <= m)
				printf("%d^2 + %d^2 = %d^2\n", a, b, c);
		}
	}
	return 0;
}



int main()
{
	int t, m;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &m);

		pyta(m);

		if (i < t - 1)
			printf("\n");
	}

	return 0;
}
/**************************************************************
	Problem: 1171
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1136 kb
****************************************************************/

