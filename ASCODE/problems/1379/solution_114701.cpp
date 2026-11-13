#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int T = 0; T < t; T++)
	{
		int n;
		cin >> n;

		int arr[101];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		sort(arr, arr + n);

		int sum = 0;

		for (int i = 0; i < 5; i++)
		{
			sum += arr[i];
		}

		printf("%.1f\n", (float)sum / 5);
	}

	return 0;
}
/**************************************************************
	Problem: 1379
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:2028 kb
****************************************************************/

