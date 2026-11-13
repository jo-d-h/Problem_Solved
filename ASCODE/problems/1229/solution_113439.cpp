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

        long long num = m - n + 1;

        sum = (num * (n + m) / 2);

        cout << sum << endl;
    }

    return 0;
}
/**************************************************************
	Problem: 1229
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:2028 kb
****************************************************************/

