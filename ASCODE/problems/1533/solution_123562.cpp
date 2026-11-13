#include <iostream>
using namespace std;

int main() 
{
    int t;
	cin >> t;

	for (int T = 0; T < t; T++)
	{
		int n;
		cin >> n;

		if (n % 2 == 0) //짝수인 경우
		{
			n++;
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == j || i + j == n - 1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}

			cout << endl;
		}
	}
}
/**************************************************************
	Problem: 1533
	Language: C++
	Result: Accepted
	Time:5 ms
	Memory:2028 kb
****************************************************************/

