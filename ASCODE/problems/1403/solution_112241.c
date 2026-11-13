#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
    int w;
    scanf("%d", &w);

    if (w % 2 == 0 && w > 2)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
/**************************************************************
	Problem: 1403
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

