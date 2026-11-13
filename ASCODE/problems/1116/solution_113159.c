#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int m;
        scanf("%d", &m);

        int arr[51];
        int max = -1001, min = 1001;

        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arr[i]);

            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];
        }

        if (max < 0 || min < 0)
            printf("HMM!\n");

        else if (max + min == 0)
            printf("ZERO\n");

        else if ((max + min) % 7 == 0)
            printf("YES\n");
        else
            printf("NO\n");


    }

    return 0;
}
/**************************************************************
	Problem: 1116
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

