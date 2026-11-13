#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int n;
        scanf("%d", &n);

        int arr[30];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int max_sum = -1000000;

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int sum = 0;

                for (int k = i; k <= j; k++)
                {
                    
                    sum += arr[k];
                }

                if (sum > max_sum)
                    max_sum = sum;
            }
        }

        printf("%d\n", max_sum);
    }

    return 0;
}

/**************************************************************
	Problem: 1096
	Language: C++
	Result: Accepted
	Time:53 ms
	Memory:1120 kb
****************************************************************/

