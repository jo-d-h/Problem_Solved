#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> q;

	int n;
	cin >> n;

	for (int N = 0; N < n; N++)
	{
		string x;
		cin >> x;

		if (x == "push")
		{
			int num;
			cin >> num;

			q.push(num);
		}

		else if (x == "pop")
		{
			if (!q.empty())
			{
				cout << q.front() << '\n';
				q.pop();
			}

			else
			{
				cout << "-1" << '\n';
			}
		}

		else if (x == "size")
		{
			cout << q.size() << '\n';
		}

		else if (x == "empty")
		{
			if (q.size() == 0)
			{
				cout << "1" << '\n';
			}

			else
			{
				cout << "0" << '\n';
			}
		}

		else if (x == "front")
		{
			if (!q.empty())
			{
				cout << q.front() << '\n';
			}
			else
			{
				cout << "-1" << '\n';
			}
		}

		else if (x == "back")
		{
			if (!q.empty())
			{
				cout << q.back() << '\n';
			}

			else
			{
				cout << "-1" << '\n';
			}
		}

	}


	return 0;
}