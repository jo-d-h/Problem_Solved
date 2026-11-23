#include <stdio.h>

int main()
{
	int n, x;
	int su[10000];

	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &su[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (su[i] < x)
			printf("%d ", su[i]);
	}
}	