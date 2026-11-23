#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	deque<int> q;

	int n;
	cin >> n;

	for (int N = 0; N < n; N++)
	{
		int num;
		cin >> num;

		int inp;

		switch (num)
		{
		case 1:
			cin >> inp;

			q.push_front(inp);
			break;

		case 2:
			cin >> inp;

			q.push_back(inp);
			break;

		case 3:
			if (!q.empty())
			{
				cout << q.front() << '\n';
				q.pop_front();
			}

			else
			{
				cout << -1 << '\n';
			}
			break;

		case 4:
			if (!q.empty())
			{
				cout << q.back() << '\n';
				q.pop_back();
			}

			else
			{
				cout << -1 << '\n';
			}
			break;

		case 5:
			cout << q.size() << '\n';
			break;

		case 6:
			if (!q.empty())
			{
				cout << "0" << '\n';
			}

			else
			{
				cout << "1" << '\n';
			}
			break;

		case 7:
			if (!q.empty())
			{
				cout << q.front() << '\n';
			}

			else
			{
				cout << "-1" << '\n';
			}

			break;

		case 8:
			if (!q.empty())
			{
				cout << q.back() << '\n';
			}

			else
			{
				cout << "-1" << '\n';
			}

			break;
		}

	}


	return 0;
}