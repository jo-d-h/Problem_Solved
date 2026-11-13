#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int a, b, c, d;

        scanf("%d.%d.%d.%d", &a, &b, &c, &d);

        int ip[4] = { a, b, c, d };

        for (int i = 0; i < 4; i++) 
        {
            int num = ip[i];
            int mask = 128;

            for (int j = 0; j < 8; j++) 
            {
                if (num >= mask) 
                {
                    printf("1");
                    num -= mask;
                }

                else 
                {
                    printf("0");
                }
                mask /= 2;
            }
        }

        printf("\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1253
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

