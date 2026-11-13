#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int num[6] = {};
    int sum = 0;
    int vaild = 1;

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];

        if (num[i] < 1 || num[i] > 45)
            vaild = 0;
    }


    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (num[i] > num[j])
            {
                int tempo = num[j];
                num[j] = num[i];
                num[i] = tempo;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (num[i] == num[i + 1])
            vaild = 0;
    }

    if (vaild && sum >= 81 && sum <= 180)
    {
        for (int i = 0; i < 6; i++)
        {
            printf("%d ", num[i]);
        }
        printf("\n");
    }
    else if (vaild)
        printf("YES\n");
    else
        printf("BAD!\n");

    return 0;
}
/**************************************************************
	Problem: 1081
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

