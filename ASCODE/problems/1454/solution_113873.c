#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main()
{
    int arr[5][5];

    //입력
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            scanf("%d", &arr[x][y]);
        }
    }
    
    //지울 개수 입력
    int n;
    scanf("%d", &n);

    //지울거 입력
    int del;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &del);

        for (int x = 0; x < 5; x++)
        {
            for (int y = 0; y < 5; y++)
            {
                if (del == arr[x][y])
                {
                    arr[x][y] = 0;
                }
            }
        }
    }

    //몇줄 지웠는지 확인
    int count = 0;

    //가로
    for (int x = 0; x < 5; x++) 
    {
        int row = 1;
        for (int y = 0; y < 5; y++) 
        {
            if (arr[x][y] != 0) 
            {
                row = 0;
                break;
            }
        }

        if (row == 1) 
            count++;
    }

    //세로
    for (int y = 0; y < 5; y++) 
    {
        int col = 1;
        for (int x = 0; x < 5; x++) 
        {
            if (arr[x][y] != 0) 
            {
                col = 0;
                break;
            }
        }
        if (col == 1) 
            count++;
    }

    // '\'대각선
    int diag1 = 1;
    for (int i = 0; i < 5; i++) 
    {
        if (arr[i][i] != 0) 
        {
            diag1 = 0;
            break;
        }
    }
    if (diag1 == 1) 
        count++;

    //'/'대각선
    int diag2 = 1;
    for (int i = 0; i < 5; i++) 
    {
        if (arr[i][4 - i] != 0) 
        {
            diag2 = 0;
            break;
        }
    }
    if (diag2 == 1) 
        count++;

    printf("%d\n", count);

    return 0;
}
/**************************************************************
	Problem: 1454
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

