#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		int n;
		scanf("%d", &n);

		int arr[101];

		for (int N = 0; N < n; N++)
		{
			scanf("%d", &arr[N]);
		}

		int m, count = 0;
		scanf("%d", &m);

		for (int i = 0; i < n; i++)
		{
			if (arr[i] == m)
				count++;
		}

		if (count > 0)
			printf("%d\n", count);
		else
			printf("None\n");
	}
}
/**************************************************************
	Problem: 1113
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

