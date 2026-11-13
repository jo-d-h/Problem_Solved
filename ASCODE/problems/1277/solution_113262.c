#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		long long n;
		scanf("%lld", &n);

		if (n < 0 || n > 30)
			printf("Impossible\n");
		else 
		{
			printf("%lld\n",(long long)pow(2, n));

		}
	}
	return 0;
}

/**************************************************************
	Problem: 1277
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1308 kb
****************************************************************/

