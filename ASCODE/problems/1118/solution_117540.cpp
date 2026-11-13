#pragma warning (disable:4996)
#include <stdio.h>
#include <algorithm>
 
#define A_max 1500000
#define B_max 10000
using namespace std;
 
int A[A_max];
int B[B_max];
 
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
 
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &A[i]);
    }
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }
 
    sort(A, A + m);
 
    int count = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (binary_search(A, A + m, B[i]))
        {
            count++;
        }
    }
 
    printf("%d\n", count);
 
    return 0;
}
/**************************************************************
	Problem: 1118
	Language: C++
	Result: Accepted
	Time:786 ms
	Memory:7020 kb
****************************************************************/

