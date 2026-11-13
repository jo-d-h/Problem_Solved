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

		int dx = min(max(ax1, ax2), max(bx1, bx2)) - max(min(ax1, ax2), min(bx1, bx2));
		int dy = min(max(ay1, ay2), max(by1, by2)) - max(min(ay1, ay2), min(by1, by2));

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
	Time:24 ms
	Memory:2028 kb
****************************************************************/

