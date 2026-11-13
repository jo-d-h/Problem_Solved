#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n, tcase;

	scanf("%d", &tcase);

	for (int i = 0; i < tcase; i++)
	{
		scanf("%d", &n);

		for (int i = n; i > 0; i--)
		{
			for (int j = 1; j <= (n - i); j++)
				printf(" ");
			for (int j = 1; j <= i; j++)
				printf("*");
			printf("\n");
		}
	}
}
/**************************************************************
	Problem: 1056
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

