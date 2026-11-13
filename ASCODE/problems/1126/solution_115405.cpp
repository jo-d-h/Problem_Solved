#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int arr[20][20];
    int black = 0, white = 0;

    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            scanf("%d", &arr[i][j]);

            if (arr[i][j] == 1)
                black++;
            else if (arr[i][j] == 2)
                white++;
        }
    }

    printf("%d %d\n", black, white);


    return 0;
}
/**************************************************************
	Problem: 1126
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

