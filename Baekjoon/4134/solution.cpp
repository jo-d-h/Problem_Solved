#include <cmath>
#include <iostream>
using namespace std;

bool is_prime(long long n) 
{
    if (n < 2) 
        return false;

    if (n == 2) 
        return true;

    if (n % 2 == 0) 
        return false;

    for (long long i = 3; i * i <= n; i += 2) 
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() 
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) 
    {
        long long n;
        cin >> n;
        while (!is_prime(n)) 
        {
            n++;
        }

        cout << n << '\n';
    }
    return 0;
}
