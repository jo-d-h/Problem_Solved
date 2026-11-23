#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	int t, r;
	char s[20] = {};

	scanf("%d", &t);
	
	for (int i = 0; i < t; i++)
	{
		scanf("%d %s", &r, &s);

		for (int k = 0; k < strlen(s); k++)
		{
			for (int p = 0; p < r; p++)
			{
				printf("%c", s[k]);
			}
		}

		printf("\n");
	}
	return 0;
}