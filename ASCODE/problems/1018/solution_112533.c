#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int price;
	scanf("%d", &price);

	int remain = price;
	printf("%d\n", remain / 500);
	remain %= 500;

	printf("%d\n", remain / 100);
	remain %= 100;

	printf("%d\n", remain / 10);

}
/**************************************************************
	Problem: 1018
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

