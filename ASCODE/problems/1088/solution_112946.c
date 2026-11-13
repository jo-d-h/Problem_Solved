#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	while (1)
	{
		int m, arr[51];

		scanf("%d", &m);

		if (m == 0)
			break;
		else
		{
			for (int i = 0; i < m; i++)
			{
				scanf("%d", &arr[i]);
			}

			int max = 0, min = 1001;

			for (int i = 0; i < m; i++)
			{
				if (arr[i] > max)
					max = arr[i];
				if (arr[i] < min)
					min = arr[i];
			}
				if (max == min)
					printf("Same\n");
				else if ((max - min) % 3 == 0)
					printf("Yes\n");
				else
					printf("No\n");
		}
	}
	
	return 0;
}
/**************************************************************
	Problem: 1088
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

