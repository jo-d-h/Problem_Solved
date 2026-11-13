#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;
    int p = 0;
    int h[10] = {};
    int tcase;

    scanf("%d", &tcase);

    for (p = 0; p < tcase; p++)
    {
        scanf("%d", &h[p]);
        if (h[p] % 2 == 0)
        {
            h[p] = h[p] - 1;
        }
    }
    //마름모
    for (p = 0; p < tcase; p++)
    {
        for (i = 1; i <= h[p] / 2; i++)
        {
            for (j = 1; j <= (h[p] / 2 + 1 - i); j++)
                printf(" ");
            for (j = 1; j <= (2 * i) - 1; j++)
            {
                    printf("*");
            }
            printf("\n");
        }
        for (; i >= 1; i--)
        {
            for (j = 1; j <= (h[p] / 2 + 1 - i); j++)
                printf(" ");
            for (j = 1; j <= (2 * i) - 1; j++)
            {
                    printf("*");
            }
            printf("\n");
        }
        //정사각형
        for (int i = 1; i <= h[p]; i++)
        {
            for (int j = 1; j <= h[p]; j++)
            {
                if (i == 1 || i == h[p] || j == 1 || j == h[p]) printf("*");
                else printf(" ");
            }
            printf("\n");
        }

        if (p != tcase - 1)
            printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1278
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

