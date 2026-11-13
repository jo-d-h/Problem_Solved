#include <stdio.h>
#include <math.h>
#pragma warning(disable: 4996)

#define LIMIT 5000010

char p[LIMIT] = { 0 };

void prime_init()
{
    int i, j;
    int sqrtlimit = (int)sqrt((double)LIMIT);

    for (i = 2; i <= sqrtlimit; i++)
    {
        if (!p[i])
        {
            for (j = i * i; j < LIMIT; j += i)
            {
                p[j] = 1;
            }
        }
    }
}

int is_prime(int n)
{
    if (n <= 1)
        return 0;

    if (n < LIMIT)
        return !p[n];

    int i, sqrt_n = (int)sqrt(n);

    for (i = 2; i <= sqrt_n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);

    prime_init();

    for (int T = 0; T < t; T++)
    {
        int m, n;
        scanf("%d %d", &m, &n);

        if (m > n)
        {
            int tmp = m;
            m = n;
            n = tmp;
        }

        int count = 1;
        int found = 0;

        for (int i = m; i <= n - 12; i++)
        {
            if (is_prime(i) && is_prime(i + 6) && is_prime(i + 12))
            {
                printf("%d: %d-%d-%d\n", count, i, i + 6, i + 12);
                count++;
                found = 1;
            }
        }

        if (!found)
            printf("No Sexy Prime Triplets!\n");
    }

    return 0;
}

/**************************************************************
	Problem: 1348
	Language: C++
	Result: Accepted
	Time:36 ms
	Memory:6016 kb
****************************************************************/

