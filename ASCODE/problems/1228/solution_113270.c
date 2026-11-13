#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		int n, m;
		long long sum = 0;
		scanf("%d %d", &n, &m);

		for (int i = n; i <= m; i++)
		{
			sum += i;
		}

		printf("%lld\n", sum);
	}

	return 0;
}

/**************************************************************
	Problem: 1228
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

