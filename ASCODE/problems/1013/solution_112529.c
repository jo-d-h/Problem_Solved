#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		char num[9];

		scanf("%s", num);

		int year = (num[2] - '0') * 10 + (num[3] - '0');

		printf("%02d\n", year);
	}
}
/**************************************************************
	Problem: 1013
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

