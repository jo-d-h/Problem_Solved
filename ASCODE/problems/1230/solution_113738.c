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

		int bong[10001];
		int bong_max = 0;

		int sum = 0;
		int max_sum = 0;

		for (int i = 0; i < n; i++)
		{
			scanf("%d", &bong[i]);

			if (bong[i] > bong_max)
				bong_max = bong[i];
		}

		for (int i = 0; i < n - 2; i++)
		{
			int x = bong[i];

			for (int j = i + 1; j < n - 1; j++)
			{
				int y = bong[j];

				for (int k = j + 1; k < n; k++)
				{
					int z = bong[k];

					if (x + y > z && y + z > x && x + z > y)
					{
						sum = x + y + z;

						if (sum > max_sum)
							max_sum = sum;
					}
				}
			}
		}

		if (max_sum > 0)
			printf("%d\n", max_sum);
		else
			printf("0\n");
	}
}
/**************************************************************
	Problem: 1230
	Language: C
	Result: Accepted
	Time:97 ms
	Memory:1120 kb
****************************************************************/

