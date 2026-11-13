#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int n;
        int num;
        int odd = 0, even = 0;

        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &num);

            if (num != 0 && num % 2 == 0)
                even++;
            else if (num != 0 && num % 2 == 1)
                odd++;
        }

        printf("ODD:%d EVEN:%d\n", odd, even);
    }

    return 0;
}
/**************************************************************
	Problem: 1219
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

