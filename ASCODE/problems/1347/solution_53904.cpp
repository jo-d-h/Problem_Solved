#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
	int board[9][9] = {};
	int max = 0;
	int maxx = 0;
	int maxy = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &board[i][j]);
		}
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (board[i][j] >= max)
			{
				max = board[i][j];
				maxx = i;
				maxy = j;
			}
			else if (board[i][j] == max)
			{
				if(maxx > i && maxy > j)
					max = board[i][j];
					maxx = i;
					maxy = j;
			}
		}
	}

	printf("%d\n", max);
	printf("%d %d", maxx + 1, maxy + 1);

}
/**************************************************************
	Problem: 1347
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

