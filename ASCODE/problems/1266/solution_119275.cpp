#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

int main() 
{
    int T;
    scanf("%d", &T);

    for (int test = 1; test <= T; test++) 
    {
        char a[105], b[105];
        scanf("%s %s", a, b);

        int lenA = strlen(a);
        int lenB = strlen(b);

        int maxLen;
        
        if (lenA > lenB)
        {
			maxLen = lenA;
		}

		else
		{
			maxLen = lenB;
		}

        int carry = 0;

        char result[110] = { 0 };

        for (int i = 0; i < maxLen; i++) 
        {
            int bitA = 0, bitB = 0;

            if (lenA - 1 - i >= 0)
                bitA = a[lenA - 1 - i] - '0';

            if (lenB - 1 - i >= 0)
                bitB = b[lenB - 1 - i] - '0';

            int sum = bitA + bitB + carry;

            result[maxLen - i] = (sum % 10) + '0';
            carry = sum / 10;
        }

        if (carry == 1)
        {
            result[0] = '1';
            printf("%s\n", result);
        }
        else
        {
            printf("%s\n", result + 1);
        }

    }

    return 0;
}

/**************************************************************
	Problem: 1266
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

