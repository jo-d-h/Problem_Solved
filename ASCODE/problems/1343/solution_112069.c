#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	int t;
	char str[101] = {};
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%s", str);

		int len = strlen(str);

		for (int j = 0; j < len; j+= 2)
		{
			putchar(str[j]);
		}

		for (int j = 1; j < len; j+= 2)
		{
			putchar(str[j]);
		}

		printf("\n");
	}
}
/**************************************************************
	Problem: 1343
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

