#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		int n;
		scanf("%d", &n);

		int arr[101] = {};
		int tmp;
		int count = 0;

		for (int i = 0; i < n; i++)
		{
			scanf("%d", &tmp);

			if (tmp > 0 && tmp % 2 == 1)
			{
				arr[count] = tmp;
				count++;
			}
		}
		
		for (int i = 0; i < count; i++)
		{
			for (int j = 0; j < count; j++)
			{
				if (arr[i] > arr[j])
				{
					tmp = arr[j];
					arr[j] = arr[i];
					arr[i] = tmp;
				}
			}
		}

		if (arr[0] == NULL)
		{
			printf("None\n");
		}
		else
		{
			for (int i = 0; i < count; i++)
			{
				printf("%d ", arr[i]);
			}
			printf("\n");
		}
	}

	return 0;
}
/**************************************************************
	Problem: 1114
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

