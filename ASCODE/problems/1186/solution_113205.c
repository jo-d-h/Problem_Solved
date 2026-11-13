#pragma warning (disable:4996)
#include<stdio.h>
#include <ctype.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        char A, B, C;

        scanf("%d %d %d", &a, &b, &c);

        if (a >= 65 && a <= 90 && b >= 65 && b <= 90 && c >= 65 && c <= 90)
            printf("%c%c%c\n", (char)a, (char)b, (char)c);
        else
            printf("No Uppercase!\n");
    }


    return 0;
}
/**************************************************************
	Problem: 1186
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

