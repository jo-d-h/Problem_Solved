#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
    while (1)
    {
        int m1, n1;
        scanf("%d %d", &m1, &n1);

        if (m1 == 0 && n1 == 0)
        {
            break;
        }

        int matrix_A[10][10] = {};

        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                scanf("%d", &matrix_A[i][j]);
            }
        }

        int m2, n2;
        scanf("%d %d", &m2, &n2);

        int matrix_B[10][10] = {};

        for (int i = 0; i < m2; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                scanf("%d", &matrix_B[i][j]);
            }
        }

        if (m1 != m2 || n1 != n2)
        {
            printf("Impossible\n");
        }
        else {
            int matrix_C[10][10] = {};

            for (int i = 0; i < m1; i++)
            {
                for (int j = 0; j < n1; j++)
                {
                    matrix_C[i][j] = matrix_A[i][j] - matrix_B[i][j];
                }
            }

            for (int i = 0; i < m1; i++)
            {
                for (int j = 0; j < n1; j++)
                {
                    printf("%d ", matrix_C[i][j]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1161
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

