#include <stdio.h>
#pragma warning(disable:4996)

int main() 
{
    int n, m, q;
    scanf("%d %d %d", &n, &m, &q);

    int row_add[1001];
    int col_add[1001];

    for (int i = 0; i < 1001; i++)
    {
        row_add[i] = 0;
        col_add[i] = 0;
    }

    for (int i = 0; i < q; i++)
    {
        char word;
        int a, b;
        scanf(" %c %d %d", &word, &a, &b);

        if (word == 'R')
        {
            row_add[a] += b;
        }
        else if (word == 'C')
        {
            col_add[a] += b;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d ", row_add[i] + col_add[j]);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1489
	Language: C++
	Result: Accepted
	Time:335 ms
	Memory:1120 kb
****************************************************************/

