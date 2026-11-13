#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    for (int T = 0; T < t; T++)
    {
        int a, b, c, d;

        cin >> a >> b >> c >> d;

        double A = b * log(a);
        double B = d * log(c);

        if (A > B)
        {
            cout << a << "^" << b << endl;
        }

        else if (A < B)
        {
            cout << c << "^" << d << endl;
        }

        else
        {
            cout << "SAME" << endl;
        }
    }

    return 0;
}
/**************************************************************
	Problem: 1352
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:2124 kb
****************************************************************/

