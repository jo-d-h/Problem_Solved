#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	if (n % 2 == 0)
		printf("%d", n + 1);
	else
		printf("%d", n);

	return 0;
}
/**************************************************************
	Problem: 1041
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

