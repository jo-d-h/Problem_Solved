#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	while (b != 0)
	{
        int remain = a % b;
        a = b;
        b = remain;
	}

	return a;
}


int main()
{
    int t;
    cin >> t;
    
    for (int T = 0; T < t; T++)
    {
        int a, b;
		cin >> a >> b;

        int g = gcd(a, b);
        int lcn = a * b / g;

		cout << lcn << endl;
    }

    return 0;
}
