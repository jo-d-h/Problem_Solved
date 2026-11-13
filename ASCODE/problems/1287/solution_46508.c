#include <stdio.h>

int main(void)
{
    int testcase;
    int num[100];

    scanf("%d", &testcase);

    for (int p = 0; p < testcase; p++)
    {
        scanf("%d", &num[p]);
    }

    for (int p = 0; p < testcase; p++)
    {
        printf("Case #%d:", p + 1);
        for (int i = 0; i < num[p]; i++)
        {
            for (int k = 0; k < i; k++)
            {
                printf("*");
            }
            printf("\n");
        }

        for (int i = num[p]; i >= 0; i--)
        {
            for (int k = 0; k < i; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1287
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

