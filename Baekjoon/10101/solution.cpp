#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
    int a1, a2, a3;
    scanf("%d %d %d", &a1, &a2, &a3);

    if (a1 + a2 + a3 != 180)
        printf("Error");
    else if (a1 == a2 && a2 == a3)
        printf("Equilateral");
    else if (a1 == a2 || a2 == a3 || a3 == a1)
        printf("Isosceles");
    else
        printf("Scalene");

    return 0;
}
