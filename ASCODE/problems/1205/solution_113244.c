#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);

	for (int T = 0; T < t; T++)
	{
		int m;
		scanf("%d", &m);

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

		int diff = max - min;

		if (diff != 0 && (max % diff == 0) && (min % diff == 0))
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}
/**************************************************************
	Problem: 1205
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

