#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int result = (a * b) % (c + d);

    printf("%d", result);
}
/**************************************************************
	Problem: 1028
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

