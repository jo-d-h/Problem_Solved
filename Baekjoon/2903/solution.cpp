#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int square, dot, alldot;

    for (int i = 0; i < n; i++)
    {
        square = pow(2, n);

        dot = square + 1;

        alldot = pow(dot, 2);
    }

    printf("%d", alldot);
    return 0;
}