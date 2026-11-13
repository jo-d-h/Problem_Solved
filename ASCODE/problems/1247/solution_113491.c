#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int a;
		scanf("%d", &a);

		if (a % 3 == 0 || a % 10 == 3 || a / 10 == 3)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}
/**************************************************************
	Problem: 1247
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

