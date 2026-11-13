#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() 
{
    int n, m; //n : 학생, m : 교수
    int big = 0, small = 0;
    scanf("%d %d", &n, &m);

    while (n >= 45)
    {
        n = n - 45;
        big++;
    }

    if (n >= 26)
        big++;
    else if (n > 0 && n <= 25)
        small++;

    if (m >= 15)
        small++;

    if (big > 0)
    {
        printf("Big bus : %d\n", big);
    }
    if (small > 0)
    {
        printf("Small bus : %d\n", small);
    }
}

/**************************************************************
	Problem: 1439
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

