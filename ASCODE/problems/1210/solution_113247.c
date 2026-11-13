#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	while (1)
	{
		int m;
		scanf("%d", &m);

		if (m == 0)
			break;

		int arr[51];
		int sum = 0, down = 0, over = 0;

		for (int i = 0; i < m; i++)
		{
			scanf("%d", &arr[i]);
			sum += arr[i];
		}

		int avg = sum / m;

		for (int i = 0; i < m; i++)
		{
			if (arr[i] <= avg)
				down++;
			else
				over++;
		}

		printf("%d %d %d\n", avg, down, over);
	}

	return 0;
}

/**************************************************************
	Problem: 1210
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

