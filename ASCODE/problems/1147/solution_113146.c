#pragma warning (disable:4996)
#include<stdio.h>
#define PHI 3.14159265358979

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n%d\n%d\n%d\n%d\n%.1f\n", a + b, a - b, a * b, a / b, a % b, (float)a / b);

    return 0;
}
/**************************************************************
	Problem: 1147
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

