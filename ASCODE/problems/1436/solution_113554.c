#include <stdio.h>
#include <ctype.h>
#pragma warning(disable:4996)

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", a % b);

    return 0;
}
/**************************************************************
	Problem: 1436
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

