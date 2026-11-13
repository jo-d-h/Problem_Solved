#include <stdio.h>
#include <math.h>
#pragma warning(disable: 4996)

#define LIMIT 10001

int p[LIMIT] = { 0 };
int primes[LIMIT] = { 0 };
int prime_count = 0;

void prime_init() //에라토스테네스의 체 - 소수 구하기
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

    for (i = 2; i < LIMIT; i++)
    {
        if (!p[i])
        {
            primes[prime_count++] = i;
        }
    }
}

int is_prime(int n)
{
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
    int m, n;

    prime_init();

    while (1)
    {
        scanf("%d %d", &m, &n);

        if (m == 0 && n == 0)
            break;

        if (m > n) 
        {
            int tmp = m;
            m = n;
            n = tmp;
        }

        int count = 1;
        int found = 0;

        for (int i = m; i <= n - 2; i++)
        {
            if (is_prime(i) && is_prime(i + 2))
            {
                printf("%d:(%d,%d)\n", count, i, i + 2);
                count++;
                found = 1;
            }
        }

        if (!found)
            printf("No Twin Primes!\n");
    }

    return 0;
}

/**************************************************************
	Problem: 1285
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1212 kb
****************************************************************/

