#include <stdio.h>

int main()
{
	int max = 0, su = 0;
	int num[9] = {};


	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < 9; i++)
	{
		if (max < num[i])
		{
			max = num[i];
			su = i;
		}
			
	}

	printf("%d\n%d\n", max, su + 1);
}