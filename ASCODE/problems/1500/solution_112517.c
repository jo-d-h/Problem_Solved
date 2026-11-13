#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		int x[4];

		for (int i = 0; i < 4; i++)
		{
			scanf("%d", &x[i]);
		}

		qsort(x, 4, sizeof(int), cmp);

		int a = x[3] - x[2];
		int b = x[3] - x[1];
		int c = x[3] - x[0];

		if (a > b) 
		{ 
			int tmp = a; 
			a = b; 
			b = tmp; 
		}
		if (a > c) 
		{ 
			int tmp = a; 
			a = c; 
			c = tmp; 
		}
		if (b > c) 
		{ 
			int tmp = b; 
			b = c; 
			c = tmp; 
		}

		printf("%d %d %d\n", a, b, c);
	}
}
/**************************************************************
	Problem: 1500
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

