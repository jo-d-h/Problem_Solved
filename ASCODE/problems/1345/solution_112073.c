#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main(void)
{
    int t = 0;
    scanf("%d", &t);

    for (int q = 0; q < t; q++)
    {
        int x = 0;
        int y = 0;
        scanf("%d %d", &x, &y);

        char arr[51];
        scanf("%s", arr);

        int len = strlen(arr);


        for (int p = 0; p < len; p++)
        {
            switch (arr[p])
            {
            case 'L':
                x--;
                break;
            case 'l':
                x--;
                break;

            case 'R':
                x++;
                break;
            case 'r':
                x++;
                break;

            case 'U':
                y++;
                break;
            case 'u':
                y++;
                break;

            case 'D':
                y--;
                break;
            case 'd':
                y--;
                break;

            }
        }
        if (x < 0 || y < 0)
        {
            printf("Incorrect Position!\n");
        }
        else
        {
            printf("%d %d\n", x, y);
        }

    }

    return 0;
}
/**************************************************************
	Problem: 1345
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1124 kb
****************************************************************/

