#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		char m[32];
		int b;
		scanf("%s %d", m, &b);

		int len = strlen(m);
		long long result = 0;

		for (int j = 0; j < len; j++)
		{
			char c = m[j];
			int su;

			if (c >= '0' && c <= '9')
				su = c - '0';
			else
				su = c - 'A' + 10;

			result = result * b + su;
		}

		printf("%lld\n", result);
	}

	return 0;
}
/**************************************************************
	Problem: 1383
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

