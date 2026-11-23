#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> board(n);

    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }

    int minChange = 64;

    for (int i = 0; i <= n - 8; i++) 
    {
        for (int j = 0; j <= m - 8; j++) 
        {
            int cnt1 = 0, cnt2 = 0;

            for (int x = 0; x < 8; x++) 
            {
                for (int y = 0; y < 8; y++) 
                {
                    if ((x + y) % 2 == 0) 
                    {
                        if (board[i + x][j + y] != 'W') 
                            cnt1++;

                        if (board[i + x][j + y] != 'B') 
                            cnt2++;
                    }

                    else 
                    {
                        if (board[i + x][j + y] != 'B') 
                            cnt1++;

                        if (board[i + x][j + y] != 'W') 
                            cnt2++;
                    }
                }
            }

            minChange = min({ minChange, cnt1, cnt2 });
        }
    }

    cout << minChange << endl;

    return 0;
}
