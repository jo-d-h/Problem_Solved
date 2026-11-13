#include <stdio.h>
#pragma warning (disable:4996)

int main() 
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) 
	{
		int h;
		scanf("%d", &h);

		for (int p = 0; p < h; p++) 
		{
			char now = 'A' + p;

			for (int j = 0; j < h - p; j++) 
			{
				printf("%c", now);
			}
			printf("\n");
		}

		if (i < t - 1) {
			printf("\n");
		}
	}

	return 0;
}
/**************************************************************
	Problem: 1173
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

