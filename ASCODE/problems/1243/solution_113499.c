#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);

		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		{
			int sum = a + b;

			if ((sum >= 'a' && sum <= 'z') || (sum >= 'A' && sum <= 'Z'))
			{
				printf("%c%c%c\n", (char)sum, (char)sum, (char)sum);
			}
			else
				printf("No Alphabet!\n");
		}
		else
			printf("No Alphabet!\n");
	}

	return 0;
}
/**************************************************************
	Problem: 1243
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

