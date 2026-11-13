#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int n1, n2;
        scanf("%d %d", &n1, &n2);

        int reverse_1 = 0;

        while (n1 > 0)
        {
            reverse_1 = reverse_1 * 10 + n1 % 10;
            n1 /= 10;
        }

        int reverse_2 = 0;

        while (n2 > 0)
        {
            reverse_2 = reverse_2 * 10 + n2 % 10;
            n2 /= 10;
        }

        int sum = reverse_1 + reverse_2;

        while (sum >= 100)
        {
            int new_sum = 1;

            while (sum > 0)
            {
                int tens = sum % 10;
                
                if (tens != 0)
                    new_sum *= tens;

                sum /= 10;
            }

            sum = new_sum;
        }
        printf("%d\n", sum);
    }

    return 0;
}
/**************************************************************
	Problem: 1093
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

