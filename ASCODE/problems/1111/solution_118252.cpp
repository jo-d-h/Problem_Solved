#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    string c;
    cin >> a >> b >> c;

    if (c == "+")
        cout << a + b << endl;
    else if (c == "-")
        cout << a - b << endl;
    else if (c == "*")
        cout << a * b << endl;
    else if (c == "/")
    {
        cout.precision(3);
        cout << fixed << (float)a / b << endl;
    }
    else if (c == "//")
    {
        cout << a / b << endl;
    }
    else if (c == "%")
        cout << a % b << endl;
    else
        cout << "Mission Impossible" << endl;


    return 0;
}
/**************************************************************
	Problem: 1111
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

