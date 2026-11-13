#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

struct data 
{
    char word[21];
    int score;
};

int main() 
{
    int p, n;
    scanf("%d %d", &p, &n);

    struct data keywords[15];
    for (int i = 0; i < p; i++) 
    {
        scanf("%s %d", keywords[i].word, &keywords[i].score);
    }

    for (int i = 0; i < n; i++) 
    {
        char word[21];
        int score = 0;

        while (1) 
        {
            scanf("%s", word);

            if (strcmp(word, ".") == 0)
                break;

            int len = strlen(word);

            int is_keyword = 0;

            for (int j = 0; j < p; j++) 
            {
                if (strcmp(word, keywords[j].word) == 0) 
                {
                    score += keywords[j].score;
                    is_keyword = 1;
                    break;
                }
            }

            if (!is_keyword && len % 4 == 0) 
            {
                score += 2;
            }
        }

        if (score >= 100) 
        {
            printf("Perfect!\n");
        }
        else 
        {
            printf("%d\n", score);
        }
    }

    return 0;
}
/**************************************************************
	Problem: 1346
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

