#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int d = (b * b) - 4 * (a * c);

    if (d > 0)
        printf("Real\n");
    else if (d == 0)
    {
        printf("%.2lf\n", -b / (2.0 * a));
    }
    else
        printf("Imaginary\n");

    return 0;
}
/**************************************************************
	Problem: 1369
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

