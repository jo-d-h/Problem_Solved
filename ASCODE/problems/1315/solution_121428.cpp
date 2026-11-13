#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int T = 0; T < t; T++)
	{
		queue<int> q;

		int n;
		cin >> n;

		for (int N = 0; N < n; N++)
		{
			string x;
			cin >> x;

			if (x == "In")
			{
				int num;
				cin >> num;

				q.push(num);
			}

			else if (x == "Out")
			{
				if (!q.empty())
				{
					cout << q.front() << endl;
					q.pop();
				}

				else
				{
					cout << "Empty" << endl;
				}
			}

		}


	}

	return 0;
}
/**************************************************************
	Problem: 1315
	Language: C++
	Result: Accepted
	Time:9 ms
	Memory:2032 kb
****************************************************************/

