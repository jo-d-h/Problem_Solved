#include <iostream>
#include <string>
#include <queue>

using namespace std;

struct qelement
{
	int x, y;
	int depth; //이동 횟수
};

int dx[4] = { -1, 1, 0, 0 }; //x 이동
int dy[4] = { 0, 0, -1, 1 }; //y 이동

int main()
{
	int t;
	cin >> t;

	for (int T = 0; T < t; T++)
	{
		int n, m;
		cin >> n >> m;

		char arr[100][100];
		bool visit[100][100] = { false };

		queue <qelement> maze;

		int startX = -1, startY = -1;

		for (int N = 0; N < n; N++)
		{
			for (int M = 0; M < m; M++)
			{
				cin >> arr[N][M];

				if (arr[N][M] == 'S') //시작 점 저장
				{
					startX = N;
					startY = M;
				}
			}
		}

		maze.push({ startX, startY, 0 });
		visit[startX][startY] = true;

		int result = -1;

		while (!maze.empty()) //큐 비면 종료
		{
			qelement now = maze.front();
			maze.pop(); //큐에서 제거

			if (arr[now.x][now.y] == 'E') // 도착점에 도달 시
			{
				result = now.depth; //거리 저장
				break;
			}

			for (int i = 0; i < 4; i++) //4방향 탐색
			{
				int x = now.x + dx[i];
				int y = now.y + dy[i];

				if (x >= 0 && x < n && y >= 0 && y < m && !visit[x][y] && (arr[x][y] == '-' || arr[x][y] == 'E'))
				{
					//범위 내부에 있고, 방문하지 않았으며, 이동 가능한 곳일 때
					visit[x][y] = true; //방문 처리
					maze.push({ x, y, now.depth + 1 }); //큐에 추가
				}

			}
		}




		cout << result << endl;
	}

	return 0;
}
/**************************************************************
	Problem: 1316
	Language: C++
	Result: Accepted
	Time:13 ms
	Memory:2028 kb
****************************************************************/

