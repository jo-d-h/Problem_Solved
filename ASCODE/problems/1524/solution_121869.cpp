#include <iostream>
#include <algorithm>
 
using namespace std;

unsigned ncr(unsigned n, unsigned r)
{
    long long m[101][101] = {};

    if (r == 0 || n == r)
        return 1;

    if (m[n][r] != 0)
        return m[n][r];

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
 
        cout << ncr(n, r) << endl;
    }
 
    return 0;
}
/**************************************************************
	Problem: 1524
	Language: C++
	Result: Accepted
	Time:781 ms
	Memory:2028 kb
****************************************************************/

