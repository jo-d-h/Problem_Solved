#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int m, max = -1001, min = 1001;
        int arr[51];

        scanf("%d", &m);

        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arr[i]);

            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];
        }

        printf("%d %d %d\n", max, min, max - min);
    }

    return 0;
}
/**************************************************************
	Problem: 1154
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

