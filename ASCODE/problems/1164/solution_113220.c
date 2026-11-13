#pragma warning (disable:4996)
#include<stdio.h>
#include<string.h>

int main()
{
    while (1)
    {
        int price;
        scanf("%d", &price);

        if (price == 0)
            break;

        int sum = 0, day = 0, daily_wage = 5000;

        while (sum < price)
        {
            sum += daily_wage;
            daily_wage += 100;
            day++;
        }

        printf("%d\n", day);
    }

    return 0;
}
/**************************************************************
	Problem: 1164
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

