#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int geun = b * b - 4 * a * c;

	if (geun > 0)
		printf("1");
	else if (geun == 0)
		printf("0");
	else
		printf("-1");
}
/**************************************************************
	Problem: 1110
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

