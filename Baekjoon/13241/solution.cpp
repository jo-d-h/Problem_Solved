#include <iostream>
using namespace std;

int gcd(long long int a, long long int b)
{
	while (b != 0)
	{
        long long int remain = a % b;
        a = b;
        b = remain;
	}

	return a;
}


int main()
{
    long long int a, b;
    cin >> a >> b;

    long long int g = gcd(a, b);
    long long int lcn = a * b / g;

    cout << lcn << endl;

    return 0;
}
