#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int T = 0; T < t; T++)
    {
        int a[3];
        int b[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < 3; i++)
        {
            cin >> b[i];
        }

        int n = 1;

        while (1)
        {
            if (n % a[0] == b[0] && n % a[1] == b[1] && n % a[2] == b[2])
            {
                cout << n << endl;
                break;
            }

            n++;
        }
    }

    return 0;
}
/**************************************************************
	Problem: 1332
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:2028 kb
****************************************************************/

