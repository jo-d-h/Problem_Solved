#include <iostream>
using namespace std;

int main() {
	int n, m;
	char yn;
	cin >> n >> m >> yn;

	int count = 0;

	if (n >= 38)
	{
		count++;
	}

	if (m >= 38)
	{
		count++;
	}

	if (yn == 'Y' || yn == 'y')
	{
		count++;
	}

	if (count >= 2)
	{
		cout << "격리 대상" << endl;
	}
	else
	{
		cout << "정상" << endl;
	}
}
/**************************************************************
	Problem: 1521
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:2028 kb
****************************************************************/

