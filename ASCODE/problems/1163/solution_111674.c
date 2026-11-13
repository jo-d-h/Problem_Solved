#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int t, n;
	int su;
	int p = 0, m = 0;

	scanf("%d", &t);
	

	for (int k = 0; k < t; k++)
	{
		scanf("%d", &n);

		for (int i = 0; i < n; i++)
		{
			scanf("%d", &su);

			if (su > 0)
				p++;
			else if (su < 0)
				m++;
		}

		printf("%d %d\n", m, p);
		p = 0;
		m = 0;
	}
	return 0;
}
/**************************************************************
	Problem: 1163
	Language: C
	Result: Accepted
	Time:2 ms
	Memory:1120 kb
****************************************************************/

