#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int m, s;

    scanf("%d %d", &m, &s);

    int num = m / s;
    int remain = m % s;

    printf("%d\n%d\n", num, remain);

    return 0;
}
/**************************************************************
	Problem: 1355
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

