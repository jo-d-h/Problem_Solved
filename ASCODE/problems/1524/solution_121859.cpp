#include <iostream>
#include <algorithm>

using namespace std;

long long result(int n, int r)
{
	long long result = 1;

	if (r > n - r)
	{
		r = n - r;
	}

	for (int i = 1; i <= r; i++)
	{
		result = result * (n - r + i) / i;
	}

	return result;
}




int main()
{
	int t;
	cin >> t;

	for (int T = 0; T < t; T++)
	{
		int n, r;
		cin >> n >> r;

		cout << result(n, r) << endl;
	}

	return 0;
}
/**************************************************************
	Problem: 1524
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

