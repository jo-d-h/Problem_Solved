#include <stdio.h>

int main()
{
	int n, m, i, j, k;
	int bskt[100] = {};

	scanf("%d %d", &n, &m);

	for (int l = 1; l <= m; l++)
	{
		scanf("%d %d %d", &i, &j, &k);

		for (int p = i; p <= j; p++)
		{
			bskt[p] = k;
		}
	}

	for (int l = 1; l <= n; l++)
		printf("%d ", bskt[l]);
}	