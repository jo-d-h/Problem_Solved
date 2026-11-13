#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int w, h;
		scanf("%d %d", &w, &h);

		for (int j = 0; j < h; j++)
		{
			for (int k = 0; k < w; k++)
			{
				if ((j == 0 || j == h - 1) && (k == 0 || k == w - 1))
					printf("@");
				else if (j == 0 || j == h - 1)
					printf("*");
				else if (k == 0 || k == w - 1)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}

	return 0;
}
/**************************************************************
	Problem: 1212
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

