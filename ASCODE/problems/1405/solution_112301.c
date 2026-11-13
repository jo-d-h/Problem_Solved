#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

#define MAX_WORDS 200
#define MAX_LENGTH 201

char words[MAX_WORDS][MAX_LENGTH];
char prefix[MAX_LENGTH];

int main()
{
    int t;
    scanf("%d", &t);

    for (int c = 0; c < t; c++)
    {
        int n;
        scanf("%d", &n);

        

        for (int i = 0; i < n; i++)
        {
            scanf("%s", words[i]);
        }

        
        strcpy(prefix, words[0]); // 첫 번째 단어를 기준으로
        int prefix_length = strlen(prefix);

        for (int i = 1; i < n; i++)
        {
            int j = 0;
            while (j < prefix_length && words[i][j] && words[i][j] == prefix[j])
            {
                j++;
            }
            prefix[j] = '\0';
            prefix_length = j;

            if (prefix_length == 0) 
            {
                break;
            }
        }

        if (prefix_length > 0)
            printf("%s\n", prefix);
        else
            printf("No common prefix!\n");
    }

    return 0;
}
/**************************************************************
	Problem: 1405
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1160 kb
****************************************************************/

