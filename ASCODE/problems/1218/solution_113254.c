#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int m1, n1, m2, n2;
    int arr1[11][11];
    int arr2[11][11];

    scanf("%d %d", &m1, &n1);

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    scanf("%d %d", &m2, &n2);

    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if (j == n1 - 1)
                printf("%d", arr1[i][j] + arr2[i][j]);

            else
                printf("%d ", arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1218
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

