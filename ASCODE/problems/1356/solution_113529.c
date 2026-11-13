#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int a, b, c;
    double x;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%lf", &x);

    printf("y=%d*x*x+%d*x+%d\n", a, b, c);

    double y = (float)a * x * x + b * x + c;
    printf("%.9lf\n", y);

    return 0;
}
/**************************************************************
	Problem: 1356
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

