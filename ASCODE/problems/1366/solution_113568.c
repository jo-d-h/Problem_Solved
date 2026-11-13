#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    unsigned int a, b, c, d;
    scanf("%u %u %u %u", &a, &b, &c, &d);

    printf("%u\n", (a * b) % (c + d));

    return 0;
}
/**************************************************************
	Problem: 1366
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

