#include <iostream>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;

    int a = n, b = m;

    while (m != 0)
    {
        int q = n / m;
        int r = n % m;

        cout << n << " = " << q << " * " << m;

        if (r != 0) 
        {
            cout << " + " << r;
        }

        cout << endl;

        n = m;
        m = r;
    }

    cout << endl << "(" << a << "," << b << ") = " << n << endl;

    return 0;
}
/**************************************************************
	Problem: 1527
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

