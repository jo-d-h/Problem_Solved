#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int arr[3][3];

        for (int x = 0; x < 3; x++)
        {
            for (int y = 0; y < 3; y++)
            {
                scanf("%d", &arr[x][y]);
            }
        }

        int is_magic = 1;

        for (int x = 0; x < 3; x++)
        {
            if (arr[0][x] + arr[1][x] + arr[2][x] != 15)
            {
                is_magic = 0;
            }
        }

        for (int x = 0; x < 3; x++)
        {
            if (arr[x][0] + arr[x][1] + arr[x][2] != 15)
            {
                is_magic = 0;
            }     
        }

        if (arr[0][0] + arr[1][1] + arr[2][2] != 15)
        {
            is_magic = 0;
        }

        if (arr[0][2] + arr[1][1] + arr[2][0] != 15)
        {
            is_magic = 0;
        }

        if (is_magic)
            printf("Magic Square!\n");
        else
            printf("No Magic Square!\n");

    }

    return 0;
}
/**************************************************************
	Problem: 1387
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

