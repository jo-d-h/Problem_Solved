#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	if (n % 2 == 1 && n % 7 == 0)
		printf("1");
	else
		printf("0");
}
/**************************************************************
	Problem: 1039
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

