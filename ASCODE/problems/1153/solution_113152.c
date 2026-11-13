#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
    while (1)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0)
            break;
        
        int d = (b * b) - (4 * a * c);

        if (a == 0)
            printf("NO!\n");
        else if (d > 0)
            printf("REAL\n");
        else if (d == 0)
            printf("MUL\n");
        else if (d < 0)
            printf("IMG\n");
    }
    

    return 0;
}
/**************************************************************
	Problem: 1153
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

