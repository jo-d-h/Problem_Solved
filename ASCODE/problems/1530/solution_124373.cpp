#include <iostream>
using namespace std;
 
int main() 
{
    int t;
    cin >> t;
 
    for (int T = 0; T < t; T++)
    {
        int x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
 
        int x4 = x1 ^ x2 ^ x3;
        int y4 = y1 ^ y2 ^ y3;
 
        cout << x4 << " " << y4 << endl;
    }
 
    return 0;
}
/**************************************************************
	Problem: 1530
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

