#include <stdio.h>
#include <math.h>
#pragma warning(disable: 4996)

#define LIMIT 300001
int p[LIMIT] = { 0 };
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

void process_case(int a, int b) 
{
    int i, count = 1;
    // 구간 내 소수만 모음
    int selected[100000];
    int sel_count = 0;

    for (i = 0; i < prime_count && primes[i] <= b; i++) 
    {
        if (primes[i] >= a) 
        {
            selected[sel_count++] = primes[i];
        }
    }

    for (i = 0; i <= sel_count - 5; i++) 
    {
        int s1 = selected[i];
        int s2 = selected[i + 1];
        int s3 = selected[i + 2];
        int s4 = selected[i + 3];
        int s5 = selected[i + 4];
        int sum = s1 + s2 + s3 + s4 + s5;

        if (is_prime(sum)) 
        {
            printf("#%d:%d+%d+%d+%d+%d:%d\n", count++, s1, s2, s3, s4, s5, sum);
        }
    }
}

int main() 
{
    int a, b;
    prime_init();

    while (1) 
    {
        scanf("%d %d", &a, &b);

        if (a == 0 && b == 0) 
            break;

        process_case(a, b);
        printf("\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1462
	Language: C++
	Result: Accepted
	Time:21 ms
	Memory:3752 kb
****************************************************************/

