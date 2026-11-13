#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int price;
        scanf("%d", &price);

        int day = 0, money = 0; 
        int workday = 0;

        while (money < price)
        {
            int weekday = day % 7;
            int wage = 0;
            

            switch (weekday)
            {
            case 0:
                wage = 9000 * 5;
                break;
            case 1:
                wage = 9000 * 4;
                break;
            case 2:
                wage = 9000 * 6;
                break;
            case 5:
                wage = 11000 * 6;
                break;
            case 6:
                wage = 11000 * 8;
                break;

            default:
                wage = 0;
                break;
            }
            money += wage;
            day++;

            if (wage > 0)
                workday++;
        }

        printf("%d\n", workday);
    }

    return 0;
}
/**************************************************************
	Problem: 1211
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

