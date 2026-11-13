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

		int m[1001], su, max = 0;

		for (int i = 0; i <= 1000; i++)
			m[i] = 0;

		for (int i = 0; i < n; i++)
		{
			cin >> su;

			m[su] = 1;

			if (su > max)
			{
				max = su;
			}
		}

		for (int i = 1; i <= max; i++)
		{
			if (m[i] == 1)
			{
				cout << i << " ";
			}
		}

		cout << endl;
	}

	return 0;
}
/**************************************************************
	Problem: 1471
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

