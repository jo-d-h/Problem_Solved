#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    long long n;
    scanf("%lld", &n);

    if (n % 3 == 0)
        printf("multiple\n");
    else if (n % 3 == 1)
        printf("1 remains\n");
    else
        printf("2 remains\n");

    return 0;
}
/**************************************************************
	Problem: 1434
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

