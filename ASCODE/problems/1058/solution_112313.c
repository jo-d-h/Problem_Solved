#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int n, tcase;

    scanf("%d", &tcase);

    for (int i = 0; i < tcase; i++)
    {
        scanf("%d", &n);

        for (int j = 1; j <= n; j++) 
        {
            for (int k = 0; k < n - j; k++) 
            {
                printf(" ");
            }

            for (int k = 0; k < 2 * j - 1; k++) 
            {
                printf("*");
            }
            printf("\n");
        }

        for (int j = n - 1; j >= 1; j--) 
        {
            for (int k = 0; k < n - j; k++) 
            {
                printf(" ");
            }
            for (int k = 0; k < 2 * j - 1; k++) 
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
/**************************************************************
	Problem: 1058
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

