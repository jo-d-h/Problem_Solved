#include <iostream>
using namespace std;

const int SIZE = 19;
int board[SIZE][SIZE];

bool check(int x, int y, int dx, int dy, int color) 
{
    int cnt = 1;

    for (int i = 1; i < 5; i++) 
    {
        int nx = x + dx * i;
        int ny = y + dy * i;

        if (nx < 0 || ny < 0 || nx >= SIZE || ny >= SIZE)
            return false;

        if (board[nx][ny] != color)
            return false;

        cnt++;
    }

    int before_x = x - dx;
    int before_y = y - dy;
    if (before_x >= 0 && before_y >= 0 && before_x < SIZE && before_y < SIZE) 
    {
        if (board[before_x][before_y] == color)
            return false;
    }

    int after_x = x + dx * 5;
    int after_y = y + dy * 5;
    if (after_x >= 0 && after_y >= 0 && after_x < SIZE && after_y < SIZE) 
    {
        if (board[after_x][after_y] == color)
            return false;
    }

    return cnt == 5;
}

string solve() 
{
    for (int i = 0; i < SIZE; i++) 
    {
        for (int j = 0; j < SIZE; j++) 
        {
            if (board[i][j] == 0) 
                continue;

            int color = board[i][j];

            int dx[] = { 0, 1, 1, 1 };
            int dy[] = { 1, 0, 1, -1 };

            for (int d = 0; d < 4; d++) 
            {
                if (check(i, j, dx[d], dy[d], color)) 
                {
                    return (color == 1 ? "Black wins!" : "White wins!");
                }
            }
        }
    }

    return "Yet";
}

int main() 
{
    int t;
    cin >> t;

	for (int T = 0; T < t; T++)
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                cin >> board[i][j];
            }
        }

        cout << solve() << '\n';
    }

    return 0;
}

/**************************************************************
	Problem: 1174
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

