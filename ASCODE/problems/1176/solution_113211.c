#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
    int odd = 0, even = 0;
    int num, sum = 0;
    int yes = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &num);

        sum += num;

        if (num % 2 == 0)
            even++;
        else
            odd++;
    }

    if (sum >= 91 && sum <= 180)
        yes++;
    if (odd >= 2 && odd <= 4)
        yes++;

    if (yes == 2)
        printf("BEST\n");
    else if (yes == 1)
        printf("GOOD\n");
    else
        printf("BAD\n");

    return 0;
}
/**************************************************************
	Problem: 1176
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

