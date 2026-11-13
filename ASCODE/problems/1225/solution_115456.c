#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int n;
        scanf("%d", &n);

        char word[22] = { 'S', 'T', 'E', 'V', 'E', 'J', 'O', 'B', 'S', 'A', 'N', 'D', 'B', 'I', 'L', 'L', 'G', 'A', 'T', 'E', 'S'};

        for (int i = 1; i <= n; i++)
        {
            //좌측상단
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
            }

            for (int j = n; j > n - i; j--)
            {
                printf("%c", word[j - 1]);
            }

            //우측상단
            for (int j = n + 1; j < n + i; j++)
            {
                printf("%c", word[j - i]);
            }

            for (int j = 1; j <= n; j++)
            {
                printf(" ");
            }

                printf("\n");
        }

        for (int i = n - 1; i >= 1; i--)
        {
            //좌측하단
            for (int j = 0; j < n - i; j++)
            {
                printf(" ");
            }

            for (int j = n; j > n - i; j--)
            {
                printf("%c", word[j - 1]);
            }

            //우측하단
            for (int j = n + 1; j < n + i; j++)
            {
                printf("%c", word[j - i]);
            }

            if (i != 1 || T != t - 1)
                printf("\n");
        }    
    }

    return 0;
}
/**************************************************************
	Problem: 1225
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

