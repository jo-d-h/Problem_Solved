#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int m, s;
    scanf("%d %d", &m, &s);

    int x, y;
    x = m / s;
    y = m % s;
    
    if (m < s)
        printf("Can not buy.\n");
    else
        printf("%d %d\n", x, y);

    return 0;
}
/**************************************************************
	Problem: 1364
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

