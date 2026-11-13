#pragma warning(disable:4996)
#include <stdio.h>

int main() 
{
    int t;
    int n;
    int len = 0;

    scanf("%d", &t);

    for (int j = 0; j < t; j++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
            n++;
        len = n / 2;

        for (int i = 1; i <= len; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            for (int j = i; j <= len; j++)
            {
                printf(" ");
            }

            for (int j = i; j < len; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }

            printf("\n");
        }

        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }
        printf("\n");

        for (int i = 1; i <= len; i++)
        {

            for (int j = i; j <= len; j++)
            {
                printf("*");
            }
            for (int j = 1; j <= i; j++)
            {
                printf(" ");
            }
            for (int j = 1; j < i; j++)
            {
                printf(" ");
            }

            for (int j = i; j <= len; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}

/**************************************************************
	Problem: 1085
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

