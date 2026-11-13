#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
    int n, m;
    int a[50000] = {}, x[100000] = {};

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        int count = 0;
        scanf("%d", &x[i]);

        for (int k = 0; k < n; k++)
        {
            if (a[k] == x[i])
            {
                count = 1;
                break;
            }
        }

        if (count > 0)
            printf("true\n");
        else
            printf("false\n");
    }
}
/**************************************************************
	Problem: 1428
	Language: C
	Result: Accepted
	Time:1562 ms
	Memory:1588 kb
****************************************************************/

