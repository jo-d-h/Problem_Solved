#include <iostream>
using namespace std;

int main()
{
	while (1)
	{
		int n;
		cin >> n;

		if (n == -1)
			break;

		int is_perfect = 1;
		int num[100000];
		int p = 1;

		for (int i = 1; i <= n / 2; i++)
		{			
			if (n % i == 0)
			{
				num[p] = i;
				p++;
			}
		}

		int sum = 0;

		for (int j = 1; j < p; j++)
		{
			sum += num[j];
		}

		if (n != sum)
		{
			is_perfect = 0;
		}
		
		if (is_perfect)
		{
			cout << n << " = ";

			for (int r = 1; r < p; r++)
			{
				if (r == 1)
				{
					cout << num[1];
				}
				else
				{
					cout << " + " << num[r];
				}

				if (r == p - 1)
				{
					cout << endl;
				}
			}
		}

		else
		{
			cout << n << " is NOT perfect." << endl;
		}


	}
}