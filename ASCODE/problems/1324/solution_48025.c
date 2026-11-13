#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int h, m, tcase;

	scanf("%d", &tcase);
	for (int i = 0; i < tcase; i++)
	{
		scanf("%d %d", &h, &m);

		if (m >= 45)
			printf("%d:%d\n", h, m - 45);

		else if (h != 0)
			printf("%d:%d\n", h - 1, m + 60 - 45);

		else
			printf("23:%d\n", m + 60 - 45);
	}
}
/**************************************************************
	Problem: 1324
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

