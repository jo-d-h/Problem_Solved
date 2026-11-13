#include <stdio.h>
#pragma warning (disable:4996)

int main() 
{
    while (1)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if (a == 0 && b == 0 && c == 0 && d == 0)
            break;

        int real = (a * c) - (b * d);
        int imag = (a * d) + (b * c);

        if (imag == 0)
        {
            printf("Real\n");
        }
        else if (real == 0)
            printf("Imaginary\n");
        else
            printf("Complex\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1092
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

