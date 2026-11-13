#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) 
{
	return (*(int*)a - *(int*)b);
}

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int n;
		int price[101];

		scanf("%d", &n);

		for (int j = 0; j < n; j++)
		{
			scanf("%d", &price[j]);
		}

		qsort(price, n, sizeof(int), compare);

		int sum = 0;

		for (int j = n - 5; j < n; j++)
		{
			sum += price[j];
		}

		printf("%.1f\n", (double)sum / 5);

	}
	return 0;
}

/**************************************************************
	Problem: 1276
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

