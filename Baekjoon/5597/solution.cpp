#include <stdio.h>

int main()
{
	int stu[30] = {};
	int submit = 0;

	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &submit);
		stu[submit - 1] = 1;
	}

	for (int i = 0; i < 30; i++)
	{
		if (stu[i] == 0)
			printf("%d\n", i + 1);
	}
}	