#include <stdio.h>
#include <math.h>
#pragma warning(disable: 4996)

#define LIMIT 5000001

char p[LIMIT] = { 1, 1 };
int prime_count[LIMIT] = {0};

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
        prime_count[i] = prime_count[i - 1] + (p[i] == 0 ? 1 : 0);
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

        if (a > 1)
            printf("%d\n", prime_count[b] - prime_count[a - 1]);
        else
            printf("%d\n", prime_count[b]);
    }

    return 0;
}

/**************************************************************
	Problem: 1536
	Language: C++
	Result: Accepted
	Time:54 ms
	Memory:25532 kb
****************************************************************/

