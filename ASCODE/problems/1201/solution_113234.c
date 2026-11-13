#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int day = 0;
        int price;
        int money = 0;

        scanf("%d", &price);

        while (money < price)
        {
            day++;
            money += 57000;
        }

        printf("%d\n", day);
    }

    return 0;
}

/**************************************************************
	Problem: 1201
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

