#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int x;
        scanf("%d", &x);


        for (int i = 1; i <= x; i++)
        {
            if (i == 1)
                printf("*");

            else if (i == x)
            {
                for (int j = 0; j < x; j++)
                {
                    printf("*");
                }
            }

            else
            {
                printf("*");
                for (int k = 1; k < i - 1; k++)
                {
                    printf(" ");
                }
                printf("*");
            }

            printf("\n");
        }
    }

    return 0;
}
/**************************************************************
	Problem: 1057
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

