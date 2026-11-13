#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int r;
        char s[21];

        scanf("%d %s", &r, s);

        int len = strlen(s);

        for (int j = 0; j < len; j++)
        {
            for (int k = 0; k < r; k++)
            {
                printf("%c", s[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1385
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

