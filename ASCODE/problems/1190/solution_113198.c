#pragma warning (disable:4996)
#include<stdio.h>
#include <ctype.h>

int main()
{
    float d, u, h;
    float area;
    scanf("%f %f %f", &d, &u, &h);

    area = (d + u) * h / 2;

    printf("%d", (int)area);


    return 0;
}
/**************************************************************
	Problem: 1190
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

