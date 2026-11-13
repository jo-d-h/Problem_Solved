#include <stdio.h>
#pragma warning(disable:4996)

int main() 
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double x = -b / (2 * a);

    printf("%.4f\n", x);

}
/**************************************************************
	Problem: 1491
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

