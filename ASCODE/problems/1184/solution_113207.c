#pragma warning (disable:4996)
#include<stdio.h>
#include <ctype.h>

int main()
{
    int amount;
    scanf("%d", &amount);

    int remain = amount;

    int fiveh = remain / 500;
    remain %= 500;

    int oneh = remain / 100;
    remain %= 100;

    int fifty = remain / 50;

    printf("500:%d 100:%d 50:%d\n", fiveh, oneh, fifty);

    return 0;
}
/**************************************************************
	Problem: 1184
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

