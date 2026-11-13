#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
	int second;
	scanf("%d", &second);

	int d, h, m;
	int remain = second;

	d = remain / 86400;
	remain %= 86400;

	h = remain / 3600;
	remain %= 3600;

	m = remain / 60;
	remain %= 60;

	printf("%d %d %d %d", d, h, m, remain);
}
/**************************************************************
	Problem: 1029
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

