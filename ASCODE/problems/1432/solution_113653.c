#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int m;
	scanf("%d", &m);

	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			for (int k = 1; k <= m; k++)
			{
				if (i * i + j * j == k * k)
				{
					if (i < j && j < k)
					{
						printf("%d, %d, %d\n", i, j, k);

					}
					break;
				}
			}
		}
	}
}
/**************************************************************
	Problem: 1432
	Language: C
	Result: Accepted
	Time:822 ms
	Memory:1120 kb
****************************************************************/

