#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
    int n;
    scanf("%d", &n);

    int result = 0;
    int x;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);

        result ^= x;
    }

    printf("%d\n", result);

    return 0;
}
/**************************************************************
	Problem: 1505
	Language: C
	Result: Accepted
	Time:662 ms
	Memory:1120 kb
****************************************************************/

