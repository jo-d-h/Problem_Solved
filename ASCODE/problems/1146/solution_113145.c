#pragma warning (disable:4996)
#include<stdio.h>
#define PHI 3.14159265358979

int main()
{
    int d;
    scanf("%d", &d);

    double area = PHI * (d / 2.0) * (d / 2.0);

    printf("%.5f\n", area);

    return 0;
}
/**************************************************************
	Problem: 1146
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

