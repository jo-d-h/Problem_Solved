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

        int result[210] = { 0 };

        for (int i = lenA - 1; i >= 0; i--) 
        {
            int digitA = a[i] - '0';
            for (int j = lenB - 1; j >= 0; j--) 
            {
                int digitB = b[j] - '0';

                result[i + j + 1] += digitA * digitB;
            }
        }

        for (int i = lenA + lenB - 1; i > 0; i--) 
        {
            if (result[i] >= 10) 
            {
                result[i - 1] += result[i] / 10;
                result[i] %= 10;
            }
        }

        int start = 0;

        while (start < lenA + lenB - 1 && result[start] == 0) 
        {
            start++;
        }

        if (start == lenA + lenB) 
        {
            printf("0\n");
        }

        else 
        {
            for (int i = start; i < lenA + lenB; i++) 
            {
                printf("%d", result[i]);
            }

            printf("\n");
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1267
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

