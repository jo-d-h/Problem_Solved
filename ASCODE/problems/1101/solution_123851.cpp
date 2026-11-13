#include <iostream>
#include <vector>
using namespace std;

int dx[8] = { -1,-1,-1, 0, 0, 1, 1, 1 };
int dy[8] = { -1, 0, 1,-1, 1,-1, 0, 1 };

int main() 
{
    int t;
    cin >> t;

    for (int T = 0; T < t; T++)
    {
        int x, y;
        cin >> x >> y;

        vector<string> map(y);

        for (int i = 0; i < y; i++) 
        {
            cin >> map[i];
        }

        vector<string> result = map;

        for (int i = 0; i < y; i++) 
        {
            for (int j = 0; j < x; j++) 
            {
                if (map[i][j] == '*') 
                    continue;

                int count = 0;

                for (int d = 0; d < 8; d++) 
                {
                    int ni = i + dy[d];
                    int nj = j + dx[d];

                    if (ni >= 0 && ni < y && nj >= 0 && nj < x && map[ni][nj] == '*') 
                    {
                        count++;
                    }
                }

                if (count == 0)
                    result[i][j] = '.';

                else
                    result[i][j] = '0' + count;
            }
        }

        for (int i = 0; i < y; ++i) 
        {
            cout << result[i] << endl;
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1101
	Language: C++
	Result: Accepted
	Time:118 ms
	Memory:2032 kb
****************************************************************/

