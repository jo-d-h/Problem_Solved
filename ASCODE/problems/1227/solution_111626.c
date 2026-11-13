#include <stdio.h>
#pragma warning(disable:4996)

// 최대 부분합
int getMax(int arr[], int N)
{
	int best = arr[0];  // 최대로 구할 부분합
	int sum = arr[0];    // 현재 부분합
	int start = 0, end = 0, temp_start = 0;

	for (int i = 1; i < N; ++i)
	{
		if (sum + arr[i] > arr[i]) 
		{
			sum += arr[i];
		}
		else 
		{
			sum = arr[i];
			temp_start = i;
		}

		if (sum > best) 
		{
			best = sum;
			start = temp_start;
			end = i;
		}
		else if (sum == best && temp_start > start) 
		{
			start = temp_start;
			end = i;
		}
	}

	printf("%d %d %d\n", start + 1, end + 1, best);

	return 0;
}

int main()
{
	int t, N;
	int e[500];
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &N);

		for (int k = 0; k < N; k++)
		{
			scanf("%d", &e[k]);
		}

		getMax(e, N);
	}
	return 0;
}
/**************************************************************
	Problem: 1227
	Language: C
	Result: Accepted
	Time:10 ms
	Memory:1120 kb
****************************************************************/

