#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

int main()
{
    int n, result = 0;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("1");
        return 0;
    }

    for (int sum = 2; sum <= n; result++)
    {
        sum += 6 * result;
    }

    printf("%d", result);

    return 0;
}