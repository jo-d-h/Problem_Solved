#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);

	printf("%d", (x + y) % z);
}
/**************************************************************
	Problem: 1007
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

