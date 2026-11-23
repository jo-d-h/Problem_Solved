#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int answer = 0;

    for (int i = 1; i <= n; i++)
    {
        int tmp = i;
        int sum = i;

        while (tmp > 0)
        {
            sum += tmp % 10;
            tmp /= 10;
        }

        if (n == sum)
        {
            answer = i;
            break;
        }
    }

	cout << answer << endl;

    return 0;
}