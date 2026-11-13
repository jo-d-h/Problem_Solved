#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a, b;
    char c;

    cin >> a >> c >> b;

    if ((c == '/' || c == '%') && b == 0) 
    {
        cout << "Mission Impossible" << endl;
    }
    else if (c == '+') 
    {
        cout << a + b << endl;
    }
    else if (c == '-') 
    {
        cout << a - b << endl;
    }
    else if (c == 'x') 
    {
        cout << a * b << endl;
    }
    else if (c == '/') 
    {
        printf("%.5f\n", (float)a / b);
    }
    else if (c == '%') 
    {
        cout << a % b << endl;
    }
    else 
    {
        cout << "Mission Impossible" << endl;
    }

    return 0;
}
/**************************************************************
	Problem: 1361
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

