#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	long long int second;
	scanf("%lld", &second);

	long long int remain = second;

	printf("%lld", remain / 604800);
	remain %= 604800;

	printf(" %lld", remain / 86400);
	remain %= 86400;

	printf(" %lld", remain / 3600);
	remain %= 3600;

	printf(" %lld", remain / 60);
	remain %= 60;

	printf(" %lld", remain);

}
/**************************************************************
	Problem: 1037
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

