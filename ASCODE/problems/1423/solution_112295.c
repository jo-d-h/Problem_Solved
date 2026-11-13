#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#define MAX_N 50

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        char matrix[MAX_N][MAX_N + 1];
        char word[MAX_N + 1];

        for (int j = 0; j < n; j++) // 행렬 입력
        {
            scanf("%s", matrix[j]);
        }

        scanf("%s", word);
        int word_len = strlen(word);
        int found = 0; // 찾았는지

        // 가로 검사
        for (int r = 0; r < n; r++)
        {
            if (found) 
                break;
            for (int c = 0; c <= n - word_len; c++)
            {
                int match = 1;
                for (int k = 0; k < word_len; k++)
                {
                    if (matrix[r][c + k] != word[k])
                    {
                        match = 0;
                        break;
                    }
                }
                if (match)
                {
                    found = 1;
                    break;
                }
            }
        }

        // 세로 검사
        for (int c = 0; c < n; c++)
        {
            if (found) 
                break;
            for (int r = 0; r <= n - word_len; r++)
            {
                int match = 1;
                for (int k = 0; k < word_len; k++)
                {
                    if (matrix[r + k][c] != word[k])
                    {
                        match = 0;
                        break;
                    }
                }
                if (match)
                {
                    found = 1;
                    break;
                }
            }
        }

        if (found)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1423
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

