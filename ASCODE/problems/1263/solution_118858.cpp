#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

int main()
{
	const int MAX = 3000;
	int iInput[MAX], iDiff[MAX];

	int n;

	while ((scanf("%d", &n)) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &iInput[i]);
		}

		for (int i = 0; i < n; i++)
		{
			iDiff[i] = 0;
		}

		for (int i = 0; i < n; i++)
		{
			int diff = iInput[i] - iInput[i + 1];

			if (diff < 0)
			{
				diff = -diff;
			}

			if (diff >= 1 && diff <= n - 1)
			{
				iDiff[diff] = 1;
			}
		}

		int is_jolly = 1;

		for (int i = 1; i < n; i++)
		{
			if (iDiff[i] == 0)
			{
				is_jolly = 0;
				break;
			}
		}

		if (is_jolly)
		{
			printf("Jolly\n");
		}
		else
		{
			printf("Not jolly\n");
		}

	}


	return 0;
}
/**************************************************************
	Problem: 1263
	Language: C++
	Result: Accepted
	Time:6 ms
	Memory:1120 kb
****************************************************************/

