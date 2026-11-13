#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		int x, y;
		scanf("%d %d", &x, &y);

		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < x; j++)
			{
				printf("*");
			}
			printf("\n");
		}


	}
	return 0;
}
/**************************************************************
	Problem: 1053
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

