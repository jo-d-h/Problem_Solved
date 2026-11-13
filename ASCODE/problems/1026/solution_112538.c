#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if ((b * b) - 4 * (a * c) > 0)
        printf("1");
    else
        printf("0");
}
/**************************************************************
	Problem: 1026
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

