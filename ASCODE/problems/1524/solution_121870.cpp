#include <iostream>
#include <algorithm>
 
using namespace std;

long long m[101][101] = {};

unsigned ncr(unsigned n, unsigned r)
{
    r = min(r, n - r);

    if (m[n][r] != 0)
        return m[n][r];

    if (r == 0 || n == r)
        return m[n][r] = 1;

    return m[n][r] = ncr(n - 1, r - 1) + ncr(n - 1, r);
}
 
 
 
 
int main()
{
    int t;
    cin >> t;
 
    for (int T = 0; T < t; T++)
    {
        int n, r;
        cin >> n >> r;
 
        cout << ncr(n, r) << "\n";
    }
 
    return 0;
}
/**************************************************************
	Problem: 1524
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2108 kb
****************************************************************/

