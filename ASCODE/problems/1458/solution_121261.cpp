#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> factorize(int n) 
{
    vector<int> factors;

    for (int i = 2; i * i <= n; ++i) 
    {
        while (n % i == 0) 
        {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) 
        factors.push_back(n);

    sort(factors.rbegin(), factors.rend());

    return factors;
}

int main() 
{
    int t;
    cin >> t;
    for (int T = 0; T < t; T++)
    {
        int n;
        cin >> n;

        vector<int> factors = factorize(n);

        for (int i = 0; i < factors.size(); ++i) 
        {
            cout << factors[i];

            if (i + 1 < factors.size()) 
                cout << " ";
        }

        cout << endl;
    }
    return 0;
}

/**************************************************************
	Problem: 1458
	Language: C++
	Result: Accepted
	Time:3 ms
	Memory:2028 kb
****************************************************************/

