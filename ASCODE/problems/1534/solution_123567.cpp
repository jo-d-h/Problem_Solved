#include <iostream>
using namespace std;

int main() 
{
	int x1, y1, x2, y2;
	int x3, y3, x4, y4;

	cin >> x1 >> y1 >> x2 >> y2;
	cin >> x3 >> y3 >> x4 >> y4;

    int dx1 = x2 - x1;
    int dy1 = y2 - y1;
    int dx2 = x4 - x3;
    int dy2 = y4 - y3;

    if (dx1 * dx2 + dy1 * dy2 == 0)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

	return 0;
}
/**************************************************************
	Problem: 1534
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:2028 kb
****************************************************************/

