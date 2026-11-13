#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		int x;
		scanf("%d", &x);

		for (int i = 1; i <= x; i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf("*");
			}
			printf("\n");
		}

	}
	return 0;
}
/**************************************************************
	Problem: 1055
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

