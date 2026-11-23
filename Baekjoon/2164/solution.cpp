#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> q;

	int n;
	cin >> n;

	for (int N = 1; N <= n; N++)
	{
		q.push(N);
	}

	while (q.size() > 1)
	{
		q.pop();

		q.push(q.front());
		q.pop();
	}

	cout << q.front() << '\n';


	return 0;
}