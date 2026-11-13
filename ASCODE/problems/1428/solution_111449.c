#include <stdio.h>
#pragma warning (disable:4996)

int find(int n, int A[], int target) 
{
    int min = 0;
    int max = n - 1;
    int mid;

    while (min <= max) {
        mid = (min + max) / 2;
        if (A[mid] == target) 
        {
            return 1;
        }
        else if (target > A[mid]) 
        {
            min = mid + 1;
        }
        else 
        {
            max = mid - 1;
        }
    }

    return 0;
}

int main() 
{
    int n, m, target;
    int A[50000];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < m; i++) 
    {
        scanf("%d", &target);

        if (find(n, A, target))
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
	Time:68 ms
	Memory:1196 kb
****************************************************************/

