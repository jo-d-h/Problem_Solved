#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;


	for (int T = 0; T < t; T++)
	{
		int l;
		cin >> l;

		deque<int> q1, q2;

		int sum1 = 0, sum2 = 0;

		for (int i = 0; i < l; i++)
		{
			int x;
			cin >> x;
			q1.push_back(x);
			sum1 += x;
		}

		for (int i = 0; i < l; i++)
		{
			int x;
			cin >> x;
			q2.push_back(x);
			sum2 += x;
		}

		int yes = 0;
		int count = 0;
		long long total = sum1 + sum2;

		if (total % 2 != 0)
		{
			cout << "-1" << "\n";
			continue;
		}
		
		while (count < 3 * l)
		{
			if (sum1 == sum2)
			{
				cout << count << "\n";
				break;
			}
		
			else if (sum1 >= sum2)
			{
				int tmp = q1.front();
				q1.pop_front();
				q2.push_back(tmp);

				sum1 -= tmp;
				sum2 += tmp;

				count++;
			}

			else
			{
				int tmp = q2.front();
				q2.pop_front();
				q1.push_back(tmp);

				sum2 -= tmp;
				sum1 += tmp;

				count++;
			}
		}

		if (count >= 3 * l)
		{
			cout << "-1" << "\n";
		}
	}

	return 0;
}
/**************************************************************
	Problem: 1329
	Language: C++
	Result: Accepted
	Time:196 ms
	Memory:2184 kb
****************************************************************/

