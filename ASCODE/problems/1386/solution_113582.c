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

        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= j; k++)
            {
                printf("###");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1386
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

