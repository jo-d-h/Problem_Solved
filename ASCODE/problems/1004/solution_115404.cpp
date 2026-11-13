#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int tcase;
    scanf("%d", &tcase);

    for (int T = 0; T < tcase; T++)
    {
        int t;
        scanf("%d", &t);

        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        char result[1001];
        int index = 0;

        for (int i = 1; i <= t; i++)
        {
            if (i % a == 0 || a == 1)
            {
                result[index++] = 'A';
            }
            if (i % b == 0 || b == 1)
            {
                result[index++] = 'B';
            }
            if (i % c == 0 || c == 1)
            {
                result[index++] = 'C';
            }
        }

        result[index] = '\0';

        printf("%s\n", result);
    }


    return 0;
}
/**************************************************************
	Problem: 1004
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

