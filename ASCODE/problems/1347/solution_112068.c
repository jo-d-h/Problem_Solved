#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int board[9][9] = {};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &board[i][j]);
        }
    }

    int max = 0;
    int x = 0;
    int y = 0;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] >= max)
            {
                max = board[i][j];
                x = i;
                y = j;
            }
            else if (board[i][j] == max)
            {
                if (x > i && y > j)
                    max = board[i][j];
                x = i;
                y = j;
            }
        }
    }

    printf("%d\n", max);
    printf("%d %d", x + 1, y + 1);

}
/**************************************************************
	Problem: 1347
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

