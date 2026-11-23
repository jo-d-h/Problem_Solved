#include <stdio.h>

int main()
{
	int n, su;
	int max = -1000000;
	int min = 1000000;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &su);

		if (su >= max)
			max = su;
		if (su <= min)
			min = su;
	}

	printf("%d %d", min, max);
}