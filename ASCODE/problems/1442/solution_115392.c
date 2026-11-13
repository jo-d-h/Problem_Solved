#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() 
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int w, h;
        scanf("%d %d", &w, &h);

        char su[11][11];

        for (int i = 0; i < h; i++)
        {
            scanf("%s", su[i]);
        }

        int yes = 1;

        //가로
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w / 2; j++)
            {
                if (su[i][j] != su[i][w - 1 - j])
                {
                    yes = 0;
                    break;
                }
            }
        }

        //세로
        if (yes)
        {
            for (int j = 0; j < w; j++)
            {
                for (int i = 0; i < h / 2; i++)
                {
                    if (su[i][j] != su[h - 1 - i][j])
                    {
                        yes = 0;
                        break;
                    }
                }
            }
        }

        if (yes)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1442
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

