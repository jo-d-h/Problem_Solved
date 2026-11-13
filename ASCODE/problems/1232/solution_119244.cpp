#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

#define LIMIT 100001

int p[LIMIT];
int primes[LIMIT];
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

int reverse(int n)
{
	int r = 0;
	while (n > 0)
	{
		r = r * 10 + n % 10;
		n /= 10;
	}
	return r;
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
            int temp = m;
            m = n;
            n = temp;
        }

        int min = 0, max = 0, count = 0;

        for (int i = m; i <= n; i++)
        {
            if (is_prime(i))
            {
                int r = reverse(i);

                if (r != i && is_prime(r))
                {
                    if (min == 0)
                        min = i;

                    max = i;
                    count++;
                }
            }
        }

        if (count == 0)
        {
            printf("0 0 0\n");
        }
        else
        {
            printf("%d %d %d\n", max, min, count);
        }
    }
}
/**************************************************************
	Problem: 1232
	Language: C++
	Result: Accepted
	Time:5 ms
	Memory:1916 kb
****************************************************************/

