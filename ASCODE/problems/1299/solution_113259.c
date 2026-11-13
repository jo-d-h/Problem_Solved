#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        printf("%d %d\n", a * c - b * d, a * d + b * c);
    }
}
/**************************************************************
	Problem: 1299
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

