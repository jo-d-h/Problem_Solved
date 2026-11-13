#include <stdio.h>
#pragma warning(disable:4996)

unsigned long long factorial(unsigned long long n)
{
	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}


int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		unsigned long long n;
		scanf("%llu", &n);

		printf("%llu\n", factorial(n));
	}

	return 0;
}
/**************************************************************
	Problem: 1068
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

