#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int input = 1;
	int num[50];
	int max = 0;
	int min = 0;
	int result = 0;

	while (input != 0)
	{
		scanf("%d", &input);

		for (int k = 0; k < input; k++)
		{
			scanf("%d", &num[k]);
		}

		min = num[0];
		max = num[0];

		for (int a = 0; a < input; a++)
		{
			if (min > num[a])
			{
				min = num[a];
			}
			else if (max < num[a])
			{
				max = num[a];
			}
		}

		result = max - min;

		if (input == 0)
		{

		}

		else if (input != 0)
		{
			if (result % 2 == 0)
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
		}
	}
}
/**************************************************************
	Problem: 1284
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

