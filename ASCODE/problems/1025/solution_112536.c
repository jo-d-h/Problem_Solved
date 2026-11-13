#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    double area;
    area = (double)x * y / 2;
    printf("%.1lf", area);

    return 0;
}
/**************************************************************
	Problem: 1025
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

