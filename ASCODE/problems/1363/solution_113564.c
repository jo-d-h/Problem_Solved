#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int c;
    scanf("%d", &c);

    if (a == 0)
        printf("Cook start->AM0:%d\n", b);
    else if (a >= 1 && a <= 11)
        printf("Cook start->AM%d:%d\n", a, b);
    else if (a == 12)
        printf("Cook start->PM12:%d\n", b);
    else if (a >= 13 && a <= 23)
        printf("Cook start->PM%d:%d\n", a - 12, b);

    int minute = a * 60 + b + c;
    int h = (minute / 60) % 24;
    int m = minute % 60;

    if (h == 0)
        printf("Cook end->AM0:%d\n", m);
    else if (h >= 1 && h <= 11)
        printf("Cook end->AM%d:%d\n", h, m);
    else if (h == 12)
        printf("Cook end->PM12:%d\n", m);
    else if (h >= 13 && h <= 23)
        printf("Cook end->PM%d:%d\n", h - 12, m);

    return 0;
}
/**************************************************************
	Problem: 1363
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

