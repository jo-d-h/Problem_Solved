#pragma warning (disable:4996)
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() 
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        char word_1[21];
        char word_2[21];

        char alpha_1[26] = { 0 };
        char alpha_2[26] = { 0 };

        scanf("%s %s", word_1, word_2);

        int len_1 = strlen(word_1);
        int len_2 = strlen(word_2);

        if (len_1 != len_2)
        {
            printf("Different size\n");
            continue;
        }

        for (int i = 0; i < len_1; i++)
        {
            word_1[i] = tolower(word_1[i]);
            word_2[i] = tolower(word_2[i]);

            int tmp_1 = word_1[i] - 'a';
            int tmp_2 = word_2[i] - 'a';

            alpha_1[tmp_1]++;
            alpha_2[tmp_2]++;
        }

        int annergram = 1;

        for (int i = 0; i < 26; i++)
        {
            if (alpha_1[i] != alpha_2[i])
            {
                annergram = 0;
                break;
            }
        }

        if (annergram)
            printf("True\n");
        else
            printf("False\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1490
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

