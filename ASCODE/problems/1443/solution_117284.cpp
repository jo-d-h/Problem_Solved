#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int t;
	scanf("%d", &t);
	
	for (int T = 0; T < t; T++)
	{
		int a, b;
		scanf("%d %d", &a, &b);

		if (b > a)
		{
			int tmp = b;
			b = a;
			a = tmp;
		}

		int max_n = 0;
		int max_m = 0;

		for (int i = b; i <= a; i++)
		{
			int m = 1;
			int q = i;

			while (q != 1)
			{
				if (q % 2 == 1)
				{
					q = 3 * q + 1;
					m++;
				}
				else
				{
					q /= 2;
					m++;
				}
			}

			if (m > max_n)
			{
				max_n = m;
				max_m = i;
			}
		}

		printf("%d %d\n", max_m, max_n);
	}
}
/**************************************************************
	Problem: 1443
	Language: C++
	Result: Accepted
	Time:108 ms
	Memory:1120 kb
****************************************************************/

