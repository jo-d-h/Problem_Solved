#pragma warning (disable:4996)
#include <iostream>
using namespace std;

int main() 
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    int n;
    int del_arr[9];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> del_arr[i];
    }

    for (int a = 0; a < n; a++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (arr[i][j] == del_arr[a])
                    arr[i][j] = 0;
            }
        }
    }

    //빙고 체크
    int bingo = 0;

    //가로
    for (int i = 0; i < 3; i++)
    {
        if (arr[i][0] == 0 && arr[i][1] == 0 && arr[i][2] == 0)
            bingo++;
    }
    //세로
    for (int i = 0; i < 3; i++)
    {
        if (arr[0][i] == 0 && arr[1][i] == 0 && arr[2][i] == 0)
            bingo++;
    }
    //대각선1
    if (arr[0][0] == 0 && arr[1][1] == 0 && arr[2][2] == 0)
        bingo++;
    //대각선2
    if (arr[0][2] == 0 && arr[1][1] == 0 && arr[2][0] == 0)
        bingo++;

    cout << bingo << endl;

    return 0;
}
/**************************************************************
	Problem: 1117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

