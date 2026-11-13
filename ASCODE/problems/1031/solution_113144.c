#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        unsigned long long n;
        scanf("%llu", &n);

        unsigned long long a = 0;
        unsigned long long su = 1;

        while (su < n)
        {
            su <<= 1;
            a++;
        }

        printf("%llu\n", a);
    }
    return 0;
}
/**************************************************************
	Problem: 1031
	Language: C
	Result: Accepted
	Time:594 ms
	Memory:1120 kb
****************************************************************/

