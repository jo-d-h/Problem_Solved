#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int T = 0; T < t; T++)
	{
		int arr[7];
		int max, min;

		for (int i = 0; i < 7; i++)
		{
			cin >> arr[i];
		}

		sort(arr, arr + 7);

		min = arr[0];
		max = arr[6];

		if (max - min >= 5)
		{
			int sum = 0;

			for (int i = 2; i <= 4; i++)
			{
				sum += arr[i];
			}

			cout << sum / 3 << endl;
		}
		else
		{
			int sum = 0;

			for (int i = 1; i <= 5; i++)
			{
				sum += arr[i];
			}

			cout << sum / 5 << endl;
		}



	}

	return 0;
}
/**************************************************************
	Problem: 1112
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

