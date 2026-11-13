#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		char p1[101], p2[101];
		scanf("%s", p1);
		scanf("%s", p2);

		int len = strlen(p1);

		int n1, n2;
		scanf("%d %d", &n1, &n2);

		char c1[101], c2[101];

		//c1
		for (int j = 0; j < n1; j++)
		{
			c1[j] = p1[j];
		}
		for (int j = n1; j < n2; j++)
		{
			c1[j] = p2[j];
		}
		for (int j = n2; j < len; j++)
		{
			c1[j] = p1[j];
		}

		//c2
		for (int j = 0; j < n1; j++)
		{
			c2[j] = p2[j];
		}
		for (int j = n1; j < n2; j++)
		{
			c2[j] = p1[j];
		}
		for (int j = n2; j < len; j++)
		{
			c2[j] = p2[j];
		}

		c1[len] = '\0';
		c2[len] = '\0';

		printf("%s %s\n", c1, c2);
	}

	return 0;
}
/**************************************************************
	Problem: 1444
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

