#include <iostream>
#include <vector>
using namespace std;

int dx[] = { -1, -1, -1,  0, 0, 1, 1, 1 };
int dy[] = { -1,  0,  1, -1, 1,-1, 0, 1 };

int main() 
{
    int t;
    cin >> t;

    for (int T = 0; T < t; T++)
    {
        int m, n;
        cin >> m >> n;

        vector<string> map(m);
        vector<vector<char>> result(m, vector<char>(n, '0'));

        for (int i = 0; i < m; ++i)
            cin >> map[i];

        for (int i = 0; i < m; ++i) 
        {
            for (int j = 0; j < n; ++j) 
            {
                if (map[i][j] == '*') 
                {
                    result[i][j] = '*';

                    for (int d = 0; d < 8; ++d) 
                    {
                        int ni = i + dx[d];
                        int nj = j + dy[d];

                        if (ni >= 0 && ni < m && nj >= 0 && nj < n && result[ni][nj] == '0')
                            result[ni][nj] = '1';
                    }
                }
            }
        }

        for (int i = 0; i < m; ++i) 
        {
            for (int j = 0; j < n; ++j)
                cout << result[i][j];

            cout << endl;
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1131
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2032 kb
****************************************************************/

