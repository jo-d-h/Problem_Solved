#pragma warning(disable:4996)
#include <stdio.h>

int main() 
{
    int t, n;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) 
    {
        scanf("%d", &n);

        for (int i = 0; i < n; i++) 
        {
            int len = 2 * i + 1;
            int space = n - i - 1;
            char ch = 'A';

            for (int j = 0; j < space; j++) 
                printf(" ");

            for (int k = 0; k < len; k++) 
            {
                printf("%c", ch);
                if (k < len / 2) 
                    ch++;
                else ch--;
            }
            printf("\n");
        }

        for (int i = n - 2; i >= 0; i--) 
        {
            int len = 2 * i + 1;
            int space = n - i - 1;
            char ch = 'A';

            for (int j = 0; j < space; j++) 
                printf(" ");

            for (int k = 0; k < len; k++) 
            {
                printf("%c", ch);
                if (k < len / 2) 
                    ch++;
                else ch--;
            }
            printf("\n");
        }
    }

    return 0;
}
/**************************************************************
	Problem: 1426
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

