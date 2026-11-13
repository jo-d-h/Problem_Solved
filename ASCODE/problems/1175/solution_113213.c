#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int sum = 0;

    for (int i = m; i <= n; i++)
    {
        if (i % 7 == 0)
            sum += i;
    }

    printf("%d\n", sum);

    return 0;
}
/**************************************************************
	Problem: 1175
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

