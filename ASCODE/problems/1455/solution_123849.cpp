#include <iostream>
#include <vector>
#include <string>
using namespace std;

int m, n;
vector<string> maze;
vector<vector<int>> visited;
bool found = false;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

void dfs(int x, int y) 
{
    if (maze[x][y] == 'E') 
    {
        found = true;
        return;
    }

    visited[x][y] = 1;

    for (int d = 0; d < 4; d++) 
    {
        int nx = x + dx[d];
        int ny = y + dy[d];

        if (nx >= 0 && ny >= 0 && nx < m && ny < n) 
        {
            if (!visited[nx][ny] && (maze[nx][ny] == '-' || maze[nx][ny] == 'E')) 
            {
                dfs(nx, ny);
                if (found) 
                    return;
            }
        }
    }
}

int main() 
{
    int t;
    cin >> t;

    for (int T = 0; T < t; T++)
    {
        cin >> m >> n;

        maze.resize(m);
        visited.assign(m, vector<int>(n, 0));

        int sx = -1, sy = -1;

        for (int i = 0; i < m; ++i) 
        {
            cin >> maze[i];

            for (int j = 0; j < n; ++j) 
            {
                if (maze[i][j] == 'S') 
                {
                    sx = i;
                    sy = j;
                }
            }
        }

        found = false;

        dfs(sx, sy);
        cout << (found ? "YES" : "NO") << endl;

        maze.clear();
        visited.clear();
    }

    return 0;
}

/**************************************************************
	Problem: 1455
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2032 kb
****************************************************************/

