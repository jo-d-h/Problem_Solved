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

        int day = 0;

        while (1)
        {
            if (n == 1)
                break;

            day++;

            if (n % 2 == 1)
            {
                n = n * 3 + 1;
            }

            else
                n = n / 2;
        }

        printf("%d\n", day);
    }

    return 0;
}
/**************************************************************
	Problem: 1236
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

