#pragma warning(disable:4996)
#include <stdio.h>

int get_len(long long n)
{
    int count = 1;

    while (n != 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;

        count++;
    }

    return count;
}



int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        if (a > b)
        {
            int tmp = a;
            a = b;
            b = tmp;
        }

        int max_len = 0;
        int result = a;

        for (int i = a; i <= b; i++)
        {
            int len = get_len(i);

            if (len > max_len)
            {
                max_len = len;
                result = i;
            }
        }

        printf("%d %d\n", result, max_len);
    }

    return 0;
}
/**************************************************************
	Problem: 1443
	Language: C
	Result: Accepted
	Time:85 ms
	Memory:1120 kb
****************************************************************/

