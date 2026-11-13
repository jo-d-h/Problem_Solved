#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n1, n2;
        scanf("%d %d", &n1, &n2);

        int r_n1 = 0, r_n2 = 0;

        while (n1 > 0)
        {
            r_n1 = r_n1 * 10 + (n1 % 10);
            n1 /= 10;
        }

        while (n2 > 0)
        {
            r_n2 = r_n2 * 10 + (n2 % 10);
            n2 /= 10;
        }

        int sum = r_n1 + r_n2;

        while (sum >= 10)
        {
            int n_sum = 0;

            while (sum > 0)
            {
                n_sum += sum % 10;
                sum /= 10;
            }
            sum = n_sum;
        }

        printf("%d\n", sum);
    }

    return 0;
}
/**************************************************************
	Problem: 1326
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

