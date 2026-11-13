#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		int n;
		scanf("%d", &n);

		for (int i = 1; i <= n; i++)
		{
			int width = 2 * i;

			for (int j = 0; j < 2; j++)
			{
				for (int k = 0; k < width; k++)
				{
					printf("#");
				}

				printf("\n");
			}
		}

		if (t != T - 1) 
		{
			printf("\n");
		}
	}
}
/**************************************************************
	Problem: 1086
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

