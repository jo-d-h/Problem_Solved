#include <stdio.h>
#include <algorithm>
#pragma warning (disable:4996)

int main()
{
    int ia, ja;
    while (scanf("%d %d", &ia, &ja) != EOF)
    {
        int i = ia;
        int j = ja;

        if (j > i)
        {
            int tmp = i;
            i = j;
            j = tmp;
        }

        int max_m = 0;

        for (int p = i; p >= j; p--)
        {
            int m = 1;
            int q = p;

            while (q != 1)
            {
                if (q % 2 == 1)
                {
                    q = 3 * q + 1;
                    m++;
                }
                else
                {
                    q /= 2;
                    m++;
                }
            }

            if (m > max_m)
                max_m = m;
        }

        printf("%d %d %d\n", ia, ja, max_m);
    }

    return 0;
}
/**************************************************************
	Problem: 1237
	Language: C++
	Result: Accepted
	Time:11 ms
	Memory:1120 kb
****************************************************************/

