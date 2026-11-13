#pragma warning(disable:4996)
#include <stdio.h>

int main() 
{
    int t, num;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &num);

        for (int i = 1; i <= num; i++) 
        {
            int len = 2 * i - 1;
            int tmp = num;

            for (int j = num - i; j > 0; j--)
            {
                printf(" ");
            }

            for (int k = 0; k < 2 * i - 1; k++)
            {
                if (k < (len / 2))
                {
                    printf("%c", 64 + tmp);
                    tmp--;
                }

                else 
                {
                    printf("%c", 64 + tmp);
                    tmp++;
                }
            }

            printf("\n");
        }

        for (int i = num - 1; i > 0; i--) 
        {
            int len = 2 * i - 1;
            int tmp = num;

            for (int j = num - i; j > 0; j--)
            {
                printf(" ");
            }

            for (int k = 0; k < 2 * i - 1; k++)
            {
                if (k < (len / 2))
                {
                    printf("%c", 64 + tmp);
                    tmp--;
                }

                else 
                {
                    printf("%c", 64 + tmp);
                    tmp++;
                }
            }

            printf("\n");
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1213
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

