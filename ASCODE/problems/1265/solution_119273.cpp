#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

int main() 
{
    int N;
    scanf("%d", &N);

    for (int test = 1; test <= N; test++) 
    {
        char a[85], b[85];
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

        char result[90] = { 0 };

        for (int i = 0; i < maxLen; i++) 
        {
            int bitA = 0, bitB = 0;

            if (lenA - 1 - i >= 0)
                bitA = a[lenA - 1 - i] - '0';

            if (lenB - 1 - i >= 0)
                bitB = b[lenB - 1 - i] - '0';

            int sum = bitA + bitB + carry;

            result[maxLen - i] = (sum % 2) + '0';
            carry = sum / 2;
        }

        result[maxLen + 1] = '\0';

        if (carry == 1)
        {
            result[0] = '1';
        }
        else
        {
            for (int i = 0; i <= maxLen; i++)
                result[i] = result[i + 1];
        }

        int start = 0;
        while (result[start] == '0' && result[start + 1] != '\0') 
        {
            start++;
        }

        printf("%d %s\n", test, result + start);
    }

    return 0;
}

/**************************************************************
	Problem: 1265
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

