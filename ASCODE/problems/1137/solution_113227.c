#include <stdio.h>
#pragma warning (disable:4996)

int main() 
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        double input;
        char unit[3];
        scanf("%lf %s", &input, unit);

        if (unit[0] == 'k' && unit[1] == 'g')
            printf("%d %.4f lb\n", i, input * 2.2046);

        else if (unit[0] == 'l' && unit[1] == NULL)
            printf("%d %.4f g\n", i, input * 0.2642);

        else if (unit[0] == 'l' && unit[1] == 'b')
            printf("%d %.4f kg\n", i, input * 0.4536);

        else if (unit[0] == 'g' && unit[1] == NULL)
            printf("%d %.4f l\n", i, input * 3.7854);
    }

    return 0;
}
/**************************************************************
	Problem: 1137
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

