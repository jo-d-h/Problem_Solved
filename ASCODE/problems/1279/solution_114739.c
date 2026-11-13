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
                if (j == 1 || j == (2 * i) - 1)
                    printf("$");
                else
                    printf(" ");
            }
            printf("\n");
        }
        for (; i >= 1; i--)
        {
            for (j = 1; j <= (h[p] / 2 + 1 - i); j++)
                printf(" ");
            for (j = 1; j <= (2 * i) - 1; j++)
            {
                if (j == 1 || j == (2 * i) - 1)
                    printf("$");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1279
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

