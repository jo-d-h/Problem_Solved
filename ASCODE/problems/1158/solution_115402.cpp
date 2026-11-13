#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int n;
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            char alpabet = 'A';

            for (int j = 1; j < n - i; j++)
            {
                printf(" ");
            }

            for (int j = n - i; j < n; j++)
            {
                printf("%c", alpabet);
                alpabet++;
            }

            for (int j = n; j <= n + i; j++)
            {
                printf("%c", alpabet);
                alpabet--;
            }

            for (int j = n - i; j > 0; j--)
            {
                printf(" ");
            }
            
            if (T == t - 1 && i == n - 1)
                break;
            else
            printf("\n");
        }
    }


    return 0;
}
/**************************************************************
	Problem: 1158
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

