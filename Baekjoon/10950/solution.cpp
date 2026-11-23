# include <stdio.h>

int main()
{
	int t;

	scanf("%d", &t);

	for (int n = 0; n < t; n++)
	{
		int a, b = 0;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}