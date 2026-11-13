#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int matrix_m[11][11];
        int matrix_t[11][11];

        int a, b;
        scanf("%d %d", &a, &b);

        for (int x = 0; x < a; x++)
        {
            for (int y = 0; y < b; y++)
            {
                scanf("%d", &matrix_m[x][y]);
            }
        }

        for (int x = 0; x < a; x++)
        {
            for (int y = 0; y < b; y++)
            {
                matrix_t[y][x] = matrix_m[x][y];
            }
        }

        int identical = 1;

        if (a == b)
        {
            for (int x = 0; x < a; x++)
            {
                for (int y = 0; y < b; y++)
                {
                    if (matrix_m[x][y] != matrix_t[x][y])
                    {
                        identical = 0;
                        break;
                    }
                }
                if (identical == 0)
                    break;
            }
        }
        else
        {
            identical = 0;
        }

        if (identical == 1)
        {
            printf("Identical\n");
        }
        else
        {
            for (int x = 0; x < b; x++)
            {
                for (int y = 0; y < a; y++)
                {
                    printf("%d ", matrix_t[x][y]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}
/**************************************************************
	Problem: 1115
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

