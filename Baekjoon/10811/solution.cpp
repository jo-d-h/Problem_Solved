#include <stdio.h>

int main()
{
	int n, m;
	int i, j;
	int tmp;
	int bskt[101] = {};

	scanf("%d %d", &n, &m);

	for (int k = 0; k < n; k++)
		bskt[k] = k + 1;

	for (int p = 0; p < m; p++)
	{
		scanf("%d %d", &i, &j);
		for (int k = i - 1; k < j; k++)
		{
			tmp = bskt[k];
			bskt[k] = bskt[j - 1];
			bskt[j - 1] = tmp;
			j--;
		}
	}

	for (int a = 0; a < n; a++)
	{
		printf("%d ", bskt[a]);
	}
}	