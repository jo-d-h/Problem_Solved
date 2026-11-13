#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int count = 0;
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % 7 == 0 && i % 2 == 0)
        {
            count++;
            sum += i;
        }
    }

    printf("%d %d\n", count, sum);

    return 0;
}
/**************************************************************
	Problem: 1067
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

