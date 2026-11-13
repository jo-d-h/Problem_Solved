#include <stdio.h>
#include <math.h>
#pragma warning(disable: 4996)

#define LIMIT 5000001

char p[LIMIT] = { 1, 1, 0 };
int prime_count[LIMIT] = { 0 };

void prime_init()
{
    int i, j;
    int sq_limit = (int)sqrt((double)LIMIT);

    for (i = 2; i <= sq_limit; i++)
    {
        if (!p[i])
        {
            for (j = i * i; j < LIMIT; j += i)
            {
                p[j] = 1;
            }
        }
    }

    for (i = 2; i < LIMIT; i++)
    {
        prime_count[i] = prime_count[i - 1];
        if (p[i] == 0)
            prime_count[i]++;
    }
}

int main()
{
    prime_init();

    while (1)
    {
        int a, b;

        scanf("%d %d", &a, &b);

        if (a == 0 && b == 0)
        {
            break;
        }

        int count;

        if (a > 1)
            count = prime_count[b] - prime_count[a - 1];
        else
            count = prime_count[b];

        printf("%d\n", count);
    }

    return 0;
}

/**************************************************************
	Problem: 1536
	Language: C++
	Result: Accepted
	Time:55 ms
	Memory:25532 kb
****************************************************************/

