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
		int a[50];

		cin >> n;
		
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		sort(a, a + n);

		bool reduce = true;

		for (int i = 0; i < n - 1; i++)
		{
			if (a[i + 1] - a[i] > 1)
			{
				reduce = false;
				break;
			}
		}

		if (reduce)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}


/**************************************************************
	Problem: 1453
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:2028 kb
****************************************************************/

