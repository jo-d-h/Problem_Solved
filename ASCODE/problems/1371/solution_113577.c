#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int x, y, a, b;
    scanf("%d %d %d %d", &x, &y, &a, &b);

    if (a <= x) //x 좌표가 지나감
        printf("PS\n");
    else if (b > y) //왼쪽
        printf("FR\n");
    else if (b < y) //오른쪽
        printf("FL\n");
    else //동일선상
        printf("FS\n");

    return 0;
}
/**************************************************************
	Problem: 1371
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

