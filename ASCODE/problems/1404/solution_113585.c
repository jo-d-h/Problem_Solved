#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
    int count = 0;
    int k, l, m, n, d;

    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);

    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0)
            count++;
        else if (i % l == 0)
            count++;
        else if (i % m == 0)
            count++;
        else if (i % n == 0)
            count++;
    }

    printf("%d\n", count);

    return 0;
}
/**************************************************************
	Problem: 1404
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

