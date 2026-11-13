#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int palindrome(int num)
{
    int original = num;
    int reverse = 0;

    while (num > 0)
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    if (reverse == original)
        return 1;
    else
        return 0;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int num;
        scanf("%d", &num);

        int reverse = 0;
        int original = num;

        while (num > 0)
        {
            reverse = reverse * 10 + num % 10;
            num /= 10;
        }

        if (original == reverse)
            printf("Same!\n");
        else
        {
            if (original > reverse)
                printf("%d\n", original - reverse);
            else
                printf("%d\n", reverse - original);
        }
    }

    return 0;
}
/**************************************************************
	Problem: 1508
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

