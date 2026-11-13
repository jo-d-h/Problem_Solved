#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int ds = 0, hj = 0, draw = 0;

        if (a == b && c == d)
        {
            if (a < c)
                ds = 1;
            else if (c < a)
                hj = 1;
            else
                draw = 1;
        }

        else if (a == b)
        {
            ds = 1;
        }
        else if (c == d)
        {
            hj = 1;
        }
        else
        {
            if (b > a)
            {
                int tmp = a;
                a = b;
                b = tmp;
            }
            
            if (d > c)
            {
                int tmp = c;
                c = d;
                d = tmp;
            }

            if ((a - b) < (c - d))
                ds = 1;
            else if ((a - b) > (c - d))
                hj = 1;
            else
                draw = 1;
        }

        if (ds)
            printf("Kim DS wins\n");
        if (hj)
            printf("Yoo HJ wins\n");
        if (draw)
            printf("Draw\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1288
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

