#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>

int main() 
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        char n1[31];
        int i_n1[30] = {0};
        char n2[31];
        int i_n2[30] = {0};

        scanf("%s", n1);
        scanf("%s", n2);

        int len_n1 = strlen(n1);
        int len_n2 = strlen(n2);

        int max_len;

        if (len_n1 >= len_n2)
            max_len = len_n1;
        else
            max_len = len_n2;

        for (int i = 0; i < len_n1; i++)
        {
            i_n1[i] = 2 * (n1[i] - 'A') + 1;  
        }

        for (int i = 0; i < len_n2; i++)
        {
            i_n2[i] = 2 * (n2[i] - 'A') + 1;
        }

        int sum = 0;

        for (int i = 0; i < max_len; i++)
        {
            if (i_n1[i] >= i_n2[i])
                sum += (i_n1[i] - i_n2[i]);
            else
                sum += (i_n2[i] - i_n1[i]);
        }

        printf("%d\n", sum);
    }

    return 0;
}
/**************************************************************
	Problem: 1130
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

