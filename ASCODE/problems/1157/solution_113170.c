#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
    int w, h;
    scanf("%d %d", &w, &h);

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (i < 2 || i >= h - 2)
                printf("*");

            else
            {
                if (j < 2 || j >= w - 2)
                    printf("*");
                else
                    printf(" ");
            }
        }

        printf("\n");
    }
}
/**************************************************************
	Problem: 1157
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

