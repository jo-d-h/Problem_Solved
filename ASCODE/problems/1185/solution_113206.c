#pragma warning (disable:4996)
#include<stdio.h>
#include <ctype.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int score;
        scanf("%d", &score);

        if (score == 0)
            printf("No score.\n");
        else if (score > 0 && score < 60)
            printf("You have to study hard.\n");
        else if (score >= 60 && score < 80)
            printf("You did a good job.\n");
        else if (score >= 80 && score < 100)
            printf("You are excellent.\n");
        else if (score == 100)
            printf("You are perfect!\n");
    }


    return 0;
}
/**************************************************************
	Problem: 1185
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

