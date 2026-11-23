#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	deque<int> q;
	int arr[1000];
	int num = 0;

	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		q.push_back(i);
	}

	while (!q.empty())
	{
		for (int i = 1; i < k; i++)
		{
			q.push_back(q.front());
			q.pop_front();
		}
		arr[num++] = q.front();
		q.pop_front();
	}

	for (int i = 0; i < num; i++)
	{
		if (i == 0)
		{
			cout << "<" << arr[i];
		}
		else
		{
			cout << ", " << arr[i];
		}
	}

	cout << ">\n";

	return 0;
}