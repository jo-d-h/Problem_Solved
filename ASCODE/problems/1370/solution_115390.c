#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() 
{
    char su[6];
    scanf("%s", su);

    int len = strlen(su);
    int yes = 1;

    for (int i = 0; i < len / 2; i++)
    {
        if (su[i] != su[len - 1 - i])
        {
            yes = 0;
            break;
        }
    }

    if (yes)
        printf("Palindrome!\n");
    else
        printf("No palindrome!\n");
    return 0;
}

/**************************************************************
	Problem: 1370
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

