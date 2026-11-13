#pragma warning(disable:4996)
#include <stdio.h>
int main(void)
{
    int t = 0, x, o, y, i = 0;
    int count = 0;
    char arr[81];

    scanf("%d", &t);

    for (int q = 0; q < t; q++)
    {
        scanf("%d %d", &x, &y);

        scanf("%s", arr);

        o = 0;
        while (arr[o] != 0)
            o++;


        for (int p = 0; p < o; p++)
        {

            if (arr[p] == '9' || arr[p] == '0')
            {
                count = 0;
                break;
            }

            if (arr[p] == '1')
            {
                y++;
                count++;
            }
            else if (arr[p] == '2')
            {
                x++;
                y++;
                count++;
            }

            else if (arr[p] == '3')
            {
                x++;
                count++;
            }

            else if (arr[p] == '4')
            {
                x++;
                y--;
                count++;
            }
            else if (arr[p] == '5')
            {
                y--;
                count++;
            }
            else if (arr[p] == '6')
            {
                x--;
                y--;
                count++;
            }
            else if (arr[p] == '7')
            {
                x--;
                count++;
            }
            else if (arr[p] == '8')
            {
                x--;
                y++;
                count++;
            }
        }

        if (count > 0)
            printf("%d %d\n", x, y);
        else if (count == 0)
            printf("WRONG!\n");

        count = 0;
    }

    return 0;
}
/**************************************************************
	Problem: 1162
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

