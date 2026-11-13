#include <stdio.h>
#pragma warning(disable:4996)

char word[20000];

int main() 
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        scanf("%s", word);

        for (int i = 0; word[i] != NULL; i++)
        {
            word[i] ^= 32;
        }
        printf("%s\n", word);
    }

    return 0;
}
/**************************************************************
	Problem: 1033
	Language: C++
	Result: Accepted
	Time:707 ms
	Memory:1140 kb
****************************************************************/

