#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int T = 0; T < t; T++)
    {
        int m = 1;
        int even = 0;

        int n;
        cin >> n;

        
        while (n != 1)
        {
            if (n % 2 == 1)
            {
                n = 3 * n + 1;
                m++;
            }
            else
            {
                n /= 2;
                m++;
                even++;
            }
        }

        printf("%d %d\n", m, even);
    }

    return 0;
}
/**************************************************************
	Problem: 1152
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:2028 kb
****************************************************************/

