#include <iostream>
#include <algorithm>

using namespace std;

const int MOD = 100000007;
const int MAXN = 10000 + 1;

long long fact[MAXN];
long long inv_fact[MAXN];

long long power(long long a, long long b)
{
    long long res = 1;
    while (b)
    {
        if (b % 2) res = res * a % MOD;
        a = a * a % MOD;
        b /= 2;
    }
    return res;
}

void init()
{
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++)
    {
        fact[i] = fact[i - 1] * i % MOD;
    }

    inv_fact[MAXN - 1] = power(fact[MAXN - 1], MOD - 2);
    for (int i = MAXN - 2; i >= 0; i--)
    {
        inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
    }
}

long long result(int n, int r)
{
    if (r > n - r)
    {
        r = n - r;
    }

    return fact[n] * inv_fact[r] % MOD * inv_fact[n - r] % MOD;
}

int main()
{
    init();

    int t;
    cin >> t;

    for (int T = 0; T < t; T++)
    {
        int n, r;
        cin >> n >> r;

        cout << result(n, r) << endl;
    }

    return 0;
}

/**************************************************************
	Problem: 1537
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2184 kb
****************************************************************/

