#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{

	while(1)
	{
		int m;
		scanf("%d", &m);

		if (m == 0)
			break;

		int max = 0, min = 1001;
		int num;

		for (int i = 0; i < m; i++)
		{
			scanf("%d", &num);

			if (num > max)
				max = num;
			if (num < min)
				min = num;
		}

		printf("%d %d\n", max, min);
	}

	return 0;
}
/**************************************************************
	Problem: 1209
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

