#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n = 0;

	scanf("%d", &n);

	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b < n - a - 1; b++)
			printf(" ");
		for (int b = 0; b <= a; b++)
			printf("*");
		for (int b = 0; b < a; b++)
			printf("*");
		printf("\n");
	}

	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b <= a; b++)
			printf(" ");
		for (int b = 0; b < n - a - 1; b++)
			printf("*");
		for (int b = 0; b < n - a - 2; b++)
			printf("*");
		printf("\n");
	}
	return 0;
}