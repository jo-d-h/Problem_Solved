#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
    int t, bonus;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int total = n;

        while (n >= k)
        {
            bonus = n / k;
            total += bonus;
            n = bonus + (n % k);
        }

        printf("%d\n", total);
    }
}
/**************************************************************
	Problem: 1072
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

