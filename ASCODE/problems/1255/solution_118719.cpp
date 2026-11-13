#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int T = 0; T < t; T++)
	{
		int ax1, ax2, ay1, ay2, bx1, bx2, by1, by2;

		cin >> ax1 >> ay1 >> ax2 >> ay2 >> bx1 >> by1 >> bx2 >> by2;

		int axmin = min(ax1, ax2);
		int aymin = min(ay1, ay2);

		int axmax = max(ax1, ax2);
		int aymax = max(ay1, ay2);

		int bxmin = min(bx1, bx2);
		int bymin = min(by1, by2);

		int bxmax = max(bx1, bx2);
		int bymax = max(by1, by2);

		int dx = min(axmax, bxmax) - max(axmin, bxmin);
		int dy = min(aymax, bymax) - max(aymin, bymin);

		int sum = 0;

		if (dx > 0 && dy > 0)
			sum = dx * dy;


		cout << sum << endl;

	}

	return 0;
}
/**************************************************************
	Problem: 1255
	Language: C++
	Result: Accepted
	Time:23 ms
	Memory:2028 kb
****************************************************************/

