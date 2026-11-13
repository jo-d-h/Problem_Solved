#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int n;
    scanf("%d", &n);

    int arr[1001];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
/**************************************************************
	Problem: 1389
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

