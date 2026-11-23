# include <stdio.h>

int main()
{
	int t, a, b = 0;

	scanf("%d", &t);

	for (int i = 1; i <= t; i++)
	{
		for (int k = 1; k <= i; k++)
			printf("*");
		printf("\n");
	}
}