#include <iostream>
using namespace std;

long long gcd(long long a, long long b) 
{
    while (b != 0) 
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    long long arr[200000];
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] *= 2;
    }

    long long result = arr[0];

    for (int i = 1; i < n; i++)
    {
        long long g = gcd(result, arr[i]);
        result = result / g * arr[i];
    }

    cout << result << endl;
    return 0;
}