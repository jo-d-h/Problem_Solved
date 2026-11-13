#pragma warning(disable:4996)
#include <stdio.h>

int main()
{

    int j;
    int set0, set1;
    int setarr1[11][11] = {},
        setarr2[11][11] = {},
        outarr[11][11] = {};
    scanf("%d %d", &set0, &set1);

    for (int i = 0; i < set0; i++)
    {
        for (j = 0; j < set1; j++)
        {
            scanf("%d", &setarr1[i][j]);
        }
    }

        for (int i = 0; i < set0; i++)
        {
            for (j = 0; j < set1; j++)
            {
                scanf("%d", &setarr2[i][j]);
            }
        }

        for (int i = 0; i < set0; i++)
        {
            for (j = 0; j < set1; j++)
            {
                outarr[i][j] = setarr1[i][j] + setarr2[i][j];
            }

            for (j = 0; j < set1; j++)
            {
                printf("%d ", outarr[i][j]);
            }
            printf("\n");
        }
}
/**************************************************************
	Problem: 1341
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

