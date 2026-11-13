#pragma warning (disable:4996)
#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int x, y;
        char calc;

        scanf("%d %c %d", &x, &calc, &y);

        if (calc == '+')
            printf("%d\n", x + y);
        else if (calc == '-')
            printf("%d\n", x - y);
        else if (calc == 'x')
            printf("%d\n", x * y);
        else if (calc == '%')
        {
            if (y == 0)
            {
                printf("Mission Impossible\n");
            }
            else
            {
                printf("%d\n",x % y);
            }
        }

        else if (calc == '/')
        {
            if (y == 0)
            {
                printf("Mission Impossible\n");
            }
            else
            {
                printf("%.5f\n", (double)x / y);
            }
        }
        else
            printf("Mission Impossible\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1199
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

