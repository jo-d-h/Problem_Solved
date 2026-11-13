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

	int n;
	cin >> n;

	long long catalan = factorial(2 * n) / (factorial(n + 1) * factorial(n));

	cout << catalan << endl;

	return 0;
}
/**************************************************************
	Problem: 1531
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:2028 kb
****************************************************************/

