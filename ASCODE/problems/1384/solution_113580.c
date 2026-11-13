#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char str[101];
        scanf("%s", str);

        int len = strlen(str);

        if (len % 2 == 0)
        {
            printf("%c%c\n", str[0], str[len - 1]);

        }

        else
        {
            printf("%c%c%c\n", str[0],str[len / 2], str[len - 1]);
        }
    }

    return 0;
}
/**************************************************************
	Problem: 1384
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

