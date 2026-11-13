#pragma warning(disable:4996)
#include<stdio.h>
#include <string.h>

int main()
{
    int t;
    int sum = 0;
    int age[16] = {};
    char name[16][16] = {};
    char posits[16][16] = {};

    int agemax = 0;
    int agemin = 100;

    int max = 0;
    int min = 0;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%s %d %s", name[i], &age[i], posits[i]);
        sum += age[i];

        if (agemax < age[i])
        {
            agemax = age[i];
            max = i;
        }

        if (age[i] < agemin)
        {
            agemin = age[i];
            min = i;
        }
    }

    printf("average age : %d\n", sum / t);
    printf("the oldest : %s %s\n", name[max], posits[max]);
    printf("the youngest : %s %s\n", name[min], posits[min]);
}
/**************************************************************
	Problem: 1297
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

