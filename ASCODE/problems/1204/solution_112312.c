#pragma warning(disable:4996)
#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) 
    {
        int n;
        scanf("%d", &n);

        int day = 0;
        int money = 0;

        while (n > money)
        {
            day++;

            if (day % 7 == 6 || day % 7 == 0)
                money += 80000;
            else
                money += 40000;
        }

        printf("%d\n", day);
    }

    return 0;
}
/**************************************************************
	Problem: 1204
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

