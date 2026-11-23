#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int a[10000];
	int p = 1;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			a[p] = i;
			p++;
		}
	}

	cout << a[k] << endl;

	return 0;
}