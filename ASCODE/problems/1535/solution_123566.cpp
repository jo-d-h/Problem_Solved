#include <iostream>
using namespace std;

int main() 
{
	long long sum = 0;

	while (1)
	{
		
		int n;
		cin >> n;
		
		

		if (n == 0)
		{
			cout << sum << endl;
			break;
		}

		sum += n;

	}

	return 0;
}
/**************************************************************
	Problem: 1535
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2024 kb
****************************************************************/

