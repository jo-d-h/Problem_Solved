#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int r;
        scanf("%d", &r);

        for (int j = 0; j < r; j++)
        {
            char in[11] = {};
            scanf("%s", in);

            for (int k = 0; k < 10; k++)
            {
                if (in[k] == '.')
                {
                    printf("%s\n", in);
                    break;
                }
            }
        }
    }
}

/**************************************************************
	Problem: 1342
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

