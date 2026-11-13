#pragma warning (disable:4996)
#include<stdio.h>
#include <ctype.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int d = (b * b) - 4 * a * c;

        if (a == 0)
            printf("No quadratic\n");
        else if (d > 0)
            printf("Real\n");
        else if (d == 0)
            printf("%.3f\n", (double)(-b) / (2 * a));
        else if (d < 0)
            printf("Imaginary\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1193
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

