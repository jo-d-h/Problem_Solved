#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int m;
	scanf("%d", &m);

	for (int i = 1; i <= m; i++)
	{
		for (int j = i; j <= m; j++)
		{
			for (int k = j; k <= m; k++)
			{
				if (i * i + j * j == k * k)
				{
					printf("%d, %d, %d\n", i, j, k);
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
	Time:155 ms
	Memory:1120 kb
****************************************************************/

