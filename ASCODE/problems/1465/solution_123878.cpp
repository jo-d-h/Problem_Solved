#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int T = 0; T < t; T++)
    {
        int n, m;
        cin >> n >> m;

        long long cnt = (long long)(m - n + 1);
        long long sum = cnt * (n + m) / 2;

        cout << sum << endl;
    }

    return 0;
}

/**************************************************************
	Problem: 1465
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

