#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
    int n;
    int sum = 0;
    double avg;
    
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &n);
        sum += n;
    }

    avg = (double)sum / 7;
    printf("%.2lf", avg);

    return 0;
}
/**************************************************************
	Problem: 1024
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

