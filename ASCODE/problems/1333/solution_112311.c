#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

int is_excess(int k) 
{
    int sum = 0;

    for (int j = 1; j <= sqrt(k); j++) 
    {
        if (k % j == 0) 
        {
            sum += j;
            if (j != 1 && j != k / j) 
            {
                sum += k / j;
            }
        }
    }

    return sum > k;
}

int main() 
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) 
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int res = 0;

        for (int k = a; k <= b; k++) 
        {
            if (is_excess(k)) 
            {
                res++;
            }
        }

        if (res == 0) 
        {
            printf("%d-%d:NO\n", a, b);
        }
        else 
        {
            printf("%d-%d:%d\n", a, b, res);
        }
    }

    return 0;
}
/**************************************************************
	Problem: 1333
	Language: C
	Result: Accepted
	Time:68 ms
	Memory:1136 kb
****************************************************************/

