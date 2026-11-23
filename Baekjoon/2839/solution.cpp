#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int answer = -1;

	for (int i = 0; i <= n / 5; i++)
	{
		int remain = n - (i * 5);

		if (remain % 3 == 0)
		{
			int j = remain / 3;
			int total = i + j;

			if (answer == -1 || total < answer)
			{
				answer = total;
			}
		}
	}

	cout << answer << endl;

	return 0;
}