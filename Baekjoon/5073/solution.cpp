#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
    int a1, a2, a3;
    while (1)
    {
        scanf("%d %d %d", &a1, &a2, &a3);

        if (a1 == 0 && a2 == 0 && a3 == 0)
            break;
        else if (a1 >= a2 + a3 || a2 >= a3 + a1 || a3 >= a1 + a2)
            printf("Invalid\n");
        else if (a1 == a2 && a2 == a3)
            printf("Equilateral\n");
        else if (a1 == a2 || a2 == a3 || a3 == a1)
            printf("Isosceles\n");
        else
            printf("Scalene\n");
    }

    return 0;
}
