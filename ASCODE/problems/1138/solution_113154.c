#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
    int n, a, b;
    int arr[101];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &a, &b);

    int count = 0;

    if (a > b)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= a && arr[i] >= b)
                count++;
        }
    }
    else if (a < b)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= a && arr[i] <= b)
                count++;
        }
    }

    printf("%d\n", count);
    

    return 0;
}
/**************************************************************
	Problem: 1138
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

