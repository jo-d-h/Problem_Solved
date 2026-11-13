#pragma warning (disable:4996)
#include<stdio.h>
#include <math.h>

int main()
{
    int n;
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        sum += n;
    }

    printf("%.3f\n", (float)sum / 5.0);


    return 0;
}
/**************************************************************
	Problem: 1188
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

