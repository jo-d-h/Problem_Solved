#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        for (int j = 0; j < n; j++) //사각형
        {
            for (int k = 0; k < 2 * n - 1; k++)
            {
                printf("%%");
            }
            printf("\n");
        }

        for (int j = 0; j < n; j++) //삼각형
        {
            for (int k = 0; k < n - j - 1; k++)
            {
                printf(" ");
            }
            for (int k = 0; k < 2 * j + 1; k++)
            {
                printf("%%");
            }
            
            if (i != t - 1 || j != n - 1)
                printf("\n");
        }

        if (i != t - 1)
            printf("\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1377
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

