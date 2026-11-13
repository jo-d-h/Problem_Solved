#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int day = 0;

        while (1)
        {
            if (n == 1)
                break;

            day++;

            if (n % 2 == 0)
                n /= 2;
            else
                n = (n * 3) + 1;

            
        }

        cout << day << endl;
    }

    return 0;
}
/**************************************************************
	Problem: 1236
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

