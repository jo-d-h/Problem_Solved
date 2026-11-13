#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int T = 0; T < t; T++)
    {
        int i, j;
        cin >> i >> j;

        if (j > i)
        {
            int tmp = i;
            i = j;
            j = tmp;
        }

        int max_m = 0, min_m = 1000000;

        for (int p = i; p >= j; p--)
        {
            int m = 1;
            int q = p;

            while (q != 1)
            {
                if (q % 2 == 1)
                {
                    q = 3 * q + 1;
                    m++;
                }
                else
                {
                    q /= 2;
                    m++;
                }
            }

            if (m > max_m)
                max_m = m;
            if (m < min_m)
                min_m = m;
        }

        printf("%d %d\n", max_m, min_m);
    }

    return 0;
}
/**************************************************************
	Problem: 1089
	Language: C++
	Result: Accepted
	Time:7 ms
	Memory:2028 kb
****************************************************************/

