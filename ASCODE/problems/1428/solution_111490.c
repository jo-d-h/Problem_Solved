#include <stdio.h>
#pragma warning (disable:4996)

#define MAX 50000
#define MAXNUM  100000

void prepare(int pre[], int arr[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        pre[arr[i]] = 1;
    }
}

int find(int pre[], int target)
{
    return pre[target];
}

int main()
{
    int n, num[MAX], what, test;
    int pre[MAXNUM] = { 0 };

    scanf("%d %d", &n, &test);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    prepare(pre, num, n);

    while (test--)
    {
        scanf("%d", &what);

        if (find(pre, what))
            printf("true\n");
        else
            printf("false\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1428
	Language: C
	Result: Accepted
	Time:59 ms
	Memory:1588 kb
****************************************************************/

