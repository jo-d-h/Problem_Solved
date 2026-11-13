#pragma warning (disable:4996)
#include<stdio.h>
#include <ctype.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int a;
        scanf("%d", &a);

        printf("%c\n", (char)a);
    }

    return 0;
}
/**************************************************************
	Problem: 1192
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

