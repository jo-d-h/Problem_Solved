#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int n;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < n - i; j++)
            {
                printf(" ");
            }

            for (int j = n - i; j < n; j++)
            {
                printf("*");
            }
            printf("\n");
        }

        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = 0; j < n - i; j++)
            {
                printf(" ");
            }

            for (int j = n - i; j < n; j++)
            {
                printf("*");
            }

            

            printf("\n");
        }
    }

    return 0;
}
/**************************************************************
	Problem: 1220
	Language: C
	Result: Accepted
	Time:7 ms
	Memory:1120 kb
****************************************************************/

