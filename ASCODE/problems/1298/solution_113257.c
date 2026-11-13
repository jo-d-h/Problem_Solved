#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int num;
    int sum = 0;

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &num);

        sum += num;
    }

    printf("%d\n%d", sum, sum / 7);

    return 0;
}
/**************************************************************
	Problem: 1298
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

