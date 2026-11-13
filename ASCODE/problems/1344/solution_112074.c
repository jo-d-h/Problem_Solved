#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int calculate(char n1[], char n2[])
{
    int sum = 0;

    for (int i = 0; i < 30; i++)
    {
        int value_1 = (i < strlen(n1)) ? n1[i] - 'A': 12;
        int value_2 = (i < strlen(n2)) ? n2[i] - 'A': 12;

        int difference = value_1 - value_2;

        if (difference < 0)
        {
            difference = -difference;
        }
        sum += difference;
    }
    return sum;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char n1[31] = {};
        char n2[31] = {};

        scanf("%s", &n1);
        scanf("%s", &n2);

        if (strcmp(n1, n2) == 0) 
        {
            printf("Same person!\n");
        }
        else 
        {
            int result = calculate(n1, n2);
            printf("%d\n", result);
        }

    }

    return 0;
}
/**************************************************************
	Problem: 1344
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

