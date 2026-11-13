#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct data
{
    char word[21];
    int score; //점수
};

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    struct data plus[15];

    for (int i = 0; i < m; i++)
    {
        //감점할 단어, 점수 입력
        scanf("%s %d", plus[i].word, &plus[i].score);
    }

    //n개 문장 입력
    for (int i = 0; i < n; i++)
    {
        int score = 0; //점수
        char word[21];

        while (1)
        {
            scanf("%s", word); //단어 입력

            if (strcmp(word, ".") == 0) 
            {
                break;
            }

            int is_plus = 0;

            for (int j = 0; j < m; j++) 
            {
                if (strcmp(word, plus[j].word) == 0) 
                {
                    score += plus[j].score;
                    is_plus = 1;
                    break;
                }
            }
            if (is_plus) 
                continue;

            int is_normal = 1;

            for (int j = 0; word[j]; j++) 
            {
                if (!islower(word[j])) 
                {
                    is_normal = 0;
                    break;
                }
            }

            if (is_normal) 
            {
                score += strlen(word) / 2;
            }
            else 
            {
                score -= 2;
            }
        }

        if (score >= 100) 
        {
            printf("Perfect!\n");
        }

        else if (score < 60) 
        {
            printf("Fail!\n");
        }

        else 
        {
            printf("%d\n", score);
        }
    }

    return 0;
}
/**************************************************************
	Problem: 1425
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

