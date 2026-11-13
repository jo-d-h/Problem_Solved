#include <iostream>

using namespace std;

int arr[501][501] = {};

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			arr[i][j] += max(arr[i + 1][j], arr[i + 1][j + 1]);
		}
	}

	cout << arr[1][1] << endl;

	return 0;
}
/**************************************************************
	Problem: 1334
	Language: C++
	Result: Accepted
	Time:24 ms
	Memory:3008 kb
****************************************************************/

