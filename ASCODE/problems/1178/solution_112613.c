#include <stdio.h>

long long f(long long n)
{
    if (n <= 1)
        return 1;
    else
        return n * f(n - 1);
}

int main()
{
    long long n;
    scanf("%lld", &n);

    printf("%lld", f(n));
}
/**************************************************************
	Problem: 1178
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

