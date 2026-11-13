#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		char a[101];
		char b[101];

		scanf("%s", a);
		scanf("%s", b);

		int len = strlen(a);

		for (int i = 0; i < len; i++)
		{
			if (a[i] == b[i])
				printf("0");
			else
				printf("1");
		}

		printf("\n");
	}
}
/**************************************************************
	Problem: 1501
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

