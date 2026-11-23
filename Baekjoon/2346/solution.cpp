#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;

	deque <pair<int, int>> b;

	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;

		b.push_back({ i, x });
	}

    while (!b.empty())
    {
        int idx = b.front().first;
        int move = b.front().second;
        b.pop_front();

        cout << idx << ' ';

        if (b.empty())
            break;

        // 양수: 오른쪽 이동 (앞에서 pop, 뒤에 push)
        if (move > 0)
        {
            for (int i = 0; i < move - 1; i++)
            {
                b.push_back(b.front());
                b.pop_front();
            }
        }
        // 음수: 왼쪽 이동 (뒤에서 pop, 앞에 push)
        else {
            for (int i = 0; i < -move; i++)
            {
                b.push_front(b.back());
                b.pop_back();
            }
        }
    }

	return 0;
}