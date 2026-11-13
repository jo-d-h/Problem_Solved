#pragma warning(disable:4996)
#include <stdio.h>

int mtrix[100][100];
int main(void)
{
	int t;
	int a, b;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &a, &b);
		for (int k = 0; k < a; k++)
		{
			for (int j = 0; j < b; j++)
			{
				scanf("%d", &mtrix[k][j]);
			}
		}

		if (a == b)
		{
			for (int k = 0; k < a; k++)
			{
				for (int j = 0; j < b; j++)
				{
					printf("%d ", mtrix[k][j]);
				}
				printf("\n");
			}
		}

		else
		{
			for (int k = 0; k < b; k++)
			{
				for (int j = 0; j < a; j++)
				{
					printf("%d ", mtrix[j][k]);
				}
				printf("\n");
			}
		}

	}
}
/**************************************************************
	Problem: 1215
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1160 kb
****************************************************************/

