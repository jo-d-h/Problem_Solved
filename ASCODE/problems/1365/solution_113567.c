#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int sum = 0;
    int people;

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &people);

        sum += people;
    }
    
    double avg = (double)sum / 7;

    printf("%d %.9lf\n", sum, avg);

    return 0;
}
/**************************************************************
	Problem: 1365
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

