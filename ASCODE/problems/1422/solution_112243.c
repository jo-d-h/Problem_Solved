#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int price;
        scanf("%d", &price);

        int day = 0; //일수
        int hour_wage = 10000; //시급
        int day_wage; //일급
        int total_wage = 0; //모은 금액
        int max_wage = 15000; //최대 시급 15000원
        

        while(total_wage < price)
        {
            day_wage = 6 * hour_wage; //일급
            total_wage += day_wage;
            day++;

            if (day % 7 == 0)
            {
                if (hour_wage < max_wage)
                    hour_wage += 500;
                if (hour_wage > max_wage)
                    hour_wage = max_wage;
            }
        }     

        printf("%d\n", day);
    }

    return 0;
}
/**************************************************************
	Problem: 1422
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

