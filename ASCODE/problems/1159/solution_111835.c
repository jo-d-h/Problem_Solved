#include <stdio.h>
#pragma warning (disable:4996)

void sort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (arr[j] < arr[j + 1])
				{
					int tmp = 0;
					tmp = arr[j + 1];
					arr[j + 1] = arr[j];
					arr[j] = tmp;
				}
			}
		}

		
	}
}



int main()
{
	int t;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int m[30] = {};
		int n;
		scanf("%d", &n);

		for (int j = 0; j < n; j++)
		{
			scanf("%d", &m[j]);
		}

		sort(m, n);

		printf("%d %d\n", m[0], m[4]);
	}
}

/**************************************************************
	Problem: 1159
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

