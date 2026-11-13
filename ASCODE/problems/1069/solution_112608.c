#include <stdio.h>
#pragma warning(disable:4996)

unsigned long long factorial(unsigned long long n)
{
    unsigned long long result = 1;

    for (unsigned long long i = n; i > 0; i--)
    {
        result *= i;
    }

    return result;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        unsigned long long n;
        scanf("%llu", &n);

        unsigned long long result = factorial(n);
        printf("%llu\n", result);
    }

    return 0;
}
/**************************************************************
	Problem: 1069
	Language: C
	Result: Accepted
	Time:1030 ms
	Memory:1120 kb
****************************************************************/

