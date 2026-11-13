#include <stdio.h>
#include <iostream>
#include<algorithm>
#pragma warning (disable:4996)
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int T = 0; T < t; T++)
    {
        int n;
        cin >> n;

        int bong[20000];

        for (int i = 0; i < n; i++)
        {
            cin >> bong[i];
        }

        sort(bong, bong + n, greater<int>());

        int a, b, c, sum = 0;
        bool found = false;

        for (int i = 0; i < n - 2; i++)
        {
            int x = bong[i];
            int y = bong[i + 1];
            int z = bong[i + 2];

            if (y + z > x)
            {
                sum = x + y + z;
                a = x;
                b = y;
                c = z;
                found = 1;
                break;
            }
        }

        if (found)
            cout << sum << " : " << a << " " << b << " " << c << endl;
        else
            cout << "No triangle!" << endl;
    }
}
/**************************************************************
	Problem: 1406
	Language: C++
	Result: Accepted
	Time:65 ms
	Memory:2028 kb
****************************************************************/

