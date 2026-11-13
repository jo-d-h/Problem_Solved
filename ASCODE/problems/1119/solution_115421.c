#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int excess(int num)
{
    int sum = 1;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            sum += i;

            if (i != num / i)
                sum += num / i;
        }
    }

    return sum;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int m, n;
        scanf("%d %d", &m, &n);
        
        int start = m < n ? m : n;
        int end = m < n ? n : m;

        int count = 0;

        for (int i = start; i <= end; i++)
        {
            if (excess(i) > i)
            {
                count++;
            } 
        }

        printf("%d-%d:%d\n", m, n, count);
    }

    return 0;
}
/**************************************************************
	Problem: 1119
	Language: C
	Result: Accepted
	Time:9 ms
	Memory:1120 kb
****************************************************************/

