#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int m;
	cin >> m;

	for (int a = 1; a <= m; a++)
	{
		for (int b = a; b <= m; b++)
		{
			int c = sqrt(a * a + b * b);
			
			if (c > m)
				continue;

			if (c * c == a * a + b * b)
			{
				cout << a << ", " << b << ", " << c << endl;
			}
		}
	}

	
}


/**************************************************************
	Problem: 1432
	Language: C++
	Result: Accepted
	Time:25 ms
	Memory:2040 kb
****************************************************************/

