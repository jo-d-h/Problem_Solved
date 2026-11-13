#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int w, h;
		int a = 1;
		scanf("%d %d", &w, &h);

		for (int j = 0; j < h; j++)
		{
			for (int k = 0; k < w; k++)
			{
				if (j == 0 || j == h - 1)
				{
					printf("%d", a);
					a++;
				}
				else if (k == 0 || k == w - 1)
				{
					printf("%d", a);
					a++;
				}
				else
					printf(" ");

				if (a == 10)
					a = 0;

			}
			printf("\n");
		}
	}

	return 0;
}
/**************************************************************
	Problem: 1202
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

