#include <stdio.h>
#pragma warning(disable:4996)

long long factorial(long long n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    long long n;
    scanf("%lld", &n);

    printf("%lld", factorial(n));
}
/**************************************************************
	Problem: 1178
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

