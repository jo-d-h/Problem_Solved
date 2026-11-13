#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int T = 0; T < t; T++)
	{
		int n;
		cin >> n;

		int m[1000];

		for (int i = 0; i < n; i++)
		{
			cin >> m[i];
		}

		sort(m, m + n);

		for (int i = 0; i < n; i++)
		{
			if (i != 0)
			{
				if (m[i] != m[i - 1])
				{
					cout << m[i] << " ";
				}
			}

			else
			{
				cout << m[i] << " ";
			}
		}

		cout << endl;
	}

	return 0;
}
/**************************************************************
	Problem: 1262
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

