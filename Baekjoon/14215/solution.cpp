#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
    int a, b, c;
    int temp, sum;

    scanf("%d %d %d", &a, &b, &c);

    if (a >= b) 
    {
        temp = b;
        b = a;
        a = temp;
    }
    if (b >= c) 
    {
        temp = c;
        c = b;
        b = temp;
    }
    if (a >= b) 
    {
        temp = b;
        b = a;
        a = temp;
    }

    sum = a + b;

    if (c < sum) 
    {
        sum += c;
    }

    else sum += sum - 1;

    printf("%d\n", sum);

    return 0;
}