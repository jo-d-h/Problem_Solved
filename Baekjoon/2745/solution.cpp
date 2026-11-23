#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char n[100] = {};
    int b = 0;
    int word, result = 0;

    scanf("%s %d", n, &b);

    for (int i = 0; i < strlen(n); i++)
    {
        word = 0;

        if (n[i] >= 'A' && n[i] <= 'Z')
            word = n[i] - 55;

        else if (n[i] >= '0' && n[i] <= '9')
            word = n[i] - '0';

        result = result * b + word;
    }

    printf("%d", result);
}