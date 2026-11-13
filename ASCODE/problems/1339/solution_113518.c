#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main()
{
	while (1)
	{
		int m;
		scanf("%d", &m);

		if (m == 0)
			break;

		int num;
		int max = -101, min = 101;

		for (int i = 0; i < m; i++)
		{
			scanf("%d", &num);

			if (num >= -100 && num <= 100)
			{
				if (num > max)
					max = num;
				if (num < min)
					min = num;
			}
		}

		printf("%d %d\n", max, min);
	}


	return 0;
}
/**************************************************************
	Problem: 1339
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

