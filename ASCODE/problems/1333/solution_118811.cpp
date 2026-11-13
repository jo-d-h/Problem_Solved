#pragma warning(disable:4996)
#include <iostream>
#include <cmath>
using namespace std;

int abundant(int n)
{
	int sum = 1;
	int sqrtN = sqrt(n);

	for (int i = 2; i <= sqrtN; i++)
	{
		if (n % i == 0)
		{
			sum += i;

			if (i != n / i)
			{
				sum += n / i;
			}
		}
	}

	return sum;
}

int main()
{
    int t;
	cin >> t;

    for (int T = 0; T < t; T++)
    {
        int n, m;
		cin >> n >> m;

        int count = 0;

		for (int i = n; i <= m; i++)
		{
			if (i == 1)
			{
				continue;
			}

			if (abundant(i) > i)
			{
				count++;
			}
		}



		if (count == 0)
		{
			cout << n << "-" << m << ":" << "NO" << endl;
		}
		else
		{
			cout << n << "-" << m << ":" << count << endl;
		}
    }

    return 0;
}
/**************************************************************
	Problem: 1333
	Language: C++
	Result: Accepted
	Time:56 ms
	Memory:2040 kb
****************************************************************/

