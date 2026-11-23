#include <iostream>
using namespace std;

int main()
{
	while (1)
	{
		int a, b;

		cin >> a >> b;

		int c;

		if (a == 0 && b == 0)
			break;

		if (b % a == 0)
			c = 1;

		else if (a % b == 0)
			c = 2;

		else
			c = 3;

		switch (c)
		{
			case 1:
				cout << "factor" << endl;
				break;

			case 2:
				cout << "multiple" << endl;
				break;

			case 3:
				cout << "neither" << endl;
				break;
		}

	}

	return 0;
}