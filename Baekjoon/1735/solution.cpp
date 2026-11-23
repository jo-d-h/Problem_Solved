#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() 
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int n = A * D + C * B;
    int d = B * D;

    int g = gcd(n, d);

    cout << n / g << " " << d / g << endl;
    return 0;
}
