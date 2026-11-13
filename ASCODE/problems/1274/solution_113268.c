#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	while (1)
	{
		int n;
		int arr[1001];
		int max = 0;
		int count = 0;
		scanf("%d", &n);

		if (n == 0)
			break;

		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);

			if (max < arr[i])
				max = arr[i];
		}

		for (int i = 0; i < n; i++)
		{
			if (max == arr[i])
				count++;
		}

		printf("Max:%d, Count:%d\n", max, count);

	}

	return 0;
}

/**************************************************************
	Problem: 1274
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

