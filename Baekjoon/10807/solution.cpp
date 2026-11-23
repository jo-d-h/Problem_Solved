#include <stdio.h>

int main()
{
	int n, v, count = 0;
	int num[100] = {};

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}

	scanf("%d", &v);

	for (int i = 0; i < n; i++)
	{
		if (v == num[i])
			count++;
	}

	printf("%d\n", count);
}