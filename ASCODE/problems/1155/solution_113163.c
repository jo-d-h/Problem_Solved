#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
    int now = 0;
    while (1)
    {
        now++;

        int n;
        scanf("%d", &n);

        if (n == 0)
            break;

        int score;
        int A = 0, B = 0, C = 0, D = 0, F = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &score);

            score = score / 10;

            if (score >= 9)
                A++;
            else if (score == 8)
                B++;
            else if (score == 7)
                C++;
            else if (score == 6)
                D++;
            else
                F++;
        }

        printf("<%d>\n", now);
        printf("A : %d\n", A);
        printf("B : %d\n", B);
        printf("C : %d\n", C);
        printf("D : %d\n", D);
        printf("F : %d\n\n", F);
    }

    return 0;
}
/**************************************************************
	Problem: 1155
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

