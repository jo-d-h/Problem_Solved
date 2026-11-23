#include <stdio.h>

int main()
{
	int n, m, i, j, k, tem;
	int bskt[101] = {};

	for (int p = 1; p <= 100; p++)
	{
		bskt[p] = p;
	}

	scanf("%d %d", &n, &m);

	for (int p = 1; p <= m; p++)
	{
		scanf("%d %d", &i, &j);

		tem = 0;
		tem = bskt[i];
		bskt[i] = bskt[j];
		bskt[j] = tem;
	}

	for (int l = 1; l <= n; l++)
		printf("%d ", bskt[l]);
}	