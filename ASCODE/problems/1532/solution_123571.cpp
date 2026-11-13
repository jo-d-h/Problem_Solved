#include <iostream>
using namespace std;

long long factorial(int n)
{
	long long res = 1;

	for (int i = 2; i <= n; i++)
		res *= i;

	return res;
}


int main() 
{
	int t;
	cin >> t;

	for (int T = 0; T < t; T++)
	{
		int n;
		cin >> n;

		long long num = factorial(2 * n) / factorial(n);
		long long den = factorial(n + 1);
		long long result = num / den;

		cout << num << " / " << den << " = " << result << endl;
	}

	return 0;
}
/**************************************************************
	Problem: 1532
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

