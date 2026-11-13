#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int m;
	cin >> m;

	for (int a = 1; a <= m / sqrt(2); a++)
	{
		for (int b = a; b <= m; b++)
		{
			int sum = a * a + b * b;
			int c = sqrt(sum);
			
			if (c > m)
				continue;

			if (c * c == sum)
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
	Time:23 ms
	Memory:2040 kb
****************************************************************/

