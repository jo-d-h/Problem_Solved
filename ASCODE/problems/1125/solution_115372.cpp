#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main() 
{
    int t;
    scanf("%d", &t);

    for (int T = 0; T < t; T++)
    {
        int arr[3][3];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        int what = 0;

        for (int i = 0; i < 3; i++)
        {
            if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
            {
                what = arr[i][0];
            }
            else if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
            {
                what = arr[0][i];
            }
        }

        if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
            {
            what = arr[1][1];
            }
        else if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
            {
            what = arr[1][1];
            }

        if (what == 0)
            printf("draw!\n");
        else
            printf("%d\n", what);

    }



    return 0;
}

/**************************************************************
	Problem: 1125
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

