#pragma warning (disable:4996)
#include<stdio.h>
#include <math.h>

int main()
{
    unsigned int n;
    scanf("%u", &n);
    
    if (n % 2 == 0)
    {
        if (n % 3 == 0 || n % 7 == 0)
            printf("Magic\n");
        else
            printf("No Magic\n");
    }

    else
        printf("No Magic\n");


    return 0;
}
/**************************************************************
	Problem: 1187
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

