#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		int d, h, m, sec;
		unsigned int left_sec;
		scanf("%d", &left_sec);

		d = left_sec / 86400;
		left_sec %= 86400;

		h = left_sec / 3600;
		left_sec %= 3600;

		m = left_sec / 60;
		left_sec %= 60;

		sec = left_sec % 60;

		printf("%d day : %d hour : %d min : %d sec\n", d, h, m, sec);
	}
}
/**************************************************************
	Problem: 1012
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

