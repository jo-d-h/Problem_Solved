#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
    int n, b, i = 0;
    scanf("%d %d", &n, &b);

    char result[30] = {};

    while (n != 0)
    {
        int tmp = n % b;

        if (tmp > 9) //b진법으로 변환(A:10 ~ Z:35)
            result[i] = tmp + 55;
        else //문자 '0' = 10진법에서 48
            result[i] = tmp + 48;

        n = n / b;
        i++;
    }

    for (int i = strlen(result) - 1; i >= 0; i--)
    {
        printf("%c", result[i]);
    }
}