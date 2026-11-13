#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct data
{
    char word[21];
    int score; //점수
};

//대문자 -> 소문자 변환 함수
void to_low(char* str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
    }
}


int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    struct data minus[10];

    for (int i = 0; i < m; i++)
    {
        //감점할 단어, 점수 입력
        scanf("%s %d",minus[i].word, &minus[i].score);

        //대문자->소문자
        to_low(minus[i].word);
    }

    //n개 문장 입력
    for (int i = 0; i < n; i++)
    {
        int score = 0; //점수
        char word[21];
        int count = 0; //감점 제외 문장 수

        while (1)
        {
            scanf("%s", word); //단어 입력

            if (strcmp(word, ".") == 0) //마침표 만나면 종료
                break;

            to_low(word);

            int is_minus = 0; //감점인가?

            for (int j = 0; j < m; j++)
            {
                if (strcmp(word, minus[j].word) == 0)
                {
                    score -= minus[j].score;
                    is_minus = 1;
                    break;
                }
            }
                
            if (is_minus != 1)
            {
                int len = strlen(word);
                score += len * len;
                count++;
            }
        }

        if (score < 0)
            printf("Fail\n");
        else
            printf("%d\n", score / count);
    }

    
    return 0;
}
/**************************************************************
	Problem: 1134
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

