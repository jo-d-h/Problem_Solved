#pragma warning (disable:4996)
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    double discriminant = (b * b) - 4 * a * c;

    if (discriminant == 0) //중근
        printf("%.4f\n", (double)-b / (2 * a));

    else if (discriminant > 0) //실근
    {
        double SU1 = (-b + (sqrt)(b * b - 4 * a * c)) / (2 * a);
        double SU2 = (-b - (sqrt)(b * b - 4 * a * c)) / (2 * a);

        if (SU1 > SU2)
        {
            printf("%.4f %.4f\n", SU1, SU2);
        }
        else
            printf("%.4f %.4f\n", SU2, SU1);
    }

    else //허근
    {
        printf("imaginary\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1061
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1132 kb
****************************************************************/

