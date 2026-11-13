#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

struct wordValue
{
    char word[20];
    int dollar;
};

int main()
{
    struct wordValue list[1000];
    int a = 0, b = 0, rcount = 0, c, count = 0;
    char word1[20];
    unsigned long long result[17] = {
        0,
    };

    scanf("%d %d", &a, &b);
    for (int i = 0; i < a; i++)
    {
        scanf("%s", &list[i].word);
        scanf("%d", &list[i].dollar);
    }
    while (1)
    {
        if (rcount == b)
        {
            break;
        }
        scanf("%s", word1);
        int u = strlen(word1);
        if (rcount != b)
        {
            if (word1[0] == '.')
            {
                rcount++;
            }
            else
            {
                for (c = 0; c < a; c++)
                {
                    if (u == strlen(list[c].word))
                    {
                        for (int i = 0; i < u; i++)
                        {
                            if (word1[i] == list[c].word[i])
                            {
                                count++;
                            }
                        }
                        if (count == u)
                        {
                            result[rcount] += list[c].dollar;
                        }
                        count = 0;
                    }
                }
            }
        }
    }
    for (int i = 0; i < b; i++)
    {
        printf("%llu\n", result[i]);
    }
    return 0;
}

/**************************************************************
	Problem: 1306
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

