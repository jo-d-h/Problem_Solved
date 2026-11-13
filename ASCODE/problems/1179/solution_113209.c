#pragma warning (disable:4996)
#include<stdio.h>

#define PHI 3.1415926535897

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (i != 0 && i % 3 == 0 || i / 10 == 3 || i % 10 == 3)
            printf("%d ", i);
    }

    return 0;
}
/**************************************************************
	Problem: 1179
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

