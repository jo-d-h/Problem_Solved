#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int num;
        scanf("%d", &num);

        int reverse = 0;
        int original = num;

        while (num > 0)
        {
            reverse = reverse * 10 + num % 10;
            num /= 10;
        }

        if (original > reverse)
            printf("%d\n", original);
        else
            printf("%d\n", reverse);

        

        
    }

    return 0;
}
/**************************************************************
	Problem: 1249
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

