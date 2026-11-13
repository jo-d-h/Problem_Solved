#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		long long n, m;
		scanf("%lld %lld", &n, &m);

		long long count = m - n + 1;
		long long sum = (count * (n + m)) / 2;

		printf("%lld\n", sum);
	}

	return 0;
}

/**************************************************************
	Problem: 1229
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

