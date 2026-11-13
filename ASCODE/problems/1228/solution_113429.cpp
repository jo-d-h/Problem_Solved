#pragma warning(disable:4996)
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int T = 0; T < t; T++)
    {
        long long n, m;
        long long sum = 0;

        cin >> n >> m;

        for (int i = n; i <= m; i++)
        {
            sum += i;
        }

        cout << sum << endl;
    }

    return 0;
}
/**************************************************************
	Problem: 1228
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

