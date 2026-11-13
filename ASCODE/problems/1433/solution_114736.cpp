#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
    int x, z;
    scanf("%d %d", &x, &z);

    if (x == 0 || z == 0)
        printf("Impossible!\n");
    else
    {
        int r1 = x % z;
        printf("%d\n", r1);

        long double y = ((long double)x / z) * ((x * x + z * z) / (2.0 * x)) - ((x * (z + z * z) - 5.0) / (x - 3.0 * z));

        printf("%.5Lf\n", y);
    }

    return 0;
}
/**************************************************************
	Problem: 1433
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

