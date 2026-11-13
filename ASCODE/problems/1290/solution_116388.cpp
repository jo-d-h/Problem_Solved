#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
    while (1)
    {
        int m1, n1, m2, n2;
        int matrix_A[10][10], matrix_B[10][10];
        int is_matrix = 1;

        scanf("%d %d", &m1, &n1);

        if (m1 == 0 && n1 == 0)
            break;

        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                scanf("%d", &matrix_A[i][j]);
            }
        }

        scanf("%d %d", &m2, &n2);

        for (int i = 0; i < m2; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                scanf("%d", &matrix_B[i][j]);
            }
        }

        if (m1 != m2 || n1 != n2)
        {
            is_matrix = 0;
            printf("Impossible\n");
        }
        else
        {
            int matrix_C[10][10];
            int is_zero = 1;

            for (int i = 0; i < m1; i++)
            {
                for (int j = 0; j < n1; j++)
                {
                    matrix_C[i][j] = matrix_A[i][j] - matrix_B[i][j];

                    if (matrix_C[i][j] != 0)
                    {
                        is_zero = 0;

                    }
                }
            }

            if (is_zero)
            {
                printf("Zero Matrix\n");
            }

            else
            {
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
    }

    return 0;
}
/**************************************************************
	Problem: 1290
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

