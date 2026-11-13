#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int prize = 0;
    int avg;

    if (a == b && b == c)
        prize = 50000 + a * 2000;

    else if (a == b)
        prize = 10000 + a * 2000;
    else if (c == b)
        prize = 10000 + b * 2000;
    else if (c == a)
        prize = 10000 + c * 2000;

    else
    {
        if (a > b)
        {
            int tmp = b;
            b = a;
            a = tmp;
        }
        if (b > c)
        {
            int tmp = c;
            c = b;
            b = tmp;
        }
        if (a > b)
        {
            int tmp = b;
            b = a;
            a = tmp;
        }

        prize = (b + c) / 2 * 500;
    }

    printf("%d\n", prize);

    return 0;
}
/**************************************************************
	Problem: 1368
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

