#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		int arr[5];
		int sum = 0;
		int max = 0, min = 11;

		for (int i = 0; i < 5; i++)
		{
			scanf("%d", &arr[i]);

			if (arr[i] > max)
				max = arr[i];
			if (arr[i] < min)
				min = arr[i];
		}

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (arr[i] > arr[j])
				{
					int tmp = arr[j];
					arr[j] = arr[i];
					arr[i] = tmp;
				}
			}
		}

		if (max - min >= 3)
		{
			sum = 0;
			max = 0, min = 11;

			for (int i = 1; i < 4; i++)
			{
				
				if (arr[i] > max)
					max = arr[i];
				if (arr[i] < min)
					min = arr[i];
			}

			if (max - min >= 3)
				printf("KIN\n");
			else
				printf("%d\n", arr[1] + arr[2] + arr[3]);
		}

		else
			printf("%d\n", arr[1] + arr[2] + arr[3]);
	}
	
}
/**************************************************************
	Problem: 1222
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

