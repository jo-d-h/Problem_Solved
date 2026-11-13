#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	while (1)
	{
		int n, score[501];
		scanf("%d", &n);

		if (n == 0)
			break;

		int count = 0, sum = 0;
		float avg;

		for (int i = 0; i < n; i++)
		{
			scanf("%d", &score[i]);

			if (score[i] <= 100)
			{
				count++;
				sum += score[i];
			}
		}

		avg = (float)sum / count;
		printf("%.2f\n", avg);
	}
}
/**************************************************************
	Problem: 1091
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

