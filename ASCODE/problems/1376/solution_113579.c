#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int arr[101];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        int m;
        scanf("%d", &m);

        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % m == 0)
                count++;
        }

        printf("%d\n", count);
    }

    return 0;
}
/**************************************************************
	Problem: 1376
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

