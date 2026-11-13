#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int price, money = 0;
        int day = 0;
        int daily_wage = 63000;

        scanf("%d", &price);

        while (price > money)
        {
            day++;

            if (day % 7 == 1 && day != 1)
                daily_wage += 1400;

            money += daily_wage;
        }

        printf("%d\n",day);
    }

    return 0;
}
/**************************************************************
	Problem: 1156
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

