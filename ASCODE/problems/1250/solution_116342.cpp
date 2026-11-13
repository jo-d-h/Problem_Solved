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

        int new_nums = original + reverse;
        
        if (palindrome(new_nums))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1250
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

