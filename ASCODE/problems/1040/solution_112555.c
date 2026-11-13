#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int a, n;
	scanf("%d %d", &a, &n);

	int result = a * (1 << n);

	printf("%d",result);
}
/**************************************************************
	Problem: 1040
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

