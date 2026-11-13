#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int num[6];
        int sum = 0, odd = 0, even = 0;
        int m;
        int yes = 0;

        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &num[j]);
            sum += num[j];
            if (num[j] % 2 == 0)
                even++;
            else
                odd++;
        }
        scanf("%d", &m);

        for (int j = 0; j < 6; j++)
        {
            if (num[j] == m)
                yes++;
        }
        
        if (sum >= 91 && sum <= 180)
            yes++;
        if (odd >= 2 && odd <= 4)
            yes++;

        if (yes == 3)
            printf("BEST\n");
        else if (yes == 2)
            printf("GOOD\n");
        else if (yes == 1)
            printf("NORMAL\n");
        else
            printf("BAD\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1169
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

