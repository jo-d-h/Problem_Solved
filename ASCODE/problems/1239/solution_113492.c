#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	int c = a * (b % 10);
	printf("%d\n", c);

	int d = (a * (b - (b % 10)) / 10);
	printf("%d\n", d);

	printf("%d\n", a * b);

	return 0;
}
/**************************************************************
	Problem: 1239
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

