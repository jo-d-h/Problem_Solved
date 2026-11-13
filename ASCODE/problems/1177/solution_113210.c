#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 100)
        printf("Perfect! Congratulations!\n");
    else if (n >= 90 && n <= 99)
        printf("Very good!\n");
    else if (n >= 80 && n <= 89)
        printf("Good!\n");
    else if (n >= 70 && n <= 79)
        printf("Not bad!\n");
    else
        printf("Study hard!\n");

    return 0;
}
/**************************************************************
	Problem: 1177
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

