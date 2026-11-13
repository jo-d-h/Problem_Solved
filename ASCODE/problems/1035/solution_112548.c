#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);

	int major = (num / 100) % 100;
	printf("%d", major);

	return 0;
}
/**************************************************************
	Problem: 1035
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

