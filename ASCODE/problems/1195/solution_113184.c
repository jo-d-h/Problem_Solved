#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int number, sum = 0;

        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &number);
            sum += number;
        }

        if (sum >= 81 && sum <= 180)
            printf("GOOD\n");
        else
            printf("NOT GOOD\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1195
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

