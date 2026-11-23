#include <stdio.h>

int main()
{
	int n, sum = 0;
	int grade[1000] = {};
	int maxgrade = 0;
	float avg = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &grade[i]);

		if (maxgrade <= grade[i])
			maxgrade = grade[i];
	}

	for (int i = 0; i < n; i++)
	{
		avg += (float) grade[i] / maxgrade * 100;
	}
	printf("%f", avg / n);
}	