#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int divisor(int n)
{
    if (n == 2)
        return 1;

    if (n % 2 == 0)
        return 0;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int count = 0;

        for (int i = a; i <= b; i++)
        {
            if (divisor(i))
                count++;
        }
        printf("%d\n", count);
    }

    return 0;
}
/**************************************************************
	Problem: 1234
	Language: C
	Result: Accepted
	Time:6 ms
	Memory:1120 kb
****************************************************************/

