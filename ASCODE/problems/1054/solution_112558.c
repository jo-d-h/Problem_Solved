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

		//첫줄
		for (int i = 0; i < x; i++)
		{
			printf("*");
		}

		printf("\n");

		//중간줄
		for (int i = 1; i < y - 1; i++) 
		{
			printf("*");
			for (int j = 1; j < x - 1; j++) 
			{
				printf(" ");
			}
			if (x > 1) 
			{
				printf("*");
			}
			printf("\n");
		}

		//마지막줄
		if (y > 1)
		{
			for (int i = 0; i < x; i++)
			{
				printf("*");
			}
			printf("\n");
		}

	}
	return 0;
}
/**************************************************************
	Problem: 1054
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

